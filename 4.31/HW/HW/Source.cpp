#include<stdio.h>
#include<stdlib.h>
int main(void){
	int x,y,a=5,b=1,c=7,d=2;
	printf("\n");
	for (y = 1; y <= 5; y++) {
		for (x = 1; x <= a; x++) {
			printf(" ");
		}
		for (x = 1; x <= b; x++) {
			printf("*");
		}
		a = a - 1;
		b = b + 2;
		printf("\n");
	}
	for (y = 1; y <= 4; y++) {
		for (x = 1; x <= d; x++) {
			printf(" ");
		}
		for (x = 1; x <= c; x++) {
			printf("*");
		}
		d = d + 1;
		c = c - 2;
		printf("\n");
	}



	system("pause");
	return 0;
	}