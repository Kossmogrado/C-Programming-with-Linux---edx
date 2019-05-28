#include <stdio.h>

int main(void)

{
    /* + - * / % : arithmetic operators */
    /* < > <= >= != == : caparison operators */
    int a = 5;
    int b = 2;
    int result = 0;
    printf("Check: Is a > b?\n");
    result = a>b; /*condicional */
    printf("Result is %d.\n", result);
    if (result)
    {
        printf("TRUE!\n");
    }
    else
    {
        printf("FALSE!");
    }
    return 0;
}
