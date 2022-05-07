#include <stdio.h>
#include <stdlib.h>

/*
Author: @new92 
Made for small businesses
*/
int main() {
	int num;
	int employees;
	int salary;
	int hours;
	int SickDays;
	int MoneyPerHour;
	int i;
	char name;
	char option;
	char NAMES[70][20] = {name};
	char SALARIES[70][20] = {salary};
	SickDays = 0;
	printf("Please enter the number of employees of your bussiness: ");
	scanf("%d",&employees);
	printf("How much do you pay your employees per hour ? ");
	scanf("%d",&MoneyPerHour);
	for (i = 1; i <= employees; i++){
		printf("\nPlease enter the last name of the %d employee: ",i);
		gets(name);
		scanf("%s",&name);
		printf("\nPlease enter the monthly hours of the %d employee: ",i);
		scanf("%d",&hours);
		printf("Has the employee taken any sick days[Y/N] ? ");
		scanf("%s",&option);
		while(option != "Y" && option != "N") {
			printf("Invalid option ! Please enter again: ");
			scanf("%s",&option);
		}
		if(option == "Y") {
			printf("How many ? ");
			scanf("%d",&SickDays);
		}
		else {
			printf("Okay !");
		}
	}
	salary = (hours*MoneyPerHour)-SickDays;
	printf("The salary which the employee deserves is: %d",salary);
	return 0;
}
