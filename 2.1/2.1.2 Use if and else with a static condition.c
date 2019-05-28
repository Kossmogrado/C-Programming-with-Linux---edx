#include <stdio.h>

int main(void)

{
    /* IF it is true do this
       IF it is not true, then do not this
       FALSE 0 0.0
       TRUE all values that are non-zero (positive or negative) */

       int weatherIsGood = 0; /* define and declare condition */
       if (weatherIsGood)      /* IF conditional loop */
       {
           printf("The weather is good!\n");
       }
       else                     /* ELSE loop */
       {
           printf("The weather is bad!\n");
       }
    return 0;
}
