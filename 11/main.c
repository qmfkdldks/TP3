#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 11) Hacer un programa que permita calcular la suma de los cuadrados de los números del
// 13 al 25.

int main()
{
    double sum = 0;
    for (double i = 13; i <= 25; i++)
    {
        sum += pow(i, 2.0);
    }

    printf("promedio: %.2f\n", sum);

    return 0;
}