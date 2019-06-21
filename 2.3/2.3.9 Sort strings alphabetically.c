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


    /*IMPORTANTE: cada caractere de cada palavra é armazenado na memória em valores binários conforme código ASCII,
    caracteres em minúsculo tem valor maior no código */

    while(word1[i]!='\0' && word2[i]!='\0' && word1[i]==word2[i])
        i++;

        /* Bloco acima compara as palavras: se não tiver terminado a leitura, caractere por caractere da primeira palavra,
           se não tiver terminado a leitura, caracere por caractere da seguda palavra e se as palavras 1 e 2 tiverem letras iguais
           então incrementa a variável 'i' */


    if(word1[i]<word2[i])
        printf("%s comes before %s in the dictionary.\n", word1, word2);

        /* O bloco acima compara o código ASCII de cada letra das palavras um e dois, se na primeira diferença de CÓDIGO ASCII entre as palavras
        o valor do código ASCII da variável 'word2' for maior que da variável 'word1', então imprime a sentença:
        Palavra 1 vem antes no dicionário que a Palavra 2. */

    else if(word1[i]>word2[i])
        printf("%s comes after %s in the dictionary.\n", word1, word2);

    else printf("You entered the same word, %s, twice!\n", word1);

    return 0;

}
