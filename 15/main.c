#include <stdio.h>
#include <stdlib.h>

// 15) Hacer un programa parecido al anterior, pero que sea así: 

int main()
{

    for (int i = 10; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}