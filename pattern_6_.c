#include <stdio.h>

int main()
{

    int n, row, col;

    printf("No of lines you want in pattern : ");
    scanf("%d", &n);

    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row - 1; col++)
        {
            printf(" ");
        }
        for (col = 1; col < 2 * (n - row + 1); col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}