#include <stdio.h>

// Hacer un programa que dado un número entero N ingresado por teclado,permita
// imprimir su tabla de multiplicar hasta el 10

int main()
{
    int num = 0;
    scanf("%d", &num);
    printf("TABLA DEL %d:\n", num);
    for (int i = 0; i < 11; i++)
    {
        printf("%d * %d = %d\n", num, i, num * i);
    }
    return 0;
}