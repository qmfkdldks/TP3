#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 10) Hacer un programa que permita calcular la suma de los cuadrados de los números del
// 1 al 10.

int main()
{
    double sum = 0;
    for (double i = 1; i <= 10; i++)
    {
        sum += pow(i, 2.0);
    }

    printf("promedio: %.2f\n", sum);

    return 0;
}