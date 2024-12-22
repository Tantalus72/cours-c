#include <stdio.h>

int main() {
    int a = 10;
    int jour = 2; 
    if (a > 0) {
        printf("a est positif\n");
    } else if (a == 0) {
        printf("a est nul\n");
    } else {
        printf("a est négatif\n");
    }

    switch (jour) {
        case 1:
            printf("Lundi\n");
            break;
        case 2:
            printf("Mardi\n");
            break;
        case 3:
            printf("Mercredi\n");
            break;
        default:
            printf("Jour inconnu\n");
    }

   for (int i = 0; i < 5; i++) {
        printf("Itération : %d\n", i);
    }

    int i = 0; 
    while (i < 5) {
        printf("Itération : %d\n", i);
        i++;
    }

   i = 0; 
    do {
        printf("Itération : %d\n", i);
        i++;
    } while (i < 5);

    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            continue; 
        }
        printf("i = %d\n", i);
    }

    return 0;
}
