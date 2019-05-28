#include <stdio.h>

int main(void)
{
    int age = 0;
    double height = 0;
    printf("How old are you and how is your height? (separate with spaces) \n");
    scanf("%d %lf", &age, &height);
    printf("I am %d years old and %.2f meters tall!\n", age, height);

    return 0;
}
