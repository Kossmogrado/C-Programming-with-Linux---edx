#include <stdio.h>

int main (void)

{
    int ione = 0;
    int itwo = 0;
    double done = 0;
    printf("Enter two integer: \n");
    scanf("%d %d", &ione, &itwo);
    done = (double) ione;
    printf("done/itwo equal %f.\n", done/itwo);

    return 0;
}
