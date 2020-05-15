#include <stdio.h>

// 5) Crear un programa que permita visualizar en pantalla, la tabla del 5 hasta el 5x10. La
// salida en pantalla deberá ser así:

// TABLA DEL 5:
// 5 * 0 = 0
// 5 * 1 = 5
// …..
// 5 * 10 = 50

int main()
{
    printf("TABLA DEL 5:\n");
     for (int i = 0; i < 11; i++)
    {
        printf("5 * %d = %d\n", i, 5 * i);
    }
    return 0;
}