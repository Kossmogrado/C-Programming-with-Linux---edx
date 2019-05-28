#include <stdio.h>

int main (void)

{
    double money, perbook;
    int books;

    scanf("%lf %lf", &money, &perbook);
    books = money/perbook;

    printf("%d", books);

    return 0;
}
