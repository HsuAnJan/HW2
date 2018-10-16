#include<stdio.h>
#include<stdlib.h>
int main(void) {
	for (;;) {
		int a, t, mon, sal;
		printf("The pay code:");
		scanf_s("%d", &a);

		if (a == 1) {
			printf("Your boss want give you $");
			scanf_s("%d", &sal);
			printf("you this week salary have $%d\n", sal);
		}
		else if (a == 2) {
			printf("This weeek you work(time):");
			scanf_s("%d", &t);
			printf("hourly hour:");
			scanf_s("%d", &mon);
			if (t <= 40) {
				sal = t * mon;
			}
			else {
				sal = mon * 40 + (t - 40)*1.5*mon;
			}
			printf("Your salary have %d\n", sal);
		}
		else if (a == 3) {
			printf("You sell to clent have $");
			scanf_s("%d", &mon);
			sal = 250 + 0.057*mon;
			printf("You have $%d\n", sal);
		}

		else if (a == 4) {
			printf("You complete task have ");
			scanf_s("%d", &t);
			printf("each one deserve $");
			scanf_s("%d", &mon);
			sal = t * mon;
			printf("Your salary have $%d\n", sal);
		}
		else if (a == -1) {
			exit(0);
		}
		else {
			printf("wrong code...\n");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}