#include <stdio.h>

int main(void)
{
    char letter1;
    /*printf("Enter one character: \n");*/
    scanf("%c", &letter1);
    printf("++++%c++++\n", letter1);
    printf("+++%c%c%c+++\n",letter1, letter1, letter1);
    printf("++%c%c%c%c%c++\n", letter1, letter1, letter1, letter1, letter1);
    printf("+%c%c%c%c%c%c%c+\n", letter1, letter1,letter1,letter1,letter1, letter1, letter1);
    printf("%c%c%c%c%c%c%c%c%c\n", letter1,letter1,letter1,letter1,letter1, letter1,letter1,letter1, letter1);
    return 0;
}
