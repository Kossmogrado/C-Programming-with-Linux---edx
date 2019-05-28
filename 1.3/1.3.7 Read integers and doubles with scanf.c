#include <stdio.h>

int main (void)

{
    int age = 0;
    double height = 0;
    printf("How old are you?\n");
    scanf("%d", &age);
    printf("How tall are you?\n");
    scanf("%lf", &height);
    printf("You have %d years and are %.2f tall!\n", age, height);

    return 0;
}
