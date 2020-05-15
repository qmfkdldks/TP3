#include <stdio.h>

int main()
{
    int n, i;
    unsigned long long fact = 1;
    printf("Introduzca un numero: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i)
    {
        fact *= i;
    }
    printf("Factorial de %d = %llu", n, fact);

    return 0;
}