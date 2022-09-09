#include <stdio.h>

int main()
{
    // pc = previous char
    char c, pc;
    
    while ((c = getchar()) != EOF)
    {
        if (!(c == ' ' && pc == ' '))
            printf("%c", c);
        pc = c;   
    }   
}