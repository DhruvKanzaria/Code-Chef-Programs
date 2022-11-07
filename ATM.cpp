#include <stdio.h>

int main(void)
{
    int x;
    float a;
    scanf("%d %f",&x,&a);
    if(x%5==0 && x+(0.50)<=a)
    {
        a=a-x;
        printf("%f",a-0.50);
    }
    else
    {
        printf("%f",a);
    } 
    return 0;
}