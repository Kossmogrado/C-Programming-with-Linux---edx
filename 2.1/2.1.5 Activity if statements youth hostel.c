#include <stdio.h>

int main(void)

{
    int hours = 0;
    int price = 5;
    int cost = 0;
    scanf("%d", &hours);

    if (hours>0)  /* primeira condição, lê a hora de entrada, se maior que 0, entra na função */
    {
        cost = 10 + (hours*price);

        if (cost>53) /* segunda condição, lê o custo, se maior que 53, entra na função */
        {
            printf("53");
        }
        else
        {
            printf("%d", cost);
        }

    }
    else
    {
        printf("%d", hours);
    }

    return 0;
}


/* #include <stdio.h>
int main() {
    int arrivalHour = 0;
    scanf("%d", &arrivalHour);
    int total = 10+5*arrivalHour;
    int totalExceeds53 = total > 53;
    if(totalExceeds53){
        printf("53");
    }else{
        printf("%d", total);
    }
    return 0;
}   */
