#include <stdio.h>

int main(void)
{
    double tall = 0;
    printf("How tall are you?\n");
    scanf("%lf", &tall);
    printf("You have %.2f meters tall!\n", tall);
    return 0;
}
