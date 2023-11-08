#include <iostream>

int main() {
    int arr[] = {12, 24, 36, 48};
    int x = 6;
    int tam = sizeof(arr) / sizeof(arr[0]);

    bool todosDivisiveis = true;

    for (int i = 0; i < tam; i++) {
        if (arr[i] % x != 0) {
            todosDivisiveis = false;
            return 0;
        }
    }

    if (todosDivisiveis) {
        printf("Todos os números no array são divisíveis por %i ", x);
    } else {
        printf("Pelo menos um número no array não é divisível por %i ", x);
    }

    return 0;
}