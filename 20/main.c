#include <stdio.h>

// 20) Utilizando la estructura de repetición While, imprimir en pantalla, las tablas de
// multiplicar, hasta el número 10, del 1 a N. Donde N es el valor que el usuario ingresa
// por pantalla.

int main()
{
    int i = 0, num = 0;
    scanf("%d", &num);

    printf("TABLA DEL %d:\n", num);

    while (i <= 10)
    {
        /* code */
        printf("%d * %d = %d\n", num, i, num * i);
        i++;
    }

    return 0;
}