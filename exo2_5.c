#include <stdio.h>
#include <stdlib.h>

void affichage(int nb_elem, int t[]) {
       for(int i=0; i<nb_elem; i++ ){
        printf("%d ", t[i]);
    }
}


int main() {
    int tab[] = {42, 17, 20, 23, 102, 68, 77};
    // printf("sizeof(tab): %d\n", sizeof(t));
    // printf("sizeof(tab[0]: %d\n", sizeof(t[0]));
    int nb_elem = sizeof(tab)/sizeof(tab[0]);

    // printf("sizeof(tab)/sizeof(tab[0]): %d\n", nb_elem);

    affichage(nb_elem, tab);

    return EXIT_SUCCESS;
}