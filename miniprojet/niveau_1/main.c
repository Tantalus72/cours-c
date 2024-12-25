#include <stdbool.h>
#include <stdio.h>
int main() {
    bool continu = false;
    char dialogue;

    while (continu == false) {
        printf("Veuillez saisir un type d'opération (a->addition,s->soustraction,d->division,m->multiplication)\n"
               "Si vous souhaitez arreter entrer 'n' ");
        scanf("%s", &dialogue);
        if (dialogue == 'n') {
            continu = true;
        };
        float nombre1, nombre2;
        switch (dialogue) {
            case 'a':
                printf("Entrez les deux nombres à additionner\n");
                printf("premier nombre :\n");
                scanf("%f", &nombre1);
                printf("deuxième nombre :\n");
                scanf("%f", &nombre2);
                printf("La somme est : %f\n", nombre1 + nombre2);
                break;
            case 's':
                printf("Entrez les deux nombres à soustraire\n");
                printf("premier nombre :\n");
                scanf("%f", &nombre1);
                printf("deuxième nombre :\n");
                scanf("%f", &nombre2);
                printf("La différence est : %f\n", nombre1 - nombre2);
                break;
            case 'd':
                printf("Entrez les deux nombres à diviser\n");
                printf("premier nombre :\n");
                scanf("%f", &nombre1);
                printf("deuxième nombre :\n");
                scanf("%f", &nombre2);
                if (nombre2==0){
                    printf("Erreur : Division par zéro impossible\n");
                    break;
                }
                printf("Le resultat est : %.2f\n", nombre1 / nombre2);

                break;

            case 'm':
                printf("Entrez les deux nombres à multiplier\n");
                printf("premier nombre :\n");
                scanf("%f", &nombre1);
                printf("deuxième nombre :\n");
                scanf("%f", &nombre2);
                printf("Le produit est : %f\n", nombre1 * nombre2);
                break;
        }
        printf("Voulez-vous réaliser une autre opération? (o/n)\n");
        scanf("%s", &dialogue);
        if (dialogue == 'n') {
            continu = true;
        }
    }
    return 0;
}


