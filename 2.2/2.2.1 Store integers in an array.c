#include <stdio.h>

int main(void)

{
    int array [3]; /* creates space to hold three integers */
    array [0] = 18;     /* put in space 0 the value 18 */
    array [1] = 137;    /* put in space 1 the value 137 */
    array [2] = 8;      /* put in space 2 the value 8 */
    printf("First element is %d.\n", array[0] );
    printf("Second element is %d.\n", array[1] );
    printf("Third element is %d.\n", array[2] );

    return 0;
}
