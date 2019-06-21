#include <stdio.h>

int main(void)
{
    char word1[100];
    char word2[100];
    int i = 0;

    printf("Enter a word: \n");
    scanf("%s", word1);
    printf("Another word: \n");
    scanf("%s", word2);


    /*IMPORTANTE: cada caractere de cada palavra � armazenado na mem�ria em valores bin�rios conforme c�digo ASCII,
    caracteres em min�sculo tem valor maior no c�digo */

    while(word1[i]!='\0' && word2[i]!='\0' && word1[i]==word2[i])
        i++;

        /* Bloco acima compara as palavras: se n�o tiver terminado a leitura, caractere por caractere da primeira palavra,
           se n�o tiver terminado a leitura, caracere por caractere da seguda palavra e se as palavras 1 e 2 tiverem letras iguais
           ent�o incrementa a vari�vel 'i' */


    if(word1[i]<word2[i])
        printf("%s comes before %s in the dictionary.\n", word1, word2);

        /* O bloco acima compara o c�digo ASCII de cada letra das palavras um e dois, se na primeira diferen�a de C�DIGO ASCII entre as palavras
        o valor do c�digo ASCII da vari�vel 'word2' for maior que da vari�vel 'word1', ent�o imprime a senten�a:
        Palavra 1 vem antes no dicion�rio que a Palavra 2. */

    else if(word1[i]>word2[i])
        printf("%s comes after %s in the dictionary.\n", word1, word2);

    else printf("You entered the same word, %s, twice!\n", word1);

    return 0;

}
