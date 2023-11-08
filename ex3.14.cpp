#include <stdio.h>


int mult(int a, int b) {
    if (b == 1) {
        return a;
    } 
    else {
        return a + mult(a,b-1);

    }

}

int main() {
  int a,b;
  printf("digite o valor de a:");
  scanf("%d",&a);
  printf("digite o valor de b:");
  scanf("%d",&b);
  int resultado = mult(a,b);
  printf("%d multiplicado por a %d é igual a %d\n", a, b, resultado);

}