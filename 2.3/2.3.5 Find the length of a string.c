#include <stdio.h>

int main(void)
{
    char word[30];
    int i = 0;

    scanf("%s", word);

    while ( word[i]!='\0')
    {
        i = i+1;
    }

    printf("The word %s has %d characters.\n", word, i);

    return 0;
}
