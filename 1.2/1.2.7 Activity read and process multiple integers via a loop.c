/* Here is your final activity of this unit. Use it to apply everything you have learned!
David is fighting Goliath (again...) and it turns out that Goliath is much bigger than David thought.
Fortunately David is not short of resources and he plans to send robots to fight the giant.
But before launching the assault, David must evaluate the performance of these robots to ensure success. This is where you come in.
You are given some data on David's robots and need to compute and output a corresponding power score.

Here is how: You should write a program that takes several lines of input from a user (see the below example).
The first line of the input indicates the number of robots to be deployed.
Each subsequent line shows the height, the weight, the power of the engines and a resistance rating (1,2, or 3) of each of of these robots.
Your program should use this information to calculate the total power of these robots.
The power of all robots is the sum of the power of each robot, where the power of an individual robot is calculated via:*/


#include <stdio.h>

int main(void)

{
    int nrobots = 0;
    int totalp = 0;
    int enginePower = 0;
    int resistance = 0;
    int weight = 0;
    int height = 0;
    int i = 0;
    int sum = 0;

    /* printf("Enter the number of robots and after their features:\n"); */
    scanf("%d", &nrobots);
    for (i=0;i<nrobots;i++)
    {
        scanf("%d%d%d%d", &height, &weight, &enginePower, &resistance);
        totalp = (enginePower+resistance)*(weight-height);
        sum = totalp + sum;
    }

    /*printf("Total power is %d!\n", totalp);*/
    printf("%d", sum);

    return 0;
}
