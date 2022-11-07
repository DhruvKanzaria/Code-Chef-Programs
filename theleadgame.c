#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int N,Si,Ti,i,r,val;
    
    scanf("%d",&N);
    int* w = (int*)calloc(N,sizeof(int));
    int* q = (int*)calloc(N,sizeof(int));
    if(2<=N)
    {
        for(i=0;i<N;i++)
        {
            Si=Ti=0;
            scanf("%d %d",&Si,&Ti);
            if(1<=Si,Ti<=1000)
            {
                q[i]=Si-Ti;
                w[i]=abs(q[i]);
                
            }
        }
        
        for(i=0;i<N-1;i++)
        {
            for(int j=i+1;j<N-i-1;j++)
            {
                if(w[i]==w[j])
                {
                    exit(0);
                }
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
    return 0;
}