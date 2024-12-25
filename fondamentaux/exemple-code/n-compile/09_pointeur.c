#include <stdio.h>
#include <stdlib.h>

void echanger(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// accéder et modifier une variable
int exemple1() {
    int x = 42;
    int *p = &x; // Le pointeur `p` contient l'adresse de `x`

    printf("Valeur de x : %d\n", x);
    printf("Adresse de x : %p\n", (void*)&x); // %p pour afficher une adresse
    printf("Contenu de p (adresse de x) : %p\n", (void*)p);
    printf("Valeur pointée par p : %d\n", *p);
    return 0;
}

// éléments d'un tableau via un pointeur
int exemple2() {
    int arr[] = {1, 2, 3, 4, 5};
    int *p = arr; // pointe vers le premier élément

    printf("Premier élément : %d\n", *p);       
    printf("Deuxième élément : %d\n", *(p+1)); 

    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, *(p + i));
    }
    return 0;
}

// echanger deux variables avec des pointeurs
int exemple3() {
    int x = 10, y = 20;
    printf("Avant échange : x = %d, y = %d\n", x, y);

    echanger(&x, &y);

    printf("Après échange : x = %d, y = %d\n", x, y);
    return 0;
}

//tableau dynamique 
int exemple4() {
    int n;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int)); // Allocation de mémoire
    if (arr == NULL) {
        printf("Échec de l'allocation mémoire\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    printf("Tableau alloué dynamiquement : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}

int main() {
    printf("Exemple 1 :\n");
    exemple1();
    printf("\nExemple 2 :\n");
    exemple2();
    printf("\nExemple 3 :\n");
    exemple3();
    printf("\nExemple 4 :\n");
    exemple4();
    
    return 0;
}
