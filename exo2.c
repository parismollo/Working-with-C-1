#include <stdio.h>
#include <stdlib.h>


int lireInt() {
    int a;
    printf("Entrez un entier\n");
    scanf("%d", &a);
    return a;
}

int sommeCube(int a) {
    int res = 0;
    for(int i=1; i<=a; i++) {
        res += i * i * i;
    }
    return res;
}

int combienDeLectures() {
    int a;
    printf("Combien de numeros voulez vous inserer?\n");
    scanf("%d", &a);
    return a;
}

int fact(int n) {
    int res = 1;
    int c = 1;
    while (c<=n) {
        res *= c;
        c++;
    }
    return res;
}

void fact2(int n) {
    for(int i=1; i<=n; i++) {
        printf("\n%d!: ", i);
        printf("%d", fact(i));
    }
}


void creationTab(int n) {
    int res = 0;
    double moy = 0;
    for(int i=0; i<n; i++) {
        int aux;
        printf("Indiquez une valeur: ");
        scanf("%d", &aux);
        res += aux;
    }
    moy = res/n;
    printf("Somme: %d\n", res);
    printf("Moyenne: %lf\n", moy);
}

int main() {
    // int a = lireInt();
    // printf("%d", sommeCube(a));
    // int a = combienDeLectures();
    // creationTab(a);
    // int n = lireInt();
    // int res = fact(n);
    // printf("%d", res);
    int n = lireInt();
    fact2(n);
    return EXIT_SUCCESS;
}

