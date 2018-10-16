#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf(" (A)\t\t(B)\t\t(C)\t\t(D)\n");
	int x, y, a = 1, b = 10, c = 10, d = 10;
	for (y = 1; y <= 10; y++) {
		printf(" ");
		for (x = 1; x <= a; x++) {
			printf("*");
		}
		for (x = 1; x <= 15-a; x++) {
			printf(" ");
		}
		a++;

	
	
		for (x = 1; x <= b; x++) {
			printf("*");
		}
		for (x = 1; x <= 17-b; x++) {
			printf(" ");
		}
		b--;


		for (x = 1; x <= (10 - c); x++) {
			printf(" ");
		}
		for (x = 1; x <= c; x++) {
			printf("*");
		}
		c--;
		printf("\t");

		for (x = 1; x <= (d - 1); x++) {
			printf(" ");
		}
		for (x = 1; x <= 11 - d; x++) {
			printf("*");
		}
		d--;
		printf("\n");
	}


	printf("\n");
	system("pause");
	return 0;
}