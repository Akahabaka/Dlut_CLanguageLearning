#include <stdio.h>
#include <math.h>
#define PI 3.1415926

double AreaofCirlce(int);
void Selection(int[], int);
void swap(int *, int *);
void Fib(int);
void Yanghui(void);

int main(void)
{
    int r, a[5] = {5, 4, 3, 2, 1};
    /*printf("Input the radius: ");
    scanf("%d", &r);
    printf("The area is: %lf", AreaofCirlce(r));*/
    // Selection(a, 5);
    // Fib(5);
    Yanghui();
    return 0;
}

void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

void Fib(int n)
{
    int a[n];
    a[0] = 1;
    a[1] = 1;
    for (int i = 2; i < n; i++)
        a[i] = a[i - 1] + a[i - 2];
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}

void Selection(int a[], int n)
{
    int temp, pin;
    for (int i = 0; i < n - 1; i++) // 排好了i个
    {
        temp = a[i];
        pin = i;
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (a[j] < temp)
            {
                temp = a[j];
                pin = j;
            }
        }
        swap(&a[i], &a[pin]);
    }
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}

double AreaofCirlce(int r)
{
    double area = pow(r, 2) * PI;
    return area;
}

void Yanghui(void)
{
    int a[10][10] = {0};
    a[0][0] = 1;
    for (int i = 1; i < 10; i++) // 第i行
    {
        for (int j = 0; j <= i; j++) // 第i行的第j+1个元素
        {
            if (j == 0)
                a[i][j] = 1;
            else
                a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
        }
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j <= i; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}

// gcc 28.c -o 28
//.\28.exe