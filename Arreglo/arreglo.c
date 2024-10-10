#include <stdio.h>

int main() {
    int numeros[3]; // Arreglo para almacenar 3 n�meros enteros

    // Ingresar los n�meros
    printf("Ingrese 3 n�meros:\n");
    for (int i = 0; i < 3; i++) {
        printf("N�mero %d: ", i + 1);
        scanf("%d", &numeros[i]); // Guardar el n�mero en el arreglo
    }

    // Mostrar los n�meros ingresados
    printf("\nLos n�meros ingresados son:\n");
    printf("%d\n", numeros[0]); // Imprimir el primer n�mero
    printf("%d\n", numeros[1]); // Imprimir el segundo n�mero
    printf("%d\n", numeros[2]); // Imprimir el tercer n�mero

    return 0;
