#include <stdio.h>

int main(){

    int vetor[20], valorIgual;

    for (int i = 0; i < 20; i++) {
        printf("\ninsira o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 20; i++) {
        int valorIgual = 0;

        for (int j = i + 1; j < 20; j++) {
            if (vetor[i] == vetor[j]) {
                valorIgual = 1;
                break; 
            }
        }

        if (valorIgual != 1) {
            printf("\nelemento do vetor: %d\n", vetor[i]);
        }
    }

    return 0;
}
