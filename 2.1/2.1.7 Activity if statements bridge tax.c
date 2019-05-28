#include <stdio.h>
int main(void)

{
    int dice1, dice2;


    scanf("%d %d", &dice1, &dice2);

    int sum = dice1 + dice2;

    if (sum >=10)
    {
        printf("Special tax\n36\n");
    }
    else
    {
        printf("Regular tax\n%d\n", sum*2);
    }

    return 0;
}

/* #include <stdio.h>
int main(void) {
    int totalExceedsOrEquals10;
    int total;
    int dice1 = 0;
    int dice2 = 0;

    scanf("%d %d", &dice1, &dice2);
    total = dice1+dice2;
    totalExceedsOrEquals10 = total >= 10;

    if(totalExceedsOrEquals10){
        printf("Special tax\n");
        printf("36");
    }else{
        printf("Regular Tax\n");
        printf("%d", total*2);
    }

    return 0;
} */
