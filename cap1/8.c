#include <stdio.h>

int main()
{
    int num_espacos = 0, num_tabs = 0, num_nl = 0;
    
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
            num_nl++;
        if (c == ' ')   
            num_espacos++;
        if (c == '\t')
            num_tabs++;
    }

    printf("%d espaços, %d tabulações e %d newlines.\n", num_espacos, num_tabs, num_nl);
}