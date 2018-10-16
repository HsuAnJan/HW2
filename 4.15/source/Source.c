#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int i,rate ;
	float total;
	printf("The investment is :$");
	scanf_s("%f", &total);
	printf("You want save how years:");
	scanf_s("%d", &rate);
	for (i = 1; i <= rate; i++) {
		total = total * (1.1 + (i - 1)*0.005);
		printf("The  %2d year interest rate have %8.2f\n",i, total);
 }
	
	system("pause");
	return 0;
}