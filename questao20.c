#include <stdio.h>

int main(){

    int v1[10], v2[10], impar;

    for (int i = 0; i < 10; i++){
        do {
            printf("\ninsira 10 valores no intervalo de 0 - 50: ");
            scanf("%d", &v1[i]);

            if (v1[i] < 0 || v1[i] > 50) {
                printf("\nopcao invalida. insira novamente.");
            }
        } while (v1[i] < 0 || v1[i] > 50);
    }

    printf("\nvalores inseridos no vetor v1:\n");
    for (int i = 0; i < 10; i++){
        printf("%d ", v1[i]);
    }
    printf("\n");

    impar = 0;

    for (int i = 0; i < 10; i++) {
        if (v1[i] % 2 != 0) {
            impar = v1[i];
            v2[i] = impar;
            printf("numero impar em v2: %d\n", v2[i]);
        }
    }

    return 0;
}
