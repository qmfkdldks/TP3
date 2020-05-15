#include <stdio.h>

// Hacer una modificación al programa anterior, pero para que se imprima el promedio
// de los pares

int main()
{
    int par = 0, impar = 0, suma = 0;
    for (size_t i = 0; i < 20; i++)
    {
        int num;
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            par++;
            suma += num;
        }
        else
        {
            impar++;
        }
    }
    printf("par: %d\n", par);
    printf("impar: %d\n", impar);
    printf("El promedio de los pares: %d\n", suma / par);
    return 0;
}