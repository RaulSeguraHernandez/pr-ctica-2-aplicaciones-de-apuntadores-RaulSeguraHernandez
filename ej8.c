// Intercambio de Valores
#include <stdio.h>

void intercambiar(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    // Implementar intercambio aquí
}

int main() {
    int arr[] = {5, 10};
    printf("%d, %d\n", arr[0], arr[1]);
    intercambiar(&arr[0],&arr[1]);
    // Código para llamar a la función y mostrar los valores intercambiados
    printf("%d, %d", arr[0], arr[1]);
    return 0;
}
