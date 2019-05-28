#include <stdio.h>
int main(void)

{
    int age = 0;
    int pounds = 0;

    scanf("%d %d", &age, &pounds);

    int agecomp1 = (10>age);
    int agecomp2 = (age>=10 && age<=59) || (age>60);
    int poundcom = pounds>=20;
    int poundcom2 = pounds<20;
    int agepound1 = agecomp2 && poundcom;
    int agepound2 = agecomp2 && poundcom2;

    if (age==60){
        printf("0\n");}

    if (agecomp1){
        printf("5\n");}

    if (agepound1){
        printf("40\n");}


    if (agepound2){
        printf("30\n");}

}


/* #include <stdio.h>

int main(){
    int is60, isLessThan10, luggageMoreThan20;
	int age = 0;
	int luggageWeight = 0;

	scanf("%d %d", &age, &luggageWeight);

	is60 = age == 60;
	isLessThan10 = age < 10;
	luggageMoreThan20 = luggageWeight > 20;

	if(is60){
		printf("0");
	} else {
		if(isLessThan10){
			printf("5");
		} else {
			if(luggageMoreThan20){
				printf("40");
			} else {
				printf("30");
			}
		}
	}
	return 0;
} */
