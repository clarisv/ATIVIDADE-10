#include <stdio.h>

int main(){

    float vetor[5];

    for (int i = 0; i < 5; i++){
        printf("\ninsira 5 valores: ");
        scanf("%f", &vetor[i]);
    }

    int codigo;
    while (1) {

        printf("\ndigite um codigo (0 para sair, 1 para mostrar direto, 2 para mostrar inverso): ");
        scanf("%d", &codigo);

        if (codigo == 0){
            break;
        } else if (codigo == 1){

            printf("\nvetor na ordem direta: ");
            for (int i = 0; i < 5; i++) {
                printf("%.2f ", vetor[i]);
            }
            printf("\n");

        } else if (codigo == 2){

            printf("\nvetor na ordem inversa: ");
            for (int i = 4; i >= 0; i--) {
                printf("%.2f ", vetor[i]);
            }
            printf("\n");
        } else {
            printf("\ncodigo invalido!\n");
        }
    }

    return 0;
}
