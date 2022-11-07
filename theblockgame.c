//#include<stdio.h>
//#include<stdlib.h>
//
//int main(void)
//{
//    int T,N,r,s,w;
//    scanf("%d",&T);
//    for(int i=0;i<T;i++)
//    {
//        s=0;
//        scanf("%d",&N);
//        w=N;
//        while(w!=0)
//        {
//            r=w%10;
//            s=s*10+r;
//            w=w/10;
//        }   
//        if(s==N)
//        {
//            printf("wins\n");
//        }
//        else
//        {
//            printf("loses\n");
//        }
//    }
//    return 0;
//}
#include <stdio.h>

int main()
{
    int t,n,p,r;
    scanf("%d",&t);
    while(t--)
    {
       scanf("%d",&n); 
       p=n;
       r=0;
       while(n!=0)
       {
           r=(n%10)+r*10;
           n=n/10;
       }
       if(r==p)
        printf("wins");
       else
       printf("losses");
        printf("\n");
       
    }
    return 0;
}
