#include <stdio.h>


// déclaration de la première fonction
void afficherMessage();

// déclaration de la deuxième fonction
int additionner(int a, int b);

int second_main();

int main() {
    // Code principal
    printf("Hello world !\n");
    second_main();  // Appel de la fonction second_main
    return 0;
}
/*Ceci est un commentaire */
// Ceci est aussi un commentaire



int second_main() {
    // appel de la première fonction
    afficherMessage();
    
    // appel de la deuxième fonction et affichage du résultat
    int resultat = additionner(5, 3);
    printf("Le résultat de l'addition est : %d\n", resultat);

    return 0;
}

// première fonction (procédure plus exactement)
void afficherMessage() {
    printf("Bonjour, voici une fonction simple !\n");
}

// deuxième fonction
int additionner(int a, int b) {
    return a + b;
}