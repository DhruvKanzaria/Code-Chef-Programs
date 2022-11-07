#include <stdio.h>

int main(void)
{
    int T,N;
    scanf("%d",&T);
    if(1<=T<=20)
    {
        for(int i=1;i<=T;i++)
        {
            int i;
            scanf("%d",&N);
            if(1<=N<=10^5)
            {
                for(i=2;i<N;i++)
                {
                    if(N%i==0)
                    {
                        break;
                    }
                }
                if(i==N)
                {
                    printf("yes\n");
                }
                else
                {
                    printf("no\n");
                }
            }
        }
    }
}