#include <stdlib.h>
#include <stdio.h>


#define SUP 15

int main() {
    int tab[SUP] = {0};
    tab[0] = 1;
    tab[1] = 1;

    for(int i=2; i<SUP; i++) {
        if(tab[i] == 0) {
            int start = i * i;
            int step = i;
            for(int j=start; j<SUP; j+=step) {
                tab[j] = 1;
            }
        }
    }
    for(int i=0; i<SUP; i++) {
        if(!tab[i]) {
            printf("%d ", i);
        }
    }

    return EXIT_SUCCESS;
}