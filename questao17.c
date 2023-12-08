#include <stdio.h>

int main(){

    int vetor[10];

    for (int i = 0; i < 10; i++) {
        printf("\ninsira o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (vetor[i] < 0) {
            vetor[i] = 0;
        }
        printf("\nvalores: %d\n", vetor[i]);
    }

    return 0;
}
