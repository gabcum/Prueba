#include <stdio.h>

    double millasPorGalonToKilometrosPorLitro(double millasPorGalon) {
    double galonesPorLitro = 4.54609188; // Una galón imperial equivale a 4.54609 litros
    double millasPorKilometro = 1.609344; // Una milla equivale a 1.60934 kilómetros
    return millasPorGalon * millasPorKilometro / galonesPorLitro;
}

int main() {
    double millasPorGalon;
    double kilometrosPorLitro;

    printf("Ingrese la cantidad de millas por galon imperial: ");
    scanf("%lf", &millasPorGalon);

    if (millasPorGalon <= 0) {
        printf("La cantidad de millas por galon debe ser un valor positivo.\n");
    } else {
        kilometrosPorLitro = millasPorGalonToKilometrosPorLitro(millasPorGalon);
        printf("La cantidad de kilometros por litro es: %.4lf\n", kilometrosPorLitro);
    }

    return 0;
}