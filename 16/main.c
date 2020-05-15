#include <stdio.h>
#include <stdlib.h>

// 16) Ahora el programa deberá dibujar los dos dibujos anteriores, uno debajo del otro.
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
// **********
// *********
// ********
// *******
// ******
// *****
// ****
// ***
// **
// *

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

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