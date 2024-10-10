#include <stdio.h>

int main() {
    int numeros[3]; // Arreglo para almacenar 3 números enteros

    // Ingresar los números
    printf("Ingrese 3 números:\n");
    for (int i = 0; i < 3; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]); // Guardar el número en el arreglo
    }

    // Mostrar los números ingresados
    printf("\nLos números ingresados son:\n");
    printf("%d\n", numeros[0]); // Imprimir el primer número
    printf("%d\n", numeros[1]); // Imprimir el segundo número
    printf("%d\n", numeros[2]); // Imprimir el tercer número

    return 0;
