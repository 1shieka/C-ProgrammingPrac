#include <stdio.h>

int main()
{
    int i = 0, j = 0, r = 0, c = 0;

    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    int arr2[r][c]; 

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter the array element for position (%d, %d): ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("\nThe elements of the 2D array are:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Element at position (%d, %d) = %d\n", i, j, arr2[i][j]);
        }
    }

    return 0;
}
