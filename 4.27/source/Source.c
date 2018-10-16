#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int a, b, c;
	printf("The long side is:");
	scanf_s("%d", &a);
	if (a >= 500) {
		printf("STOP! Out of range!!!\n");
		system("pause");
		return 0;
	}
	printf("The short side is:");
	scanf_s("%d", &b);
	printf("The anoter short side is:");
	scanf_s("%d", &c);
	if (a*a == b * b + c * c) {
		printf("This is right triangle!\n");
	}
	else
		printf("This isn't right triangle...\n");
	system("pause");
	return 0;
}