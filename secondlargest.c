#include<stdio.h>

int main(void)
{
    int T,A,B,C,i;
    scanf("%d",&T);
    if(1<=T<=1000)
    {
        for(i=0;i<T;i++)
        {
            A=B=C=0;
            scanf("%d %d %d",&A,&B,&C);
            if(1<=A,B,C<=1000000)
            {
                if(A>B && A>C)
                {
                    if(B>C)
                    {
                        printf("%d\n",B);
                    }
                    else
                    {
                        printf("%d\n",C);
                    }
                }
                else if(B>A && B>C)
                {
                    if(A>C)
                    {
                        printf("%d\n",A);
                    }
                    else
                    {
                        printf("%d\n",C);
                    }
                }
                else if(C>B && C>A)
                {
                    if(B>A)
                    {
                        printf("%d\n",B);
                    }
                    else
                    {
                        printf("%d\n",A);
                    }
                }
            }
        }
    }
}