#include <stdio.h>

int main(void)
{
    int n;

    while (scanf("%d", &n) != EOF)
    {
        printf("%s\n", n == 0 ? "vai ter copa!" : "vai ter duas!");
    }

    return 0;
}