#include <stdio.h>

int main(void)
{
    unsigned int a, z;

    while (scanf("%d %d", &a, &z) != EOF)
    {
        printf("%u\n", a ^ z);
    }

    return 0;
}