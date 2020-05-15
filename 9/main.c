#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 9) Modificar el programa anterior, pero para imprimir 50 números aleatorios entre 0 y
// 100, y mostrar el promedio de dichos números.

int main()
{
    srand(time(0));
    int sum = 0;
    for (int i = 0; i < 50; i++)
    {
        int random = rand() % 101;
        sum += random;
        printf("%d\n", random);
    }

    printf("promedio: %d\n", sum / 50);

    return 0;
}