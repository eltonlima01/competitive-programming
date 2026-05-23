#include <stdio.h>

int main(void)
{
    int l;

    while (scanf("%d", &l) != EOF)
    {
        int v = 1;

        while (l > 0)
        {
            int vi;
            scanf("%d", &vi);

            v = vi > v ? vi : v;

            --l;
        }

        if (v < 10)
        {
            puts("1");
        }
        else if (v < 20)
        {
            puts("2");
        }
        else
        {
            puts("3");
        }
    }

    return 0;
}