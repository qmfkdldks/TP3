#include <stdio.h>

// 21) Escribir un programa que permita ingresar números por teclado, y que muestre en
// pantalla si el número ingresado es par o impar. El programa terminará cuando se
// ingrese 0.

int main()
{
    int num = 0;

    while (1)
    {
        scanf("%d", &num);

        if (num == 0)
            break;

        if (num % 2 == 0)
            printf("par\n");
        else
            printf("impar\n");
    }

    return 0;
}