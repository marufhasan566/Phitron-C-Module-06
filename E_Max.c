#include <stdio.h>
#include <limits.h>
int main()
{
    int N;
    scanf("%d", &N);
    int A;
    int Max = INT_MIN, Min = INT_MAX;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A);
        // printf("%d\n",A);
        if (A > Max)
        {
            Max = A;
        }
        if (A < Min)
        {
            Min = A;
        }
    }
    printf("%d\n", Max);
    printf("%d\n", Min);
    return 0;
}