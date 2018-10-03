#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

int main()
{
    int c, state;

    c = 0;
    state = OUT;
    while ((c = getchar()) != EOF) {
        if (c != ' ') {
            putchar(c);
        }
        else if (c == ' ') {
            putchar('\n');
        }
    }
}
