#include <stdio.h>

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    int opcion;
    double temperatura, resultado;

    printf("Seleccione la conversion:\n");
    printf("1. Celsius a Fahrenheit\n");
    printf("2. Fahrenheit a Celsius\n");
    scanf("%d", &opcion);

    if (opcion == 1) {
        printf("Ingrese la temperatura en grados Celsius: ");
        scanf("%lf", &temperatura);
        resultado = celsiusToFahrenheit(temperatura);
        printf("%.2lf grados Celsius equivalen a %.2lf grados Fahrenheit\n", temperatura, resultado);
    } else if (opcion == 2) {
        printf("Ingrese la temperatura en grados Fahrenheit: ");
        scanf("%lf", &temperatura);
        resultado = fahrenheitToCelsius(temperatura);
        printf("%.2lf grados Fahrenheit equivalen a %.2lf grados Celsius\n", temperatura, resultado);
    } else {
        printf("Opción no valida.\n");
    }

    return 0;
}
