#include <stdio.h>
#include <math.h>
int main(){
double L = 7;
double pi = 3.1415926535;

double pt =(23.0 / 5.0) * L + (pi * L / 2.0);
double c1 = L * L;
double c2 = (1.0 / 5.0) * L * (3.0 / 5.0) * L;
double c3 = (1.0 / 5.0) * L * (1.0 / 5.0) * L;
double at = c1 + 2 * c2 + 2 * c3 + (pi * (L / 2.0) * (L / 2.0) / 2.0);

printf("pt = %lf\n",pt);
printf("at = %lf\n",at);

return 0;
}
