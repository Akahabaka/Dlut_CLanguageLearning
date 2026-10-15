#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int gue=0;

void Solve(void)
{
    srand(time(0));
    int tru=rand()%10+1, pin=0; 
    while(gue!=tru)
    {
        scanf("%d", &gue);
        pin++;
        if(gue==-1)
        {
            printf("You have ended the game.\n");
            return;       
        }
        if(gue>tru) printf("Too big!\n");
        if(gue<tru) printf("Too small!\n");
        if(gue==tru) break;    
        if(pin>=6)
        {
            printf("You lose!\n");
            return;
        }
    }
    printf("You win! The time you guessed is %d! ", pin);
}

int main(void)
{
    do
    {
        Solve();
        printf("Enter \"765\"to replay.\n");
        scanf("%d", &gue);
    } while (gue==765);
    printf("Game over.\n");
    return 0;
}
//gcc Q12.c -o Q12
//.\Q12.exe