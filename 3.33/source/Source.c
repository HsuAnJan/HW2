#include<stdio.h>
#include<stdlib.h>

int i, j;
int main(void) {
	for (i = 1; i <= 3; i++) {
		for (j = 1; j <= 12; j++) {
			if(i==1 || i==3 || j==1 || j==12)
			{
				printf("+");
			}
			else { printf(" "); }
		}
		printf("\n");
	}
	system("pause");
	return 0;
}