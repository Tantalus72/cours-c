#include <stdio.h>


int main() {
    int age = 25;
    printf("L'age est %d",age);
    // %d -> entier

    char initial = 'A';
    printf("L'initial est %c", initial);
    // %c -> character

    float pi1 = 3.14;
    printf("La temperature est %.2f", pi1);
    // %.2f -> reel avec 2 chiffres après la virgule
    // %f -> reel

    double grandNombre = 123456.789;
    printf("Le grand nombre est %.2lf", grandNombre);
    // %.2lf -> reel "long" avec 2 chiffres après la virgule

    /*Modificateur*/
    unsigned int positif = 42;
    printf("Le nombre positif est %u", positif);
    // %u -> unsigned donc entier positif uniquement

    signed int nombre1 = -42;
    printf("Le nombre est %d", nombre1);
    // %d -> entier signé

    


    short int nombre2 = 58;
    printf("Le nombre est %hd", nombre2);
    // %hd -> short int donc entier signé uniquement

    long int nombre3 = 123456789;
    printf("Le nombre est %ld", nombre3);
    // %ld -> long int donc entier signé uniquement

    long long int nombre4 = 987654321;
    printf("Le nombre est %lld", nombre4);
    // %lld -> long long int donc entier signé uniquement



    const float pi2 = 3.14159;
    #define TAILLE_MAX 100

    
    return 0;
 }

