<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

void mult(int n)
{
    int i = 1;
    double mul = 1;
    while (i <= n)
    {
        mul *= i;
        i++;
    }
    cout << mul << endl;
}

void fibonacci(int n)
{
    cout<<"Let me get the 'n' where you want the arrat to stop:";
    cin>>n;
    //officecli
    int fib[n] = {};
    int pin = 2;
    fib[0] = 0, fib[1] = 1;
    cout << fib[0] << ' ' << fib[1] << ' ';
    for (int i = 2; i <= n-1; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
        cout << fib[i] << ' ';
        pin++;
        if (pin == 8)
        {
            cout << endl;
            pin = 0;
        }
    }
}

void powup2(int n)
{
    int mul = 1;
    for (int i = 0; i <= n; i++)
    {
        mul *= 2;
    }
    cout << mul << endl;
}

void sumupTo100()
{
    int sum = 0, n = 1;
    do
    {
        sum += n;
        n++;
    } while (n <= 100);
    cout << sum << endl;
    printf("sum=%d", sum);
}

void closeToPi()
{
    double pi=3.1415926;
    
    while(pi)
    {
        
    }
}

int main()
{
    //mult(10);
    //sumupTo100();
    //fibonacci();
    //powup2(5);
    //closeToPi();
    return 0;
=======
#include <bits/stdc++.h>
using namespace std;

void mult(int n)
{
    int i = 1;
    double mul = 1;
    while (i <= n)
    {
        mul *= i;
        i++;
    }
    cout << mul << endl;
}

void fibonacci(int n)
{
    cout<<"Let me get the 'n' where you want the arrat to stop:";
    cin>>n;
    //officecli
    int fib[n] = {};
    int pin = 2;
    fib[0] = 0, fib[1] = 1;
    cout << fib[0] << ' ' << fib[1] << ' ';
    for (int i = 2; i <= n-1; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
        cout << fib[i] << ' ';
        pin++;
        if (pin == 8)
        {
            cout << endl;
            pin = 0;
        }
    }
}

void powup2(int n)
{
    int mul = 1;
    for (int i = 0; i <= n; i++)
    {
        mul *= 2;
    }
    cout << mul << endl;
}

void sumupTo100()
{
    int sum = 0, n = 1;
    do
    {
        sum += n;
        n++;
    } while (n <= 100);
    cout << sum << endl;
    printf("sum=%d", sum);
}

void closeToPi()
{
    double pi=3.1415926;
    
    while(pi)
    {
        
    }
}

int main()
{
    //mult(10);
    //sumupTo100();
    //fibonacci();
    //powup2(5);
    //closeToPi();
    return 0;
>>>>>>> 724589ab332d453fe0f644bd324a121d52050c71
}