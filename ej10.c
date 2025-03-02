// 10. Ordenamiento con Apuntadores (Burbuja)
#include <stdio.h>

void intercambiar(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    // Implementar intercambio aquí
}

void ordenarBurbuja(int *arr, int tamaño) {
    int ordenado = 0;
    for(;(ordenado==0);){
        ordenado = 1;
        for(int i = 0; i<tamaño-1;i++){
            
            if(arr[i]>arr[i+1]){
                intercambiar(&arr[i], &arr[i+1]);
                ordenado=0;
            }

        }
    }
    
    // Implementar algoritmo de ordenamiento aquí
}

int main() {
    int arr[] = {34, 12, 56, 78, 23};
    ordenarBurbuja(arr,5);
    for (int i = 0; i<5;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    // Código para ordenar y mostrar el arreglo
    return 0;
}
