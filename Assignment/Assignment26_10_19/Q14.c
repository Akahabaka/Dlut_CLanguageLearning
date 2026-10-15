#include <stdio.h>

void Solve(void)
{
    unsigned long long gra=0;
    unsigned long long gras = 1;
    long double output = 0;

    for (int i = 1; i <= 64; i++)
    {
        gra += gras;

        if (i < 64)
            gras *= 2;
    }
    output = gra / 1.42e8L;
    printf("The total volume is %.2Lf.\n", output);
}

int main(void)
{
    Solve();
    return 0;
}

//gcc Q14.c -o Q14 -D__USE_MINGW_ANSI_STDIO=1
//.\Q14.exe