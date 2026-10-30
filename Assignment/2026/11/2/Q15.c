#include<stdio.h>
#define M 5
void Solve(int[][M], int[][4]);

int main(void)
{
    int a[3][M], b[M][4];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<M;j++)
            scanf("%d", &a[i][j]);
    }
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<4;j++)
            scanf("%d", &b[i][j]);
    }
    Solve(a, b);
    return 0;
}

void Solve(int a[][M],int b[][4])
{
    int c[3][4]={0};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            for(int k=0;k<M;k++)
                c[i][j]+=a[i][k]*b[k][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }
}