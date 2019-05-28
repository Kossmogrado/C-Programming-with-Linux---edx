#include <stdio.h>

int main(void)
{
    int f,s,t;
    printf("Enter three integers, separate them by commas: \n");
    scanf("%d,%d,%d", &f, &s, &t);/* add commas to read them*/
    printf("You entered %d for first, %d for second and %d for third!\n", f,s,t);
    return (0);
}
