/* We would like you to develop a program capable of making a child play automatically the game of "more or less" -- the child must try to guess a secret number.
The program should respond to each guess with "it is more" or "it is less" until the child finds the right number.

Your program must first read an integer indicating the number that the child will have to find during the game.
Next the program should repeatedly read the player's guesses and display the text "it is more" if the child has submitted a smaller number or "it is less" if they have submitted a larger number.
Once the correct number is reached, the program should print "Number of tries needed:" followed by a new line and the integer number of tries that it took the guesser. */

#include <stdio.h>

int main(void)
{
    int number = 0;
    int  numTry = 0;
    int tries = 1;

    scanf("%d", &number);
    scanf("%d", &numTry);

    while (numTry != number)
    {
        if (numTry<number)
        {
            printf("it is more\n");
        }
        else
        {
            printf("it is less\n");
        }

        tries++;
        scanf("%d", &numTry);
    }

    printf("Number of tries needed:\n%d\n", tries);

    return 0;
}

/* #include <stdio.h>

int main()
{
    int secretNumber;
    scanf("%d",&secretNumber);
    int proposal = secretNumber + 1;
    int nbTries = 0;
    while (proposal != secretNumber)
    {
        scanf("%d",&proposal);
        if (proposal < secretNumber)
            printf("it is more\n");
        if (proposal > secretNumber)
            printf("it is less\n");
        nbTries = nbTries + 1;
    }
    printf("Number of tries needed:\n%d\n",nbTries);

    return 0;
} */
