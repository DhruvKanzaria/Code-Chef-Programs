#include <stdio.h>

int main(void)
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        int n1,n2;
        double expenses;
        scanf("%d %d",&n1, &n2);
        expenses=(double)n1*n2;
        if(n1>1000)
        {
            expenses=expenses-(expenses*(0.1));
            printf("%lf\n",expenses);
        }
        else
        {
            printf("%lf\n",expenses);
        } 
    }
    return 0;
}