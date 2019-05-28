#include <stdio.h>

int main(void)

{
    int i;

    /* i++ is short for i = i+1 */

    for (i=27;i>0; i = i-3)
    {
        printf("i is equal to %d\n", i);
    }
    return 0;
}
