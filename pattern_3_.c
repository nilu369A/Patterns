#include <stdio.h>

int main()
{
    int n, row, col;
    printf("No of lines you want in pattern : ");
    scanf("%d", &n);

    // Outer loop for rows
    for (row = 1; row <= n; row++)
    {

        // Print spaces before the pattern
        for (col = 1; col <= n - row; col++)
        {
            printf(" ");
        }

        // Print asterisks for the pattern
        for (col = 1; col <= row; col++)
        {
            printf("*");
        }

        // Create a new line
        printf("\n");
    }
    return 0;
}