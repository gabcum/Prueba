#include <stdio.h>
#include <locale.h>

int main() {
    int numeroInicial, numeroFinal, cantidadPares = 0;

    printf("Ingrese el numero inicial: ");
    scanf("%d", &numeroInicial);

    printf("Ingrese el número final: ");
    scanf("%d", &numeroFinal);

    // Asegurarse de que el número inicial sea menor o igual al número final
    if (numeroInicial > numeroFinal) {
        printf("El numero inicial debe ser menor o igual al número final.\n");
        return 1;
    }

    for (int i = numeroInicial; i <= numeroFinal; i++) {
        if (i % 2 == 0) {
            cantidadPares++;
        }
    }

    printf("La cantidad de numeros pares en el rango [%d, %d] es: %d\n", numeroInicial, numeroFinal, cantidadPares);

    return 0;
}
