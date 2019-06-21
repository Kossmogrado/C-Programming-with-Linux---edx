#include <stdio.h>

int main (void)
{
    int i = 0;
    int t = 0;
    int l = 0;
    int j = 0;
    int nbWords = 0;
    char word[11];
    int lenght[10];

    for(i=0; i<10; i++)
    {
        lenght[i]=0;
    }

    scanf("%d", &nbWords);
    for(t=0; t<nbWords; t++)
    {
        scanf("%s", word);
        l=0;
        while(word[l]!='\0')
        {
            l++;
        }
    lenght[l]=lenght[l]+1;
    printf("%s %d ", word, l);
    }

    for(j=0; j<10; j++)
        {
            printf("There are %d words with %d letters.\n", lenght[j],j);
        }

    return 0;
}
