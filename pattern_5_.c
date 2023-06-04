#include <stdio.h>

int main()
{

    int n, row, col;
    printf("No of lines you want in pattern : ");
    scanf("%d", &n);

    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n - row; col++)
        {
            printf(" "); // Print space before each row
        }
        for (col = 1; col <= 2 * row - 1; col++)
        {
            printf("*"); // Print '*' for each row
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}