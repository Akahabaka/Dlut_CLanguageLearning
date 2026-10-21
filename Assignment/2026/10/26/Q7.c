#include<stdio.h>
#define MAX 100

void Solve(void)
{
    int a[MAX], temp=0;
    printf("Enter the figures: \n");
    for (int i = 0; i < MAX; i++)
        if(scanf("%c", &a[i])!=1)
            break;
        temp++;
    for (int i = temp-1; i >= 0; i--)
        printf("%c", a[i]);
}

int main(void)
{
    Solve();
    return 0;
}

//gcc Q7.c -o Q7
//.\Q7.exe