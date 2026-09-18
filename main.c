#include <stdio.h>
#include <stdlib.h>
int main(void) {
    printf("Inserisci un numero decimale: \n");
    float *x = malloc(sizeof(float));
    scanf("%f", x);
    *x = *x * 1.20;
    printf("Valore +20%: %f", *x);
    free(x);
    return 0;
}