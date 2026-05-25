#include <stdio.h>

const char chr[5][5] = {{2, 0, 1, 1, 0}, {1, 2, 0, 0, 1}, {0, 1, 2, 1, 0}, {0, 1, 0, 2, 1}, {1, 0, 1, 0, 2}};

int main(void)
{
    int c;
    scanf("%d", &c);

    while (c--)
    {
        char rajesh[8], sheldon[8];
        scanf("%s %s", rajesh, sheldon);

        int rjsh, shldn;

        switch (rajesh[0])
        {
        case 'p':
            rjsh = rajesh[1] == 'e' ? 0 : 1;
            break;
        case 't':
            rjsh = 2;
            break;
        case 'l':
            rjsh = 3;
            break;
        case 's':
            rjsh = 4;
            break;
        }

        switch (sheldon[0])
        {
        case 'p':
            shldn = sheldon[1] == 'e' ? 0 : 1;
            break;
        case 't':
            shldn = 2;
            break;
        case 'l':
            shldn = 3;
            break;
        case 's':
            shldn = 4;
            break;
        }

        switch (chr[rjsh][shldn])
        {
        case 0:
            puts("sheldon");
            break;
        case 1:
            puts("rajesh");
            break;
        default:
            puts("empate");
        }
    }

    return 0;
}