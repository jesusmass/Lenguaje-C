#include <stdio.h>

// Definición de la estructura del estudiante
struct Estudiante {
    char nombre[50];
    int edad;
};

int main() {
    // Declarar una variable de tipo Estudiante
    struct Estudiante estudiante;

    // Ingresar los datos del estudiante
    printf("Ingrese el nombre del estudiante: ");
    scanf("%49s", estudiante.nombre); // Limitar la entrada a 49 caracteres

    printf("Ingrese la edad del estudiante: ");
    scanf("%d", &estudiante.edad); // Guardar la edad del estudiante

    // Mostrar los datos ingresados
    printf("\nDatos del estudiante:\n");
    printf("Nombre: %s\n", estudiante.nombre);
    printf("Edad: %d años\n", estudiante.edad);

    return 0;
}

