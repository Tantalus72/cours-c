#include <stdio.h>

void afficher_tableau(int tableau[], int taille) {
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
}

int main() {
    int notes[5] = {1, 2, 3, 4, 5};
    
    int tableau[5] = {1, 2};  // {1, 2, 0, 0, 0}

    printf("1er note: %d\n", notes[0]);
    printf("dernière note: %d\n", notes[4]);  

    notes[1] = 20; 

    printf("Notes après modification: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", notes[i]);
    }
    printf("\n");

    afficher_tableau(notes, 5);

    //pour ajouter element, on doit redimensionner le tableau.
    notes[5] = 6;
    notes[6] = 7;

    printf("Notes après ajout d'un nouveau élément: ");
    afficher_tableau(notes, 7);
    return 0;
}
