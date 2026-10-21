#include <stdio.h>
#include <math.h>
#define SIZE1 10
#define SIZE2 26

void exercise1(void)
{
    char a[SIZE1];
    printf("Enter 10 characters: \n");
    for (int i = 0; i < SIZE1; i++)
        scanf("%c", &a[i]);
    for (int i = 9; i >= 0; i--)
        printf("%c", a[i]);
}

void example1(void) // a->97
{
    char a[SIZE2] = {'\0'};
    int num[SIZE2 * 2] = {0};
    printf("Enter 26 characters: \n");
    for (int i = 0; i < SIZE2; i++)
        scanf(" %c", &a[i]);
    for (int i = 0; i < SIZE2; i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
            num[i + SIZE2]++;
        if (a[i] >= 'a' && a[i] <= 'z')
            num[i]++;
    }
    for (int i = 0; i < SIZE2; i++)
        printf("%c: %d\n", 'a' + i, num[i]);
    for (int i = 0; i < SIZE2; i++)
        printf("%c: %d\n", 'A' + i, num[i + SIZE2]);
}

void P155Q1(void)
{
    int a[10], sum=0, ans;
    double ave;
    for(int i=0;i<=9;i++)
    {
        scanf("%d", &a[i]);
        sum+=a[i];
    }
    ave=sum/10.0;
    for(int i=0;i<=9;i++)
    {
        if(a[i]>=ave) ans++;
    }
    printf("%d\n", ans);
}

void P155Q13(void)
{
    int a[11]={0,1}, temp;
    for(int i=1;i<=10;i++)//i为层数
    {
        for(int j=1;j<=ceil(i/2.0);j++)//j为同层数下的第j个
        {
            a[j]+=j-1;
            temp=j;
        }
        if(i!=1)
        {
            for(int j=temp+1;j<=i;j++)//j为同层数下的第j个
            {
                a[j]=a[i-j+1];
            }
        }
        for(int j=1;j<=i;j++)
        {
            printf("%-5d", a[j]);
        }
        printf("\n");
    }
}

int main(void)
{
    //exercise1();
    //example1();
    P155Q13();
    return 0;
}

// gcc ClassPractice26_10_21.c -o ClassPractice26_10_21
//.\ClassPractice26_10_21.exe

/*
tsuitachi
futsuka
mikka
yokka
itsuka
muika
nanoka
youka
kokonoka
tooka
jyuuyokka
nijyuuyokka
hatsuka
*/