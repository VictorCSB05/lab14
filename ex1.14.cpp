#include <stdio.h>


int potencia(int x, int n) {
    if (n == 0) {
        return 1;
    } 
    else 
        return x * potencia(x, n - 1);
    } 


int main() {
  int x;
  int n;
  printf("digite o valor de x:");
  scanf("%d",&x);
  printf("digite o valor de n:");
  scanf("%d",&n);
  int resultado = potencia(x, n);
  printf("%d elevado a %d é igual a %d \n", x, n, resultado);

}