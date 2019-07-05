/* You are still conducting linguistic research!
This time, you'd like to write a program to find out how many letters occur multiple times in a given word.
Your program should read a word from the input and then sort the letters of the word alphabetically (by their ASCII codes).
Next, your program should iterate through the letters of the word and compare each letter with the one following it.
If these equal each other, you increase a counter by 1, making sure to then skip ahead far enough so that letters that occur more than twice are not counted again.
You may assume that the word you read from the input has no more than 50 letters, and that the word is all lowercase. */

/* Sie betreiben noch Sprachforschung!
Dieses Mal möchten Sie ein Programm schreiben, um herauszufinden, wie viele Buchstaben in einem bestimmten Wort mehrfach vorkommen.
Ihr Programm sollte ein Wort aus der Eingabe lesen und dann die Buchstaben des Wortes alphabetisch sortieren (nach ihren ASCII-Codes).
Als nächstes sollte Ihr Programm die Buchstaben des Wortes durchlaufen und jeden Buchstaben mit dem darauf folgenden vergleichen.
Wenn diese gleich sind, erhöhen Sie einen Zähler um 1, wobei Sie so weit vorspringen müssen, dass Buchstaben, die mehr als zweimal vorkommen, nicht erneut gezählt werden.
Sie können davon ausgehen, dass das Wort, das Sie aus der Eingabe gelesen haben, nicht mehr als 50 Buchstaben hat und dass das Wort nur Kleinbuchstaben enthält. */

#include <stdio.h>

int main(void)
{
    char word[51];
    int i, j, k = 0;
    int swap = 0;
    int count = 0;
    scanf("%s", word);

    while(word[k]!='\0')
    {
        k++;
    }

    /* printf("%d\n", k); */

   for (i=0; i<k; i++)
    {
        for (j=0; j<k-1; j++)
        {
            if (word[j]>word[j+1])
            {
                swap = word[j];
                word[j] = word[j+1];
                word[j+1] = swap;
            }
        }
    }

    /* printf("%s\n", word); */

    for (i=0; i<k; i++)
    {
        if (word[i]==word[1+i])
        {
            count++;
            i++;
        }
    }
    printf("\n%d\n", count);

    return 0;
}


/* #include <stdio.h>
int main(void)
{
    char word[51];
    int length = 0;
    int i, j;
    char swap;
    int repeats = 0;

    scanf("%s", word);

    while (word[length]!='\0')
	length++;

    //Sort the word by alphabetical order
    for(j=0;j<length-1; j++) {
        for(i=0;i<length-1;i++) {
            if (word[i] > word[i+1]) {
                swap = word[i];
                word[i]   = word[i+1];
                word[i+1] = swap;
            }
        }
    }

    i = 0;

    //Check for repeating characters in the sorted word
    while (i<length-1) {
        if (word[i]==word[i+1]) {
            repeats++;
            j=i+2;

            //Continues through the word until it reaches a new character
            while (j<length && word[i]==word[j])
                j++;
            i = j;
        } else {
            i++;
        }
    }

    printf("%d", repeats);

    return 0;
} */
