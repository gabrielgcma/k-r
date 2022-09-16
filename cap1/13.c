#include <stdio.h>

#define DENTRO 1
#define FORA   0

int main()
{
    int histogram[5], c, estado, nw; // nw = num of words 

    estado = FORA;
    nw = 0;

    printf("Enter a 5 word phrase: \n");
    
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t')
            estado = FORA;
        else if (estado == FORA)
        {
            estado = DENTRO;
            nw++;
        }
        else
        {
            histogram[nw]++;
        }
    }

    for (int i=0; i<5; i++)
    {
        printf("\nWord %d: ", i);
        for (int j=0; j<histogram[i]; j++)
            printf("%c", 187);
    }
}