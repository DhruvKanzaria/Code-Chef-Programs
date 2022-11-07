#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,c,x,count=0;
    scanf("%d %d",&a,&b);
    if(b<=10^7)
    {
        c=b;

    }
    for(int i=0;i<a;i++)
    {
        scanf("%d",x);
        if(x<=10^9)
        {
            if(x%b==0)
            {
                count++;
            }
        }

    }
    printf("%d",count);
    return 0;
}