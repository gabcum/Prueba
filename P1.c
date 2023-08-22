#include <stdio.h>

int main() {
    int n, choice;
    
    printf("Ingrese la cantidad de números: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("La cantidad de números debe ser positiva.\n");
        return 1;
    }
    
    int numbers[n];
    
    printf("Ingrese los números:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    
    printf("Elija la operación:\n");
    printf("1. Suma\n");
    printf("2. Multiplicación\n");
    scanf("%d", &choice);
    
    int result;
    
    if (choice == 1) {
        result = 0; // Inicializar la suma en 0
        for (int i = 0; i < n; i++) {
            result += numbers[i];
        }
        printf("La suma de los números es: %d\n", result);
    } else if (choice == 2) {
        result = 1; // Inicializar la multiplicación en 1
        for (int i = 0; i < n; i++) {
            result *= numbers[i];
        }
        printf("La multiplicación de los números es: %d\n", result);
    } else {
        printf("Opción no válida.\n");
        return 1;
    }
    
    return 0;
}
