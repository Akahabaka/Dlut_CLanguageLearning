#include<stdio.h>

void Solve(void)
{
    int n, sum=0, a[5], pin=0;
    scanf("%d", &n);
    while(n>0)
    {
        pin++;
        a[pin]=n%10;
        sum+=a[pin];
        n/=10;
    }
    for(int i=pin;i>=0;i--)
    {
        printf("%d", a[i]);
        if(i!=0) printf("+");
    }
    printf("=%d", sum);
}

int main(void)
{
    int a;
    Solve();
    return 0;
}
//gcc Q10.c -o Q10
//.\Q10.exe