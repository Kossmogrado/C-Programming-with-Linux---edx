#include <stdio.h>
int main (void)

{
    int sunny = 1;
    int vacation = 1;
    int sunAndVac = sunny && vacation;  /* compara as var�veis e se e somente se ambas forem n�vel l�gico alto ent�o assume n�vel l�gico alto tamb�m. */

                                        /* n�veis l�gicos: 1 && 1 = 1 : 1 && 0 = 0 : 0 && 1 = 0 : 0 && 0 = 0 */

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
