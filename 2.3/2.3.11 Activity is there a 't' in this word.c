/* You are conducting a linguistic study and are interested in finding words that contain the letter 't' or 'T' in the first half of the word (including the middle letter if there is one).
Specifically, if the first half of the word does contain a 't' or a 'T', your program should output a 1.
If the first half does not contain the letter 't' or 'T', but the second half does, then your program should output a 2.
Otherwise, if there is no 't' or 'T' in the word at all, your program's output should be -1.
You may assume that the word entered does not have more than 50 letters. */

#include <stdio.h>

int main(void)
{
    char word[51];
    int i = 0;
    int j = 0;
    int k = 0;
    int found = 0;

    scanf("%s", word);

    while(word[j]!='\0')
    {


        if('T'== word[j])
        {
            found = 1;
            i = j;
        }

        if('t'== word[j])
        {
            found = 1;
            i = j;
        }

        j++;
    }
    if(found==0)
    {
        printf("-1\n");
    }

    if(found>0)
    {

        if(i==0)
        {
            printf("1\n");
        }

        if(i>0)
        {
            k = j/i;

            if(k>=2)
            {
                printf("1\n");
            }

            if(k<2)
            {
                printf("2\n");
            }
        }
    }

}

/* #include <stdio.h>
int main(void)
{
	char word[51];
	int length = 0;
	int i,found, maxindex;

	scanf("%s", word);

	while (word[length]!='\0')
	    length++;
	if (length%2==0)
	    maxindex = length/2-1;
	else
	    maxindex = length/2;

	i = 0;
	found = 0;
	while (!found && i < length) {
		if (word[i]=='t' || word[i]=='T') found++;
		else i++;
	}

	if (!found)
	    printf("-1");
	else if (i <= maxindex) printf("1");
	else printf("2");

	return 0;
} */
