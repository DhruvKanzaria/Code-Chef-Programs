#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int t,N,temp;
    scanf("%d",&t);
    int* q = (int*)calloc(t,sizeof(int));
    if(t<=10^6)
    {
        for(int i=0;i<t;i++)
        {
            scanf("%d",&N);
            q[i]=N;
        }
        for(int j=0;j<t-1;j++)
        {
            for(int i=0;i<t-j-1;i++)
            {
                if(q[i]>q[i+1])
                {
                    temp=q[i];
                    q[i]=q[i+1];
                    q[i+1]=temp;
                }
            }
        }
        for(int i=0;i<t;i++)
        {
            printf("%d\n",q[i]);
        }
    }
    free(q);
    return 0;
}