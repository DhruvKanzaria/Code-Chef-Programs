#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int N,flag=0,flag2=0;
    scanf("%d",&N);
    int* A = (int*)calloc(N,sizeof(int));
    for(int i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
        if(A[i]%2==0)
        {
            flag++;
        }
        else
        {
            flag2++;
        }
    }
    if(flag>flag2)
    {
        printf("READY FOR BATTEL");
    }
    else
    {
        printf("NOT READY");
    }
    free(A);
    return 0;
}