#include <stdio.h>
#define N 10

void Solve(int a[], int m)
{
    int b[N - m];
    for (int i = m; i < N; i++)
        b[i - m] = a[i];
    for (int i = m - 1; i >= 0; i--)
        a[N - m + i] = a[i];
    for (int i = 0; i < N - m; i++)
        a[i] = b[i];
}

int main(void)
{
    int m, a[N];
    printf("Enter the 'n'(no bigger than 10): \n");
    scanf("%d", &m);
    printf("Enter the array: \n");
    for (int i = 0; i < N; i++)
        scanf("%d", &a[i]);
    Solve(a, m);
    for (int i = 0; i < N; i++)
        printf("%d ", a[i]);
    return 0;
}
// gcc Q8.c -o Q8
//.\Q8.exe