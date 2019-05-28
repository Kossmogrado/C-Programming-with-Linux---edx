#include <stdio.h>
int main(void)

{
    int sunny = 1; /* 0: cloudy, other value ( 1 for example) : sunny */
    int vacation = 1; /* 0: working, other value (1 for example) : vacation */
    int NOTsunnyANDNOTvacation = !sunny && !vacation; /*inverte os valores das variáveis e as compara com AND */
    if (NOTsunnyANDNOTvacation)
    {
        printf("It's neither sunny nor am I on vacation!\n");
    }
    else
    {
        printf("Its sunny and am I on vacation!\n");
    }

    return 0;
}
