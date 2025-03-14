#include <stdio.h>

int main() {
    int L = 12;
    double PRECIO_M2 = 9256.00;
    double IVA = 0.16;

    double B = L;
    double b = L;
    double h_trapecio = 0.5 * L;
    double b_triangulo = 0.5 * L;
    double h_triangulo = 0.5 * L;


    double area_trapecio = 0.5 * (B + b) * h_trapecio;
    double area_triangulo = 0.5 * b_triangulo * h_triangulo;
    double area_total = area_trapecio + area_triangulo;


    double costo_sin_iva = area_total * PRECIO_M2;


    double iva_total = costo_sin_iva * IVA;


    double costo_total = costo_sin_iva + iva_total;


    printf("Area total del terreno: %.2f m^2\n", area_total);
    printf("Costo sin IVA: $%.2f\n", costo_sin_iva);
    printf("IVA (16%%): $%.2f\n", iva_total);
    printf("Costo total con IVA: $%.2f\n", costo_total);

    return 0;
}
