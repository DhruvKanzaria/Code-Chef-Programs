#include <stdio.h>

int max(int x,int y)
{
    if(x>y) 
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main(void)
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int N;
        scanf("%d",&N);
        if(N==1)
        {
            int T;
            scanf("%d",&T);
            printf("%d\n",T);
        }
        else
        {
            int A[100][100];
            for(int i=0;i<N ;i++)
            {
                for(int j=0;j<=i;j++)
                {
                    scanf("%d",&A[i][j]);
                }
            }
            for(int i=N-2;i>=0;i--)
            {
                for(int j=0;j<=i;j++)
                {
                    A[i][j] = A[i][j] + max(A[i+1][j],A[i+1][j+1]);
                }
            }
            printf("%d\n",A[0][0]);
        }
    }
    return 0;
}