#include <stdio.h>
#include <math.h>

double calcularSeno(double x, int n) {
    double resultado = 0.0;
    int signo = 1;

    for (int i = 1; i <= n; i += 2) {
        resultado += signo * pow(x, i) / tgamma(i + 1);
        signo *= -1; // Cambiar el signo en cada término
    }

    return resultado;
}

int main() {
    double angulo;
    int n;

    printf("Ingrese el valor del angulo en radianes: ");
    scanf("%lf", &angulo);

    printf("Ingrese la cantidad de terminos a utilizar en la serie de Taylor: ");
    scanf("%d", &n);

    double seno = calcularSeno(angulo, n);

    printf("El seno de %.4lf radianes es aproximadamente %.4lf\n", angulo, seno);

    return 0;
}
