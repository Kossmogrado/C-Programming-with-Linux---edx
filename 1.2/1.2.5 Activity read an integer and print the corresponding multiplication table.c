#include <stdio.h>

int main(void)

{
    int a=0;
    int b=0;
    scanf("%d", &a);
    for (b=0;b<11;b++)
    {
        printf("%dx%d = %d\n", b,a,b*a);
    }

    return (0);
}
