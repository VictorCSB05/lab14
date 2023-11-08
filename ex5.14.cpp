#include <stdio.h>

float soma_array(float arr[100], int tam) {
    if (tam == 0) {
        return 0;
    } 
    else {
        return arr[tam-1] + soma_array(arr, tam-1);
    }
}

int main() {
    int tam;
    printf("Digite o tamanho do array: ");
    scanf("%d", &tam);

    float arr[100];
    for (int i = 0; i < tam; i++) {
        printf("Digite o número %d do array: ", i);
        scanf("%f", &arr[i]);
    }

    float resultado = soma_array(arr, tam);
    printf("A soma dos números do array é: %f \n", resultado);

}
