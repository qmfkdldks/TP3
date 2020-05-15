#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 8) Hacer un programa que permita Imprimir en pantalla 50 números aleatorios, utilizar
// función srand().

int main()
{
    srand(time(0));
    for (int i = 0; i < 50; i++)
    {
        printf("%d\n", rand() % 1000);
    }
    return 0;
}