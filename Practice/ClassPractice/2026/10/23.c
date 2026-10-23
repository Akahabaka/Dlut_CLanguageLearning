#include <stdio.h>
#define N 5
#define ROW 3
#define COL 5

void swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int mini(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

void bubble(int a[])
{
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (a[j] > a[j + 1])
                swap(&a[j], &a[j + 1]);
        }
    }
}

void selection(int a[])
{
    int temp, pin;
    for (int i = 0; i < N - 1; i++)
    {
        pin = i;
        temp = a[i];
        for (int j = i + 1; j < N; j++)
        {
            if (a[j] < temp)
            {
                temp = a[j];
                pin = j;
            }
        }
        // swap(&a[i],&a[pin]);
        a[pin] = a[i];
        a[i] = temp;
    }
}

void exercise1()
{
    int a[ROW][COL];
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    double average[COL] = {0.0};
    for (int i = 0; i < COL; i++)
    {
        for (int j = 0; j < ROW; j++)
        {
            average[i] += a[j][i];
        }
        average[i] /= ROW;
    }
    for (int i = 0; i < COL; i++)
        printf("%lf ", average[i]);
}

int main()
{
    int a[N] = {0};
    printf("Enter 5 figures: \n");
    for (int i = 0; i < N; i++)
        scanf("%d", &a[i]);

    // bubble(a);
    selection(a);

    for (int i = 0; i < N; i++)
        printf("%d ", a[i]);
    return 0;
}

// gcc 23.c -o 23
//.\23.exe