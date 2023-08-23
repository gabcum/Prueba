#include <stdio.h>

unsigned long long calcularFactorial(int numero) {
    if (numero == 0 || numero == 1) {
        return 1; // El factorial de 0 y 1 es 1
    } else {
        return numero * calcularFactorial(numero - 1);
    }
}

int main() {
    int numero;

    printf("Ingrese un numero para calcular su factorial: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("El factorial no está definido para números negativos.\n");
    } else {
        unsigned long long factorial = calcularFactorial(numero);
        printf("El factorial de %d es: %llu\n", numero, factorial);
    }

    return 0;
}
