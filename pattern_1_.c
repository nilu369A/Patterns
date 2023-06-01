#include <stdio.h>
int main()
{
    int n, row, col;

    // Prompt the user to enter the number of lines
    printf("No of lines you want in pattern : ");
    scanf("%d", &n);

    // Loop through each row
    for (row = 1; row <= n; row++)
    {
        // Print '*' for each column in the current row
        for (col = 1; col <= row; col++)
        {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }
    return 0;
}