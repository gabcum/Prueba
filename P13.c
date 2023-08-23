#include <stdio.h>

int main() {
    int numero;

    // Solicitar al usuario ingresar un número
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    // Verificar si el número es par o impar
    if (numero % 2 == 0) {
        printf("%d es un numero par.\n", numero);
    } else {
        printf("%d es un numero impar.\n", numero);
    }

    return 0;
}
