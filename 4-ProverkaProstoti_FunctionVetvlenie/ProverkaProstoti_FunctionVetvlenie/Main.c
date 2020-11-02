/*
*Эта программа определяет является ли число простым или сложным.
*Также она показывает использование функций, ветвлений if, операторов break и return.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	
#include <stdbool.h>

bool resultatProverki(int x) {
	for (int d = 2; d * d <= x; d++)
		if (x % d == 0)
			return false;
	return true;
}

int main(void) {
	printf("Vvedite polozhitelnoe chislo\n");
	int x;
	scanf("%d", &x);
	if (resultatProverki(x))
		printf("Chislo %d - prostoe\n", x);
	else
		printf("Chislo %d - slozhnoe\n", x);
	system("pause");
	return 0;
}