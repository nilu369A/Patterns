#include <stdio.h>

int main()
{
    int n, row, col;

    printf("No of lines you want in pattern : ");
    scanf("%d", &n);

    // Print n number of row
    for (row = 1; row <= n; row++)
    {
        // print n number of collom
        for (col = 1; col <= n; col++)
        {
            if (row == 1 || row == n || col == 1 || col == n)
            {
                printf("*"); // Print '*' according to the condition
            }
            else
            {
                printf(" "); // Print space
            }
        }
        printf("\n"); // Brake the line
    }
    return 0;
}