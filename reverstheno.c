#include<stdio.h>

int main(void)
{
    int T,N,r,sum;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        sum=0;
        scanf("%d",&N);
        while(N!=0)
        {
            r=N%10;
            sum=sum*10+r;
            N=N/10;
        }
        printf("%d\n",sum);
    }
}