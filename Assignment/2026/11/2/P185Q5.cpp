#include<bits/stdc++.h>
using namespace std;

bool isPerfectnum(int);

int main(void)
{
    for(int i=1;i<=1000;i++)
    {
        if(isPerfectnum(i))
            printf("%d\n", i);
    }
    return 0;
}

bool isPerfectnum(int a)
{
    int num=0;
    for(int i=1;i<=a/2;i++)
    {
        if(a%i==0)
            num+=i;
        if(num==a)
            return 1;
    }  
    return 0;
}
