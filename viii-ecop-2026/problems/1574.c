#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int p = 0;
        int *m = (int *)malloc(n * sizeof(int));

        for (int i = 0; i < n; i++)
        {
            char chr[10];
            scanf("%s", chr);

            switch (chr[0])
            {
            case 'L': {
                m[i] = -1;
            }
            break;

            case 'R': {
                m[i] = 1;
            }
            break;

            default: {
                int tmprr;
                scanf(" AS %d", &tmprr);

                getchar();

                m[i] = m[tmprr - 1];
            }
            }

            p += m[i];
        }

        printf("%d\n", p);

        free(m);
    }

    return 0;
}