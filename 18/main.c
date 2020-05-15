#include <stdio.h>
#include <stdlib.h>

// 17) Hacer un programa que permita dibujar esto:
//  *
//  **
//  ***
//  ****
//  *****
//  ******
//  *******
//  ********
// *********
// **********

int main()
{
    int n = 10;
    for (int row = 1; row <= n; row++) // Loop to print rows
    {
        for (int c = 1; c <= n - row; c++) // Loop to print spaces in a row
            printf(" ");

        for (int c = 1; c <= 2 * row - 1; c++) // Loop to print stars in a row
            printf("*");

        printf("\n");
    }

    for (int row = 10; row >= 0; row--) // Loop to print rows
    {
        for (int c = 1; c <= n - row; c++) // Loop to print spaces in a row
            printf(" ");

        for (int c = 1; c <= 2 * row - 1; c++) // Loop to print stars in a row
            printf("*");

        printf("\n");
    }

    return 0;
}