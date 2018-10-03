#include <stdio.h>

/* unambguate */
main()
{
    int c, t1, b1, n1;
    
    c = t1 = b1 = n1 = 0;

    while( (c = getchar()) != EOF)
        if (c == '\t')
            ++t1;
        else if (c == ' ')
            ++b1;
        else if (c == '\n')
            ++n1;
    printf("\n\nSpaces: %d, Tabs: %d, Newlines: %d\n\n", b1, t1, n1);
}
