#include <stdio.h>
#include <math.h> // Biblioteca para c�lculos matem�ticos

int main() {
    // Declaraci�n de variables
    double L = 2.0; // Valor de L
    double base_triangulo, altura_triangulo, area_triangulo;
    double largo_rectangulo, ancho_rectangulo, area_rectangulo;
    double perimetro_total;
    double area_total;

    // C�lculos del tri�ngulo grande
    base_triangulo = (3.0 / 2.0) * L; // Base = (3/2)L
    altura_triangulo = L;             // Altura = L
    area_triangulo = 0.5 * base_triangulo * altura_triangulo; // �rea = (1/2)*base*altura

    // C�lculos del rect�ngulo peque�o
    largo_rectangulo = L;             // Largo = L
    ancho_rectangulo = (1.0 / 4.0) * L; // Ancho = (1/4)L
    area_rectangulo = largo_rectangulo * ancho_rectangulo; // �rea = largo * ancho

    // �rea total
    area_total = area_triangulo + area_rectangulo;

    // Per�metro total de la figura
    // Tri�ngulo y rect�ngulo suman las dimensiones necesarias
    perimetro_total = base_triangulo + 2 * L + L + (2 * ancho_rectangulo);

    // Mostrar resultados
    printf("Area total: %.2f\n", area_total);
    printf("Perimetro total: %.2f\n", perimetro_total);

    return 0;
}
