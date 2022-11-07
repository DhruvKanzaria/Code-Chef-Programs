#include<stdio.h>

int main(void)
{
    int T,N,total;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        scanf("%d",&N);
        if(N%100==0)
        {
            total=N/100;
        }
        else if(N%50==0)
        {
            total=N/50;
        }
        else if(N%10==0)
        {
            total=N/10;
        }
        else if(N%5==0)
        {
            total=N/5;
        }
        else if(N%2==0)
        {
            total=N/2;
        }
        else
        {
            total=N/1;
        }
        
    }
}