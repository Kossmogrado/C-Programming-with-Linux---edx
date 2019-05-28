#include <stdio.h>
int main (void)

{
    int sunny = 1;
    int vacation = 1;
    int sunAndVac = sunny && vacation;  /* compara as varáveis e se e somente se ambas forem nível lógico alto então assume nível lógico alto também. */

                                        /* níveis lógicos: 1 && 1 = 1 : 1 && 0 = 0 : 0 && 1 = 0 : 0 && 0 = 0 */

    if (sunAndVac)
    {
        printf("Yeah!\n");
    }
    else
    {
        printf("NOOOOOO!!!\n");
    }

    return 0;
}
