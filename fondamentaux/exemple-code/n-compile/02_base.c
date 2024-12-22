#include <stdio.h>
#include <stdlib.h>

// Fonction principale
int main() {
    // Déclarations des variables
    int a = 10;
    int b = 20;
    int somme;

    // Calcul
    somme = a + b;

    // Affichage du résultat
    printf("La somme de %d et %d est %d\n", a, b, somme); 
    // %d -> prend les valeurs dans la suite de l'instrucion 1 par 1 
    // cad d'abord a puis b 
    return 0;
}