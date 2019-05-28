#include <stdio.h>

int main(void)

{
    double array [3];
    double num = 0;
    int cell = 0;
    int i = 0;
    for (i=0; i <3; i++)
    {
        printf("Enter a decimal number: \n");
        scanf("%lf", &num);
        array[cell]=num;
        printf("The slot %d contains %.2f\n", cell, array[cell]);
        cell = cell + 1;
    }

    return 0;
}


/* For printf(), the "%lf" is not valid -- it should be "%f".
For scanf(), it makes all the difference in the world -- use "%f" for float, "%lf" for double, and "%Lf" for long double. */
