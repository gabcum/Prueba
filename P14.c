#include <stdio.h>

int main() {
    int numFilas;

    // Solicitar al usuario ingresar el número de filas
    printf("Ingrese el numero de filas: ");
    scanf("%d", &numFilas);

    // Generar el patrón de asteriscos
    for (int i = 1; i <= numFilas; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
