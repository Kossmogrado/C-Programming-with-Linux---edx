# include <stdio.h>

int main (void)

{
    int howMany = 0;
    int sum = 0;
    int numberRead = 0;
    int i = 0;
    printf("How many itens you want to read?\n");
    scanf("%d", &howMany);
    for (i=0;i<howMany;i++)
    {
        scanf("%d", &numberRead);
        printf("I have read %d from input terminal.\n", numberRead);
        sum = sum + numberRead;
        printf("The sum of inputs is %d\n", sum);
    }

    return (0);
}
