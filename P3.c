#include <stdio.h>
#include <string.h>

int main() {
    char cadena[100];
    int longitud = 0; // Inicializamos la longitud en 0

    printf("Ingrese una cadena de texto: ");
    fgets(cadena, sizeof(cadena), stdin);

    for (int i = 0; i < strlen(cadena); i++) {
        if (cadena[i] != ' ' && cadena[i] != '\n' && cadena[i] != '\r') {
            longitud++;
        }
    }

    printf("La cantidad de caracteres (sin contar espacios en blanco) en la cadena es: %d\n", longitud);

    return 0;
}





