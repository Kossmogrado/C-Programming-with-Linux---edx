#include <stdio.h>

int main(void)
{
    int i;

    printf("+");
    for (i=0;i<23;i++)
        printf("-");
    printf("+\n");

    for (i=0; i<3; i++)
    {  /* No exerc�cio era solicitado pra adicionar essas chaves na posi��o correta */

        printf("| o | X | o | X | o | X |");
        printf("\n");
        printf("| X | o | X | o | X | o |");
        printf("\n");
    }

    printf("+");
    for (i=0;i<23;i++)
        printf("-");
    printf("+");

    return(0);
}
