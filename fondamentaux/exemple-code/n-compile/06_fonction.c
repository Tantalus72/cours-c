#include <stdio.h>

int addition(int x, int y){
    return x + y;
}
void incrementer(int x){
    x++;
    printf("Dans la fonction : x = %d\n", x);

}

void incrementer_pointeur(int *x){
    (*x)++;
    printf("Dans la fonction avec pointeur : x = %d\n", *x);
}
int factorielle(int n) { /*TOUJOURS UNE CONDITION DE FIN*/
    if (n == 0) {
        return 1;
    }
    return n * factorielle(n - 1);
}

int main() {



    int a = 5, b = 7;
    int resultat = addition(a, b);
    printf("La somme de %d et %d est %d\n", a, b, resultat);

    int x = 5;
    incrementer(x);
    printf("dans main : x = %d\n", x);

    int y = 5;
    int *ptr = &y;
    incrementer_pointeur(&ptr);
    printf("Dans main : y = %d\n", y);



    int n = 5;
    int result_factorielle = factorielle(n);
    
    printf("La factorielle de %d est %d\n", n, result_factorielle);
    
    return 0;
}
