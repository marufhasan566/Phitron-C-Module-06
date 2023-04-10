#include<stdio.h>
int main()
{
    int N;
    while (scanf("%d",&N) != EOF)
    {
        if(N==1999){
            printf("Correct\n");
            break; //To Stop The Loop After Printing "Correct", 'break' must be used.
        }
        else{
            printf("Wrong\n");
        }
    }
    return 0;
}