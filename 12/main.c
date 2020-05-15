#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//12) Hacer un programa que permita Calcular la suma siguiente: 100 + 90 + 80 + 70 + ... 0

int main()
{
    int sum = 0;
    for (int i = 0; i <= 100; i += 10)
    {
        sum += i;
    }

    printf("sum: %d\n", sum);

    return 0;
}