#include <stdio.h>

int main(void)
{
    int T,N,m,q,w[1000];
    scanf("%d",&T);
    if(1<=T<=1000)
    {
        for(int i=0;i<T;i++)
        {
            m=q=N=0;
            scanf("%d",&N);
            if(1<=1000000)
            {
                m=N % 10;
                while(N!=0)
                {
                    N=N / 10;
                    if(N%10!=0)
                    {
                        q=N;
                    }                
                }   
                w[i]=q+m;
            }
        }
        for(int i=0;i<T;i++)
        {
            printf("%d\n",w[i]);
        }
    }
    
    return 0;
}