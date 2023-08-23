#include <stdio.h>
#include <math.h>

#define PI 3.14159265

float calcularVolumenCubo(float lado) {
    return lado * lado * lado;
}

float calcularVolumenEsfera(float radio) {
    return (4.0 / 3.0) * PI * pow(radio, 3);
}

float calcularVolumenPiramideTriangular(float base, float altura) {
    return (base * base * altura) / 3.0;
}

float calcularVolumenPiramideCuadrada(float ladoBase, float altura) {
    return (ladoBase * ladoBase * altura) / 3.0;
}

int main() {
    int opcion;
    float resultado;

    printf("Seleccione una opción:\n");
    printf("1. Calcular volumen de cubo\n");
    printf("2. Calcular volumen de esfera\n");
    printf("3. Calcular volumen de piramide triangular\n");
    printf("4. Calcular volumen de piramide cuadrada\n");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1: {
            float lado;
            printf("Ingrese el lado del cubo: ");
            scanf("%f", &lado);
            resultado = calcularVolumenCubo(lado);
            break;
        }
        case 2: {
            float radio;
            printf("Ingrese el radio de la esfera: ");
            scanf("%f", &radio);
            resultado = calcularVolumenEsfera(radio);
            break;
        }
        case 3: {
            float base, altura;
            printf("Ingrese la base de la piramide triangular: ");
            scanf("%f", &base);
            printf("Ingrese la altura de la piramide triangular: ");
            scanf("%f", &altura);
            resultado = calcularVolumenPiramideTriangular(base, altura);
            break;
        }
        case 4: {
            float ladoBase, altura;
            printf("Ingrese el lado de la base de la piramide cuadrada: ");
            scanf("%f", &ladoBase);
            printf("Ingrese la altura de la piramide cuadrada: ");
            scanf("%f", &altura);
            resultado = calcularVolumenPiramideCuadrada(ladoBase, altura);
            break;
        }
        default:
            printf("Opción no válida.\n");
            return 1;
    }

    printf("El volumen calculado es: %.2f\n", resultado);

    return 0;
}
