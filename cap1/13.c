#include <stdio.h>

#define IN  1
#define OUT    0
#define SIZE 5

int main()
{
    int histo[SIZE], c, state = OUT, wcount = 0;

    for (int i=0; i<SIZE; i++)
    {
        histo[i] = 0;
    }
    
    printf("Enter a %d word phrase: \n", SIZE);
    
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (state == IN)
            {
                wcount++;
                state = OUT;
            }
        }
        else if (state == OUT || state == IN) // if it's not whitespace and we're in or outside a word
        {
            state = IN;
            histo[wcount]++;
        }
    }

    for (int i=0; i<SIZE; i++)
    {
        //printf("\nSize of word %d: %d", i+1, histo[i]);
        printf("\nSize of word %d: ", i+1);
        for (int j=0; j<histo[i]; j++)
            printf("█");
        printf("\n");
    }
}