#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int hours;
	float mon,sal;
	while (1) {
		printf("Enter # of hours worked(-1 to end): ");
		scanf_s("%d", &hours);
		if (hours == -1) {
			exit(0);
		}
		printf("Enter hourly rate of the worker($00.00):");
		scanf_s("%f", &mon);
		if (hours <= 40) {
			sal = mon * hours;
		}
		else {
			sal = mon *40 + (hours - 40)*1.5*mon;
		}

		printf("Salay is $%f\n\n", sal);
	}
	system("pause");
	return 0;
}