#include <stdio.h>

int main (void)
{
    char word1 [5];
    char word2 [8];

    scanf("%s %s", word1, word2);

    printf("%s %s.\n");

    word1[2] = '\0';        /* '\0' limita onde a string é impressa na tela, por isso todo array deve ter um espaço a mais além do número de caracteres que serão inseridos */
    word2[5] = '\0';

    printf("%s %s.\n");

    return 0;
}
