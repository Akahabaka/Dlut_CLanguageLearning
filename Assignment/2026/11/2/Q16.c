#include<stdio.h>

void Solve(double [][]);
void Selection(double [], int);
void swap(int *, int *);

int main(void)
{
    double a[4][6];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
            scanf("%lf", &a[i][j]);
    }
    Solve(a);
    return 0;
}

void Solve(double a[][6])
{
    double pers[5], sub[3];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
        {
            a[3][i]+=a[j][i];
        }
        pers[i]=a[3][i]/3;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            a[i][5]+=a[i][j];
        }
        sub[i]=a[i][5]/5;
    }
    Selection(sub, 3);
    Selection(pers, 5);
}

void Selection(double a[], int len)
{
    int temp, pin, c;
    for(int i=0;i<len-1;i++)
    {
        temp=a[i];pin=i;
        for(int j=i+1;j<len;j++)
        {
            if(a[j]<temp)
            {
                temp=a[j];
                pin=j;
            }
        }
        /*c=a[pin];
        a[pin]=a[i];
        a[i]=c;*/
        swap(&a[i], &a[pin]);
    }
    if(len==3)
    {
        for(int i=0;i<len;i++)
            printf("%d ", a[i]);
    }
    else
    {
        for(int i=len-1;i>=0;i--)
            printf("%d ", a[i]);
    }
}

void swap(int *a, int *b)
{
    int c=*a;
    *a=*b;
    *b=c;
}