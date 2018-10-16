#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int days;
	float loan, rate, i;
	while (1)
	{
		printf("Enter loan principal(-1 to end): ");
		scanf_s("%f", &loan);
		if (loan == -1) {
			exit(0);
		}
		printf("Enter interest rate:");
		scanf_s("%f", &rate);
		printf("Enter ter of the loan in days: ");
		scanf_s("%d", &days);
		i = loan* (rate )*days / 365;
		printf("The interest charge is $");
		printf("%.2f\n\n", i);
	}
	system("pause");
	return 0;
}