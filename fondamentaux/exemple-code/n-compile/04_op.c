#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;

    // Opérations arithmétiques
    printf("Addition : %d\n", a + b);
    printf("Soustraction : %d\n", a - b);
    printf("Multiplication : %d\n", a * b);
    printf("Division : %d\n", a / b);
    printf("Modulo : %d\n", a % b);

    // Incrémentation et décrémentation
    printf("Incrémentation : %d\n", ++a); // pré-incrémentation
    printf("Décrémentation : %d\n", --a); // pré-décrémentation

    // Opération de puissance
    printf("Opération XOR : %d\n", a ^ b); // Note : Ce n'est pas une puissance mais un XOR bit à bit

    // Conditions
    if (a == b) {
        printf("a = b\n");
    } else {
        printf("a != b\n");
    }

    if (a > b) {
        printf("a > b\n");
    } else if (a < b) {
        printf("a < b\n");
    }

    if (a >= 0 && b >= 0) {
        printf("a et b sont positifs\n");
    }

    // Création d'un nouveau bloc pour redéclarer les variables
    {
        int a = 5, b = 3; 
        printf("ET bit à bit : %d\n", a & b); 
        printf("OU bit à bit : %d\n", a | b); 
    }

    return 0;
}
