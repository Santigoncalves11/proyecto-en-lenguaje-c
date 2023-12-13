// Realizado por santiago
Proyectos que e hecho en lenguaje c 

#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main() {
    float ancho, largo, perimetro, area;

    printf("Ingrese el ancho del rectangulo: ");
    scanf("%f", &ancho);

    printf("Ingrese el largo del rectangulo: ");
    scanf("%f", &largo);

    perimetro = 2 * ancho + 2 * largo;
    area = ancho * largo;

    printf("El perimetro del rectangulo es: %f\n", perimetro);
    printf("El area del rectangulo es: %f\n", area);

    return 0;
}
