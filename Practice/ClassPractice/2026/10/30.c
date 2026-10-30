#include<stdio.h>
#define N 5

int exer1(int [], int);
int main(void)
{
    int a[N];
    for(int i=0;i<N;i++)
        scanf("%d", &a[i]);
    printf("%d\n", exer1(a, N));//数组长度为N
    return 0;
}
int exer1(int a[], int n)
{
    if(!n)
        return a[0];
    else
        return exer1(a, n-1)+a[n-1];
}