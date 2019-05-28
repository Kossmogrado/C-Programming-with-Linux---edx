#include <stdio.h>

int main (void)

{
    int array [3];
    int readValue = 0;
    int cellNum = 0;
    int i = 0;
    for (i = 0; i<3; i++)
        {
        printf("Enter a value:\n");
        scanf("%d", &readValue);
        array[cellNum]=readValue;
        printf("Cell number %d contains %d\n", cellNum, array[cellNum]);
        cellNum = cellNum + 1;
        }

        return 0;
}
