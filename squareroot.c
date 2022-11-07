#include<stdio.h>
#include<math.h>
int main(void)
{
    int T,N,r;
    scanf("%d",&T);
    if(1<=T<=20)
    {
        for(int i=0;i<T;i++)
        {
            N=r=0;
            scanf("%d",&N);
            if(1<=N<=10000)
            {
                r=sqrt(N);
                printf("%d\n",r);
            }
        }
    }
}