#include <stdio.h>
#include <math.h> // Biblioteca para cálculos matemáticos

int main() {
    // Declaración de variables
    double L = 2.0; // Valor de L
    double base_triangulo, altura_triangulo, area_triangulo;
    double largo_rectangulo, ancho_rectangulo, area_rectangulo;
    double perimetro_total;
    double area_total;

    // Cálculos del triángulo grande
    base_triangulo = (3.0 / 2.0) * L; // Base = (3/2)L
    altura_triangulo = L;             // Altura = L
    area_triangulo = 0.5 * base_triangulo * altura_triangulo; // Área = (1/2)*base*altura

    // Cálculos del rectángulo pequeño
    largo_rectangulo = L;             // Largo = L
    ancho_rectangulo = (1.0 / 4.0) * L; // Ancho = (1/4)L
    area_rectangulo = largo_rectangulo * ancho_rectangulo; // Área = largo * ancho

    // Área total
    area_total = area_triangulo + area_rectangulo;

    // Perímetro total de la figura
    // Triángulo y rectángulo suman las dimensiones necesarias
    perimetro_total = base_triangulo + 2 * L + L + (2 * ancho_rectangulo);

    // Mostrar resultados
    printf("Area total: %.2f\n", area_total);
    printf("Perimetro total: %.2f\n", perimetro_total);

    return 0;
}
