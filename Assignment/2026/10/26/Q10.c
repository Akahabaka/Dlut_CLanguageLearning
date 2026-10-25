#include <stdio.h>
#define N 10

void Solve(int a[])
{
    int sum[N][N + 1] = {0}, I = 0, J = 0, maxn;
    for (int i = 0; i < N; i++) // 从第i个起
    {
        for (int j = 1; j <= N - i; j++) // 子数组含有j个元素
        {
            for (int k = i; k <= j + i; k++) // 对该选定的子数组求和
            {
                sum[i][j] += a[k];
            }
        }
    }
    maxn = sum[0][1];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= N; j++)
        {
            if (sum[i][j] > maxn)
            {
                maxn = sum[i][j];
                I = i;
                J = j;
            }
        }
    }
    for (int i = I; i < J + I; i++)
        printf("%d ", a[i]);
    //printf("%d %d", I, J);
}

int main(void)
{
    int a[N];
    for (int i = 0; i < N; i++)
        scanf("%d", &a[i]);
    Solve(a);
    return 0;
}
// gcc Q10.c -o Q10
//.\Q10.exe