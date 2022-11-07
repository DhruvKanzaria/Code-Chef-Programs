#include<stdio.h>

int main(void)
{
    int T,A,B,min,total;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        min=total=0;
        scanf("%d %d",&A,&B);
        if(A>B)
        {
            min=A;
        }
        else
        {
            min=B;
        }
        total=A+B;
        printf("%d %d\n",min,total);
    }
    return 0;
}