#include<stdio.h>

int main(void)
{
    int T,A,B,C,sum=0;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        scanf("%d %d %d",&A,&B,&C);
        if(1<=A,B,C<=180)
        {
            sum=A+B+C;
            if(sum==180)
            {
                printf("YES \n");
            }
            else
            {
                printf("NO \n");
            }
        }
    }
    return 0;
}