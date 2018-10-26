#include <stdio.h>

int main()
{
    int test=0,n,time,player,min,i,flag,z[50];

    scanf("%d%d%d",&test,&n,&time);
    for(i=0;i<n;i++)
    {
        scanf("%d",&z[i]);
    }
    scanf("%d%d",&player,&min);
    
    if(0<min<2000 && 0<player<500 && 0<n<50 && 0<time<100)
    {
        while(test>0)
        {
            if(n>time)
            {
                flag = 0;
            }
            else
            {
                for(i=0;i<n;i++)
                {
                    if(z[i]>=player)
                    {
                        flag = 0;
                        break;
                    }
                    else
                    {
                        player = player + (player-z[i]);
                    }
                    time--;
                }
            }
            if(flag == 1)
            {
                printf("Yes");
            }            
            else
            {
                printf("No");
            }
            test --;
        }
    }



    printf("\n");
    return 0;
}
