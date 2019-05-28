/* Create a program that displays on the screen a square of n x n stars, with the integer n given as an input. */

#include <stdio.h>

int main (void)
{
    int nbSquare = 0;
    char star = '*';
    int i,j = 0;

    scanf("%d", &nbSquare);

    for (i=0; i<nbSquare; i++)
    {
        for (j=0; j<nbSquare; j++)
        {
            printf("%c", star);
        }

        printf("\n");
    }

    return 0;

}


/* #include <stdio.h>
int main() {
    int i, j;
    int n = 0;
    scanf("%d", &n);

    for(i = 0 ; i < n ; i++){
        for(j = 0 ; j < n ; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
} */
