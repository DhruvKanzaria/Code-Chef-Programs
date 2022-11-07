#include <stdio.h>
#include <string.h>

int main(void)
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        char N;
        scanf(" %c",&N);
        if(N=='B'||N=='b')
        {
            printf("BattleShip\n");
        }
        else if(N=='C'||N=='c')
        {
            printf("Cruiser\n");
        }
        else if(N=='D'||N=='d')
        {
            printf("Destroyer\n");
        }
        else if(N=='F'||N=='f')
        {
            printf("Frigate\n");
        }
    }     
    return 0;
}