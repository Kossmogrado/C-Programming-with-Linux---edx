#include <stdio.h>

int sum (int, int); /* function PROTOTYPE */
int main (void)
{
    int a, b;
    int result;
    printf("Please enter two integers: \n");
    scanf("%d%d", &a, &b);
    printf("You entedered %d and %d.\n", a,b);
    result = sum(a, b); /* copies of the VALUES of the ARGUMENTS a and b */
    printf("Result of the sum: %d.\n", result);
    return 0;
}
/*  FUNCTION DEFINITION */
int sum(int x, int y) /* Values are copied into PARAMETERS x and y */
{
    int compute;
    printf("Starting computation!\n");
    compute = x + y;
    printf("Finished de computation succesfully!\n");
    return compute;
}
