#include<stdio.h>
#include<stdlib.h>

int aa_1()
{
	char s = '*';
	char s2 = ' ';
	int x, y,i=1;

	printf("(1)\n");
	for (y = 1; y <= 10; y++)
	{
		for (x = 1; x <= i; x++)
		{
			printf("%c", s);
		}
		printf("\n");
	}
}