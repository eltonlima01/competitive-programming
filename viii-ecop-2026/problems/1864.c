#include <stdio.h>

int main(void)
{
    const char strng[35] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    const char *chr = strng;

    int n;
    scanf("%d", &n);

    while (n > 0)
    {
        putchar(*chr);

        ++chr;
        --n;
    }

    putchar('\n');

    return 0;
}