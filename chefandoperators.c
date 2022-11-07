#include<stdio.h>

int main(void)
{
    int T,A,B;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        scanf("%d %d",&A,&B);
        if(A<B)
        {
            printf("<\n");
        }
        else if(A>B)
        {
            printf(">\n");
        }
        else
        {
            printf("=\n");
        }
    }
    return 0;
}