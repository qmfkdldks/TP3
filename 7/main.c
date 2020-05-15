#include <stdio.h>

// Crear un programa que nos calcule el promedio de N números introducidos por
// teclado

int main()
{
    int cantidad = 0;
    printf("introduzca la cantidad de numeros: ");
    scanf("%d", &cantidad);
    int sum = 0;
    for (int i = 0; i < cantidad; i++)
    {
        int num = 0;
        scanf("%d", &num);
        sum += num;
    }

    printf("promedio: %d\n", sum / cantidad);
    return 0;
}