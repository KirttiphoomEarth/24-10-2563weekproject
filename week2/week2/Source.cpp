#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char x[100];
	int Alphabet = 0, Vowel = 0, Number = 0, World = 1;
	scanf("%[^\n]s", &x);
	for (int i = 0; x[i] != '\0'; i++)
	{
		if (x[i] == 'A' or x[i] == 'a' or x[i] == 'I' or x[i] == 'i' or x[i] == 'O' or x[i] == 'o' or x[i] == 'U' or x[i] == 'u' or x[i] == 'E' or x[i] == 'e')
		{
			Vowel++;
		}

		if (x[i] >= 65 and x[i] <= 90)
		{
			Alphabet++;
		}
		if (x[i] >= 97 and x[i] <= 122)
		{
			Alphabet++;
		}
		if (x[i] >= 48 and x[i] <= 57)
		{
			Number++;
		}
		if (x[i] == ' ')
		{
			World++;
		}

	}
	Alphabet -= Vowel;
	printf("Alphabet = %d\n", Alphabet);
	printf("Vowel = %d\n", Vowel);
	printf("Number = %d\n", Number);
	printf("World = %d\n", World);
	return 0;
}