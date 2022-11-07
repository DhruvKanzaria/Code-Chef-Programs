#include <stdio.h>

int main(void)
{
    int t,N,reminder,count=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        count=0;
        scanf("%d",&N);
        while(N!=0)
        {
            reminder=N % 10;
            N=N - reminder;
            N=N/10;
            if(reminder==4)
            {
                count++;
            }
        }
        printf("%d\n",count);
    } 
    return 0;
}