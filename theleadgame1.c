#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int N,Si,Ti,i,r,a=0,b=0,val=0;
    
    scanf("%d",&N);
    int* w = (int*)calloc(N,sizeof(int));
    int* q = (int*)calloc(N,sizeof(int));
    int* s = (int*)calloc(N,sizeof(int));
    int* t = (int*)calloc(N,sizeof(int));
    if(2<=N)
    {
        for(i=0;i<N;i++)
        {
            scanf("%d %d",&s[i],&t[i]);
            if(1<=s[i],t[i]<=1000)
            {
                a=a+s[i]; 
                b=b+t[i];
                q[i]=a-b;
                w[i]=abs(q[i]);  
            }
        } 
      

        r=w[0];
        
        for(i=0;i<N;i++)
        {
            if(r<w[i])
            {
                r=w[i];
                val=i;
            }
        }
        if(q[val]>0)
        {
            printf("1 %d",w[val]);
        }
        else if(q[val]<0)
        {
            printf("2 %d",w[val]);
        }   
    }   
    free(q);
    free(w);
    free(s);
    free(t);
    return(0);
}