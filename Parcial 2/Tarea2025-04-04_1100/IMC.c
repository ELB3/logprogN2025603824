#include <stdio.h>
#include <math.h>

int main()
{
    float m, kg, imc;
    printf("Ingrese su altura (en metros): ");
    scanf("%f", &m);

    printf("Ingrese su peso (en kg): ");
    scanf("%f", &kg);
    imc=kg/pow(m,2);
    printf("su imc: %.2f \n", imc);
    if(imc>=40)
    {
        printf("Obesidad clase 3\n\n");
    }
    else if(imc>=35)
    {
        printf("Obesidad clase 2\n\n");
    }
    else if(imc>=30)
    {
        printf("Obesidad clase 1\n\n");
    }
    else if(imc>=25)
    {
        printf("Sobrepeso\n\n");
    }
    else if(imc>=18.5)
    {
        printf("Normal\n\n");
    }
    else
    {
        printf("Bajo en peso\n\n");
    }
    return 0;
}
