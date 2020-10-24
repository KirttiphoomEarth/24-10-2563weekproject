#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char x[1000];

	scanf("%s", &x);
	for (int i = 0; x[i] != '\0'; i++)
	{

		if (x[i] == 'a' or x[i] == 'A') { printf("A"); }
		if (x[i] == 'b' or x[i] == 'B') { printf("B"); }
		if (x[i] == 'c' or x[i] == 'C') { printf("C"); }
		if (x[i] == 'd' or x[i] == 'D') { printf("D"); }
		if (x[i] == 'e' or x[i] == 'E') { printf("E"); }
		if (x[i] == 'f' or x[i] == 'F') { printf("F"); }
		if (x[i] == 'g' or x[i] == 'G') { printf("G"); }
		if (x[i] == 'h' or x[i] == 'H') { printf("H"); }
		if (x[i] == 'i' or x[i] == 'I') { printf("I"); }
		if (x[i] == 'j' or x[i] == 'J') { printf("J"); }
		if (x[i] == 'k' or x[i] == 'K') { printf("K"); }
		if (x[i] == 'l' or x[i] == 'L') { printf("L"); }
		if (x[i] == 'm' or x[i] == 'M') { printf("M"); }
		if (x[i] == 'n' or x[i] == 'N') { printf("N"); }
		if (x[i] == 'o' or x[i] == 'O') { printf("O"); }
		if (x[i] == 'p' or x[i] == 'P') { printf("P"); }
		if (x[i] == 'q' or x[i] == 'Q') { printf("Q"); }
		if (x[i] == 'r' or x[i] == 'R') { printf("R"); }
		if (x[i] == 's' or x[i] == 'S') { printf("S"); }
		if (x[i] == 't' or x[i] == 'T') { printf("T"); }
		if (x[i] == 'u' or x[i] == 'U') { printf("U"); }
		if (x[i] == 'v' or x[i] == 'V') { printf("V"); }
		if (x[i] == 'w' or x[i] == 'W') { printf("W"); }
		if (x[i] == 'x' or x[i] == 'X') { printf("X"); }
		if (x[i] == 'y' or x[i] == 'Y') { printf("Y"); }
		if (x[i] == 'z' or x[i] == 'Z') { printf("Z"); }
	}

	return 0;
}