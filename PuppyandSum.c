#include <stdio.h>

int sum(int d,int a)
{
    int total=0;
    if (d!=0)
    {
        for(int i=1;i<=a;i++)
        {
            total=total+i;
        }
        a=total;
        sum(d-1,a);
    }
    else
    {
        return(a);
    }
}

int main(void)
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        int n1,n2;
        scanf("%d %d",&n1, &n2);
        printf("%d\n",sum(n1,n2));
    }
    return 0;
}