#include <stdio.h>
#define RATE 1.08

void Solve(void)
{
    const double moto = 24;
    double ans = moto;
    for (int year = 1626; year < 2021; year++)
    {
        ans *= RATE;
    }
    printf("%.2f\n", ans);
}

int main(void)
{
    Solve();
    return 0;
}

// gcc Q15.c -o Q15
//.\Q15.exe