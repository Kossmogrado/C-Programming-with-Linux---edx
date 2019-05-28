#include <stdio.h>

int main (void)
{
    char letter1, letter2;
    printf("Enter two letters: \n");
    scanf("%c %c", &letter1, &letter2);
    printf("The letters are %c and %c.\n", letter1, letter2);

    return 0;
}
