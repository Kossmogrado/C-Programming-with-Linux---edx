#include <stdio.h>
int main(void)

{
    char word [4];    /*array of characters (string) */
    printf("Enter a word with 3 letters: ");
    scanf("%s", word);      /* o comando %s é reponsável por ler uma string */
    printf("The word is %s.\n", word);
    printf("The Characters are <%c> <%c> <%c> <%c>\n", word[0],word[1],word[2],word[3]); /*aqui se pode ver quais são os caracteres usados no array pra formar a string */
    word[1] = 'x';  /*aqui alteramos o valor contido no segundo elemento do array */
    printf("The new string is %s.\n", word);
    return 0;
}
