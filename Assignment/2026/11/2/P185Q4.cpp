#include<bits/stdc++.h>
using namespace std;

bool isPrime(int);

int main(void)
{
    for(int i=2;i<=200;i++)
    {
        if(isPrime(i))
            printf("%d\n", i);
    }
    return 0;
}

bool isPrime(int a)
{
    for(int i=2;i*i<=a;i++)
    {
        if(a%i==0)
            return 0;
    }
    return 1;
}