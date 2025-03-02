// 11. Buscar en un Arreglo
#include <stdio.h>

int *buscarElemento(int *arr, int tamaño, int valor) {
    for(int i =0; i<tamaño; i++){
        if(arr[i]==valor){
            return &arr[i];
        }
    }
    printf("no se encontró el valor en el arreglo");
    // Implementar búsqueda aquí
    return NULL;
}

int main() {

    int arr[] = {10, 20, 30, 40, 50};
    printf("%p \n",buscarElemento(arr,5,20));
    printf("%p", &arr[1]);
    // Código para buscar un número y mostrar su dirección
    return 0;
}
