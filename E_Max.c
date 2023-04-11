#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int A;
    int Max = 0;
    for(int i=0;i<N;i++){
        scanf("%d",&A);
        // printf("%d\n",A);
        if(A>Max){
            Max=A;   
        }
    }
    printf("%d\n",Max);
    return 0;
}