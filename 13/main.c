#include <stdio.h>
#include <stdlib.h>

// Escribir un programa que le pida una palabra al usuario, para luego imprimirla 1000
// veces, con espacios intermedios
#define MAX 15

int main()
{
    char buf[MAX];
    fgets(buf, MAX, stdin);

    for (int i = 0; i < 1000; i++)
    {

        printf("%d: %s\n", i, buf);
    }

    return 0;
}