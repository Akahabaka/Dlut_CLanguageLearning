#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void Solve(void)
{
    srand(time(0));
    int tru=rand()%10+1, gue=0, pin=0; 
    while(gue!=tru)
    {
        scanf("%d", &gue);
        pin++;
        if(gue>tru) printf("Too big!\n");
        if(gue<tru) printf("Too small!\n");
        if(gue==tru) break;    
        if(pin>=6)
        {
            printf("You lose!\n");
            return;
        }
    }
    printf("You win! The time you guessed is %d!", pin);
}

int main(void)
{
    Solve();
    return 0;
}
//gcc Q12.c -o Q12
//.\Q12.exe