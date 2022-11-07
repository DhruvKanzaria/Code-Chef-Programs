#include <stdio.h>

int Gcd(int a, int b)
{
    if (a == 0)
    {
       return b;
    }
    if (b == 0)
    {   
        return a;
    }
    if (a == b)
    {    
        return a;
    }
    if (a > b)
    {
        return Gcd(a-b, b);
    }
    else
    {
        return Gcd(a, b-a);
    }
}

int main(void)
{
    long int T;
    scanf("%ld",&T);
    for(int i=0;i<T;i++)
    {
        long int n1,n2,gcd,lcm;
        scanf("%ld %ld",&n1, &n2);
        gcd=Gcd(n1,n2);
        lcm=(n1*n2)/gcd;
        printf("%ld %ld\n",gcd, lcm);
    }
}