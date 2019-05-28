#include <stdio.h>

int main(void)

{
    int ages[10];
    int maxAge = 0;
    int i = 0;

    for (i = 0; i<10; i++)
    {
        scanf("%d", &ages[i]);
        if(maxAge < ages[i])
        {
            maxAge = ages[i];
        }
    }

    printf("The maximum age is %d\n", maxAge);
}
