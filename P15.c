#include <stdio.h>
#include <string.h>

void encriptarCesar(char mensaje[], int desplazamiento) {
    int longitud = strlen(mensaje);
    
    for (int i = 0; i < longitud; i++) {
        mensaje[i] = (mensaje[i] - 'A' + desplazamiento)  + 'A';
    }
}

int main() {
    char mensaje[100];
    int desplazamiento;

    printf("Ingrese un mensaje en mayusculas (sin espacios ni caracteres especiales): ");
    scanf("%s", mensaje);

    printf("Ingrese el numero fijo de desplazamiento: ");
    scanf("%d", &desplazamiento);

    if (desplazamiento < 0) {
        printf("El desplazamiento debe ser un numero no negativo.\n");
    } else {
        encriptarCesar(mensaje, desplazamiento);
        printf("Mensaje encriptado: %s\n", mensaje);
    }

    return 0;
}
