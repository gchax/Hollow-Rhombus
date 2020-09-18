#include <stdio.h>
void drawRhombus(int);

int main()
{
    int n;
    scanf_s("%d", &n);

    drawRhombus(n);

    return 0;
}

void drawRhombus(int x)
{
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= x - i; j++) printf(" ");
        for (int k = 1; k <= x;k++)
        {
            if (i == 1 || i == x || k == 1 || k == x) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}