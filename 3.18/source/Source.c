#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	float sales=0;
	while (sales != -1)
	{
		printf("Enter sales in dollars (-1 to end ): ");
		scanf_s("%f", &sales);
		if (sales == -1)
			break;
		sales = 200 + sales * 0.09;
		printf("Salary is: $%.2f\n", sales);
	}
	system("pause");
	return 0;
}