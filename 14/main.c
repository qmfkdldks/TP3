#include <stdio.h>
#include <stdlib.h>

// 14) Crear un programa utilizando bucles que nos dibuje esto:
// *
// **
// ***
// ****
// *****
// ******
// *******
// ********
// *********
// **********

int main()
{

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}