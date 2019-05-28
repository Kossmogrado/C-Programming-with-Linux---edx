#include <stdio.h>

int main ()
{
    int diceValue = 0;
    int neinsix = 0;

    scanf("%d", &diceValue);
    neinsix = diceValue != 6;

    while (neinsix)
    {
        printf("Dice Value is %d.\n", diceValue);
        scanf("%d", &diceValue);
        neinsix = diceValue !=6;
    }

    printf("Dice value is equal 6, endcode.\n");

    return 0;
}
