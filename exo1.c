#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    int b;
    printf("Hello World\n");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("a + b: %d", a+b);
    return EXIT_SUCCESS;
}