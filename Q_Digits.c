#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        int N;
        scanf("%d",&N);
        do{
            printf("%d ",N%10);
        N=N/10;
        }
        while(N!=0);
    printf("\n");
    }
    return 0;
}