#include <stdio.h>
#include <stdlib.h>
int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
    
}
int main(void)
{
    int t,n;
    scanf("%d",&t);
        for(int i=0;i<t;i++)
        {
            scanf("%d",&n);
            if (n>0)
            {
                printf("%d\n",factorial(n));
            } 
        }
    return 0;
}