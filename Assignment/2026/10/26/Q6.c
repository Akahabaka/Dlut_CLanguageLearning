#include<stdio.h>
#define MAX 100
int space, figure, letter;

void Solve(void)
{
    char a;
    for(int i=0;i<MAX;i++)
    {
        scanf("%c", &a);
        if(a=='\n') break;
        if((a>='a'&&a<='z')||(a>='A'&&a<='Z')) letter++;
        if(a>='0'&&a<='9') figure++;
        if(a==' ') space++;
        
    }
    printf("%d\n%d\n%d\n", letter, figure, space);
}

int main(void)
{
    Solve();
    return 0;
}

//gcc Q6.c -o Q6
//.\Q6.exe