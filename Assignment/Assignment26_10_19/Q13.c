#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <string.h>

#define MAX 100

void Solve(void)
{
    int lev = 2;
    char ans[MAX];
    char inp[MAX];
tuduku:
    for (int i = 0; i <= lev; i++)
    {
        ans[i] = '0' + rand() % 10;
    }
    ans[lev + 1] = '\0';
    printf("%s\n", ans);
    Sleep(2000);
    // system("cls");在vscode里无效，是什么兼容性问题吗？经GPT建议改为↓
    printf("\033[2J\033[H");
    fflush(stdout);
    scanf("%99s", inp);
    if (!strcmp(inp, ans))
    {
        printf("Correct!\n");
        lev++;
        goto tuduku;
    }
    else
    {
        printf("Wrong!\n");
        return;
    }
}

int main(void)
{
    srand((unsigned int)time(0));
    Solve();
    return 0;
}

// gcc Q13.c -o Q13
//.\Q13.exe