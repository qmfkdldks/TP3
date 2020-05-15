#include <stdio.h>

// Hacer un programa que permita ingresar 20 números enteros por teclado. Al finalizar,
// debe mostrar en pantalla la cantidad de pares, la cantidad de impares y el promedio
// de todos los valores que fueron ingresados.

int main()
{
    int par = 0, impar = 0, suma = 0;
    for (size_t i = 0; i < 20; i++)
    {
        int num;
        scanf("%d", &num);

        if (num % 2 == 0)
            par++;
        else
            impar++;

        suma += num;
    }
    printf("par: %d\n", par);
    printf("impar: %d\n", impar);
    printf("El promedio: %d\n", suma / 20);
    return 0;
}