#include <stdio.h>

int main (void)
{
    int signaturesNeeded = 2000;
    int day = 0;
    int newSing = 2;
    int totalSing = 5;

    while (totalSing < 2000)
    {
        day++;
        newSing = newSing*3;
        printf("Day %d, signatures: %d ", day, newSing);
        totalSing = totalSing + newSing;
        printf("Total: %d.\n", totalSing);
    }

    return 0;
}


