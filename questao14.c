#include<stdio.h>

int main(){


    int vetor[10], valores;

    for(int i = 0; i < 10; i++){
          printf("\ninsira 10 valores: ");
          scanf("%d", &vetor[i]);

    }
    for (int i = 0; i < 10; i++){
        valores = 0;

        for(int j = i + 1; j < 10; j++){
            if(vetor[i] == vetor[j]){
                valores = 1;
            }
        }
        if(valores==1){
           printf("\nvalores iguais encontrados: %d \n",vetor[i]);
        }

    }
}