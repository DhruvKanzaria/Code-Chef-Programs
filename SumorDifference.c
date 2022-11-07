#include <stdio.h>

int main(void)
{
    int N1,N2;
    scanf("%d",&N1);
    scanf("%d",&N2);
    if(-1000<=N1,N2<=1000)
    {
        if(N1>N2)
        {
            printf("%d",(N1-N2));
        }
        else
        {
            printf("%d",(N1+N2));
        }
    }
}