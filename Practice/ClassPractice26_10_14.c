#include<stdio.h>
#include<stdlib.h>

void Multiplication99()
{
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
        {
            printf("%4d",i*j);
        }
        printf("\n");
    }
}

void Triangle_1()
{
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void Triangle_2()
{
    for(int i=10;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void Triangle_3()
{
    int space=-1, star=11;
    for(int i=1;i<=10;i++)
    {
        space++;
        star--;
        for(int j=1;j<=space;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=star;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void Triangle_4()
{
    int space=11, star=-1;
    for(int i=1;i<=10;i++)
    {
        space--;star++;
        for(int j=1;j<=space;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=star;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void Triangle_5()
{
    int space=5,star=1;
    for(int i=1;i<=6;i++)
    {
        for(int j=1;j<=space;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=star;k++)
        {
            printf("*");
        }
        printf("\n");
        space--;star+=2;
    }
}

void HeartPrint()
{
    for(int y=1;y<=50;y++)
    {
        for(int x=1;x<=50;x++)
        {
            if(pow((pow(x,2)+pow(y,2)-1),3)==pow(x,2)*pow(y,3))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void gcd()
{
    int a, b;
    printf("Enter the two numbers you want to know the GCD of them: ");
    scanf("%d %d", &a, &b);
    while(b!=0)
    {
        int r=a%b;
        a=b;
        b=r;
    }
    printf("%d", a);  
}

void P139(void)
{
    
}

int main(void)
{
    //Multiplication99();
    //Triangle_1();
    //Triangle_2();
    //Triangle_3();
    //Triangle_4();
    //Triangle_5();
    //HeartPrint();
    //gcd();
    /*while(1)
    {
        system("time");
        system("pause");
        system("clear");
    }*/
    /*double a=1.14514;
    scanf("%lf", &a);
    printf("我喜欢%.3f\n",a);*/
    //printf("Hello World!\n");
    return 0;
}


//gcc ClassPractice26_10_14.c -o ClassPractice26_10_14
//.\ClassPractice26_10_14.exe