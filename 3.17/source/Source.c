#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int number=0;
	float now;
	float in;
	float out;
	float limit;
	while (number != -1) 
	{
		printf ("Enter account number(-1 to end):");
		scanf_s("%d", &number);
		if (number == -1)
		{
			break;
		}
		printf("Enter beginning balance:");
		scanf_s("%f", &now);
		printf("Enter total charges:");
		scanf_s("%f", &in);
		printf("Enter total credits:");
		scanf_s("%f", &out);
		printf("Enter credit limit:");
		scanf_s("%f", &limit);
		now = now + in - out;
		if (now > limit)
		{
			printf("Account:      %d\n", number);
			printf("Credit limit: %.2f\n", limit);
			printf("Balance:      %.2f\n", now);
			printf("Credit Limit Exceeded.");
			printf("\n");
		}
		printf("\n");
	}
	system("pause");
	return 0;
	
}