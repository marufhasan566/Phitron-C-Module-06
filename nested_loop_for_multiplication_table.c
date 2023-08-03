#include <stdio.h>
int main()
{
    int A;
    scanf("%d", &A);
    for (int j = 1; j <= A; j++)
    {
        for (int i = 1; i <= 10; i++)
        {
            int multiply = j * i;
            printf("%d * %d = %d", j, i, multiply);
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}