#include <stdio.h>

int main(){

    int v[10], v1[10], v2[10];
    int n1 = 0, n2 = 0;

    printf("\ndigite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (v[i] % 2 == 0) {
            v2[n2] = v[i];
            n2++;
        } else {
            v1[n1] = v[i];
            n1++;
        }
    }

    printf("\nelementos utilizados de v1 (valores impares):\n");
    for (int i = 0; i < n1; i++) {
        printf("%d ", v1[i]);
    }

    printf("\n");

    printf("\nelementos utilizados de v2 (valores pares):\n");
    for (int i = 0; i < n2; i++) {
        printf("%d ", v2[i]);
    }

    printf("\n");

    return 0;
}
