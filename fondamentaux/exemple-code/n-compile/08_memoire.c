#include <stdio.h>
#include <stdlib.h>

static int compteur = 0; 

void afficher() {
    int x = 5; 
    printf("x = %d\n", x);
}

int main() {
    static int valeur = 10; 
    compteur++;
    printf("Compteur : %d\n", compteur);

    int* ptr = (int*) malloc(5 * sizeof(int));

    if (ptr == NULL) {
        printf("Allocation mémoire échouée\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    free(ptr);

    ptr = (int*) realloc(ptr, 10 * sizeof(int));

    if (ptr == NULL) {
        printf("Réallocation mémoire échouée\n");
        return 1;
    }

    for (int i = 5; i < 10; i++) {
        ptr[i] = (i + 1) * 10;
    }

    printf("Après réallocation et initialisation des nouvelles cases :\n");
    for (int i = 0; i < 10; i++) {
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    free(ptr);
    ptr = NULL;

    return 0;
}
