#include<stdio.h>

int main(){

    int vetor[10];

    for (int i = 0; i < 10; i++) {
        printf("\ninsira o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("valores inseridos:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}
