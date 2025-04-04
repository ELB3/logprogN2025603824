#include <stdio.h>

int main()
{
    int op,ingrediente;
    printf("Ingrese tipo de pizza\nVegetariana (1) o no vegetariana (2)\n");
    scanf("%d", &op);
    if(op==1)
    {
        printf("ingrese ingrediente: pimiento (1) o tofu(2)\n");
        scanf("%d", &ingrediente);
        if(ingrediente==1)
        {
            printf("Pizza vegetariana con pimineto\n");
        }
        else if(ingrediente==2)
        {
            printf("Pizza vegetariana con tofu\n");
        }
        else
        {
            printf("opcion erronea\n");
        }
    }
    else if(op==2)
    {
        printf("Selecione los ingredientes: peperoni (1), jamon(2) o salmon (3)\n");
        scanf("%d", &ingrediente);
        if(ingrediente==1)
        {
            printf("Pizza vegetariana con peperoni\n");
        }
        else if(ingrediente==2)
        {
            printf("Pizza vegetariana con jamon\n");
        }
        else if(ingrediente==3)
        {
            printf("Pizza vegetariana con salmon\n");
        }
        else
        {
            printf("opcion erronea");
        }
    }
    else
    {
        printf("opcion erronea");
    }
    printf("\n");
    return 0;
}
