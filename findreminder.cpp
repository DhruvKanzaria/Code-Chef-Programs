#include <stdio.h>

int main(void)
{
    int T,A,B,reminder,q[1000];
    scanf("%d",&T);
    if(1<=T<=1000)
    {
        for(int i=0;i<T;i++)
        {
            scanf("%d %d",&A,&B);
            if(1<=A,B<=10000)
            {
                reminder=A % B;
                q[i]=reminder;
            }
        }
        for(int i=0;i<T;i++)
        {
            printf("%d\n",q[i]);
        }
    }
    return 0;
}