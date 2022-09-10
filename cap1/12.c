#include <stdio.h>

int main()
{
    char c, p; // p = previous

    while((c = getchar()) != EOF)
    {
        if ((c == ' ' || c == '\n' || c == '\t') && p != c)
            printf("\n");
        else if (!(c == ' ' && p == ' '))
            putchar(c);
        
        p = c;
    }
}