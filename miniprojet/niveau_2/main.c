#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

bool verification_parentheses(char chaine[]) {
    int compteur_ouverte = 0; 

    for (int i = 0; i < strlen(chaine); i++) {
        if (chaine[i] == '(') {
            compteur_ouverte++;
        } else if (chaine[i] == ')') {
            compteur_ouverte--;
        }

        if (compteur_ouverte < 0) {
            printf("Erreur de parenthese fermee à l'index' %d\n", i + 1);
            return false;
        }
    }

    if (compteur_ouverte != 0) {
        printf("Nombre de parentheses ouvertes et fermees inegal\n");
        return false;
    }

    return true;
}
int priorite(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

double appliquer_operation(double a, double b, char op) {
    printf("Applique l'operation : %.2f %c %.2f\n", a, op, b);
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': 
            if (b != 0) return a / b;
            printf("Division par 0\n");
            exit(EXIT_FAILURE);
        default: return 0;
    }
}
 
void pretraitement(char input[], char output[]) {
    int j = 0;
    for (int i = 0; i < strlen(input); i++) {
        if (isspace(input[i])) continue;

        output[j++] = input[i];
    }
    output[j] = '\0';
}

double calcule(char chaine[]) {
    double valeurs[1000];  
    char operateurs[1000];
    int top_valeurs = -1, top_operateurs = -1;

    for (int i = 0; i < strlen(chaine); i++) {
        char c = chaine[i];

        if (isspace(c)) continue;

        if (isdigit(c)) {
            double nombre = 0;
            while (i < strlen(chaine) && (isdigit(chaine[i]) || chaine[i] == '.')) {
                if (chaine[i] == '.') {
                    double fraction = 0.1;
                    i++;
                    while (i < strlen(chaine) && isdigit(chaine[i])) {
                        nombre += (chaine[i] - '0') * fraction;
                        fraction *= 0.1;
                        i++;
                    }
                    i--; 
                } else {
                    nombre = nombre * 10 + (chaine[i] - '0');
                }
                i++;
            }
            i--; 
            valeurs[++top_valeurs] = nombre;
        }
        else if (c == '(') {
            operateurs[++top_operateurs] = c;
        }
        else if (c == ')') {
            while (top_operateurs >= 0 && operateurs[top_operateurs] != '(') {
                double b = valeurs[top_valeurs--];
                double a = valeurs[top_valeurs--];
                char op = operateurs[top_operateurs--];
                valeurs[++top_valeurs] = appliquer_operation(a, b, op);
            }
            top_operateurs--;
        }

        else {
            while (top_operateurs >= 0 && priorite(operateurs[top_operateurs]) >= priorite(c)) {
                double b = valeurs[top_valeurs--];
                double a = valeurs[top_valeurs--];
                char op = operateurs[top_operateurs--];
                valeurs[++top_valeurs] = appliquer_operation(a, b, op);
            }
            operateurs[++top_operateurs] = c;
        }
    }

    while (top_operateurs >= 0) {
        double b = valeurs[top_valeurs--];
        double a = valeurs[top_valeurs--];
        char op = operateurs[top_operateurs--];
        valeurs[++top_valeurs] = appliquer_operation(a, b, op);
    }

    return valeurs[top_valeurs];
}

int main() { //usage unique
    char chaine[1000], preprocessed[1000];
    bool est_valide = false;

    printf("Entrez une expression mathematique (max 1000 caracteres) :\n");

    while (!est_valide) {
        if (!fgets(chaine, sizeof(chaine), stdin)) {
            printf("Erreur lors de la lecture de l'expression\n");
            return 1;
        }
        chaine[strcspn(chaine, "\n")] = '\0'; //supprime le saut de ligne

        est_valide = verification_parentheses(chaine);

        if (!est_valide) {
            printf("Veuillez ressaisir un calcule valide :\n");
        }
    }

    //pretraitement
    pretraitement(chaine, preprocessed);
    printf("Expression pretraitee : %s\n", preprocessed);

    //calcul
    double resultat = calcule(preprocessed);
    printf("Resultat du calcul : %.2f\n", resultat);

    return 0;
}
