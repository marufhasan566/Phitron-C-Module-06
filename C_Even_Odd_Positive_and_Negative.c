#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int A;
    int even=0,odd=0,positive=0,negative=0;
    for(int i=0;i<N;i++){
        scanf("%d",&A);
        if(A%2==0){
            // even
            even++;
        }
        else if(A%2==1 || A%2==-1){
            // odd
            odd++;
        }
        if(A>0){
             // positive
            //  printf("%d\n",A);
            positive++;
        }
        else if(A<0){
            // negative
            negative++;
        }
        // printf("%d\n",i);
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",even,odd,positive,negative);
    return 0;
}