#include<iostream>
#include<cmath>
using namespace std;

int TwoMultiple(int n)
{
    if (n%2==0)
        return 0;
    else
        return 1;
}

double factorial(int n)
{
    double x;
    cout<<"Enter the value of x: ";
    cin>>x;
    double result=1;
    for(int i=1;i<=n;i++)
    {
        result*=i;
    }
    return result;
}

void TaylorExpansion(double x)
{
    double sum=0;
    cout<<"Enter the value of x: ";
    cin>>x;
    for(int i=1;abs((pow(x,i*2-1)/factorial(i*2-1)))>=1e-6;i++)
    {
        sum+=(pow(x,i*2-1)/factorial(i*2-1))*pow(-1,TwoMultiple(i+1));
    }
    cout<<"The sum of the Taylor expansion is "<<sum<<endl;
}

void Guessing()
{ 
    int guess,truth=rand()%101;
    cout<<"Start guessing the number between 1 and 100"<<endl<<"Enter your guess: ";
    cin>>guess;
    while(guess!=truth)
    {
        if(guess>truth) cout<<"Your guess is too high, try again: ";
        else cout<<"Your guess is too low, try again: ";
        cin>>guess;
    }
    cout<<"Congratulations! You guessed the number correctly."<<endl;
}

bool isPrime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

void PrimeNumberCount()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int n1=n;
    if(!isPrime(n1))
    {
        cout<<n<<" = ";
        for(int i=2;i<=sqrt(n1);i++)
        {
            while(n%i==0&&isPrime(i))
            {  
                cout<<i;
                n/=i;
                if(n!=1) cout<<" * ";    
            }
        }
    }
    else
        cout<<"The number is a prime number."<<endl;
}

int main()
{
    //TaylorExpansion(x);
    //Guessing();
    PrimeNumberCount();
    return 0;
}

