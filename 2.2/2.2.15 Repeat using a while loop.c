#include <stdio.h>

int main(void)
{
    int diceValue;
    int nbThrows = 1;

    scanf("%d", &diceValue);

    while(diceValue != 6)
    {
     scanf("%d", &diceValue);
     nbThrows++;
    }

    printf("The number of Throws until find de six is %d.\n", nbThrows);
    return 0;
}
