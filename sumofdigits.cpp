#include <stdio.h>
 
int main(void)
{
    int T,N,q[1000],reminder,sum;
    scanf("%d",&T);
    if(1<=T<=1000)
    {
        for(int i=0;i<T;i++)
        {
            N=sum=0;
            scanf("%d",&N);
            if(1<=N<=100000)
            {
                while(N!=0)
                {
                    reminder=N % 10;
                    sum=reminder+sum;
                    N=N/10;
                }
                q[i]=sum;
            }
        }
        for(int i=0;i<T;i++)
        {
            printf("%d\n",q[i]);
        }

    }

}