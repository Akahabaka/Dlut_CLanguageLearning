#include <bits/stdc++.h>
#define N 10
using namespace std;

void Solve(int a[])
{
    bool flag = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                flag = 1;
                break;
            }
        }
        if (!flag)
            printf("%d ", a[i]);
        flag = 0;
    }
}

int main(void)
{
    int a[N];
    for (int i = 0; i < N; i++)
        scanf("%d", &a[i]);
    Solve(a);
    return 0;
}
// g++ Q9.cpp -o Q9
//.\Q9.exe