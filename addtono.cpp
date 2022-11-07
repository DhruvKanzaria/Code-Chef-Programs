#include <stdio.h>

int main(void)
{
    int T,A,B,q[1000];
    scanf("%d",&T);
    if(1<=T<=1000)
    {
        for(int i=0;i<T;i++)
        {
            A=B=0;
            scanf("%d %d",&A,&B);
            if(1<=A,B<=1000)
            {
                q[i]=A+B;
            }
        }
    }
    for(int i=0;i<T;i++)
    {
        printf("%d\n",q[i]);
    }
}