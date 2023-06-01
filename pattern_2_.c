#include <stdio.h>

int main()
{
    int n, row, col;
    printf("No of lines you want in pattern : ");
    scanf("%d", &n);

    // Outer loop for printing each row
    for (row = 1; row <= n; row++)
    {
        // Inner loop for printing the asterisks in each row
        for (col = 1; col <= n - row + 1; col++)
        {
            printf("*");
        }
        printf("\n"); // Move to the next line after printing each row
    }

    return 0;
}