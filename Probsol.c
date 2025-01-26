#include <stdio.h>
int steps = 0;
void TOH(int m, int A, int B, int C)
{
    if (m > 0)
    {
        TOH(m - 1, A, C, B);
        steps++;
        printf("Move a Disc from %d to %d\n", A, C);
        TOH(m - 1, B, A, C);
    }
}

int main()
{
    int num_discs;
    printf("Enter the number of discs: ");
    scanf("%d", &num_discs);
    TOH(num_discs, 1, 2, 3); 
    printf("Total number of steps: %d\n", steps);
    return 0;
}
