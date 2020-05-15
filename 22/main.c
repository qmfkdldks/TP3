#include <stdio.h>

// 22) Hacer un programa que permita el ingreso de números por teclado, hasta que se
// ingrese el valor 0. Al finalizar, debe mostrarse en pantalla, el mayor de todos los
// números ingresados.

int main()
{
    int num = 0, mayor = 0;

    while (1)
    {
        scanf("%d", &num);

        if (num == 0)
            break;

        if (mayor < num)
            mayor = num;
    }

    printf("%d\n", mayor);
    return 0;
}