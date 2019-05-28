#include <stdio.h>

int main(void)

{
    int money, ibags;
    double cement,bags;

    scanf("%lf", &cement);

    bags = (cement/120) + 1;
    ibags = (int) bags;
    money = ibags*45;
    /* printf("%d\n", ibags); */
    printf("%d", money);

    return 0;
}
