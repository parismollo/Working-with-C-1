#include <stdlib.h>
#include <stdio.h>

#define constante 27
#define false 0
#define true 1

void suiteSyracuse(int, int);
void conjectureCollatz(int);

int main() {
    // suiteSyracuse(constante, true);
    conjectureCollatz(constante);
    return EXIT_SUCCESS;
}

void suiteSyracuse(int c, int bool) {
    int n = c;
    int tempsDeVol = 0;
    if(bool) {
        printf("%d ", c);
    }
    while (c !=1 ) {
        tempsDeVol++;
        if (c % 2 == 0) {
            c/=2;
            if(bool) {
                printf("%d ", c);
            }
        }else {
            c*=3;
            c+=1;
            if(bool) {
                printf("%d ", c);
            }
        }
    }
    // printf("\n----TEMPS DE VOL----");
    printf("\n%d : ", n);
    printf("%d", tempsDeVol);
}

void conjectureCollatz(int n) {
    for(int i=1; i<=n; i++) {
        suiteSyracuse(i, false);
    }
}