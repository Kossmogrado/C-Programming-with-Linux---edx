#include <stdio.h>

int main (void)
{
    int intTwo = 2;
    int intFive = 5;
    double doubleTwo = 2.0;
    double doubleFive = 5.0;
    printf("intFive/intTwo equals %d\n", intFive/intTwo);
    printf("doubleFive/doubleTwo equals %f\n", doubleFive/doubleTwo);
    printf("doubleFive/intTwo equals %f\n", doubleFive/intTwo);
    printf("intFive/doubleTwo equals %f\n", intFive/doubleTwo);
    return 0;

}
