#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char x[100];
	int y, sum = 0;
	scanf("%s", &x);
	for (int i = 0; x[i] != '\0'; i++)
	{
		if (x[i] == 'I')
		{
			printf("1");
		}
		else if (x[i] == 'R')
		{
			printf("2");
		}
		else if (x[i] == 'E')
		{
			printf("3");
		}
		else if (x[i] == 'A')
		{
			printf("4");
		}
		else if (x[i] == 'S')
		{
			printf("5");
		}
		else if (x[i] == 'B')
		{
			printf("6");
		}
		else if (x[i] == 'T')
		{
			printf("7");
		}
		else if (x[i] == 'G')
		{
			printf("9");
		}
		else if (x[i] == 'O')
		{
			printf("0");
		}
		else printf("%c", x[i]);

	}

	return 0;
}