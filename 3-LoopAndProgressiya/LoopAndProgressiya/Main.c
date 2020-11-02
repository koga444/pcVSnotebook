/*
*Данная программа создает арифметическую прогрессию на основании цикла
*/
#define _CRT_SECURE_NO_WARNINGS //необходимо в среде VS2019 чтобы использовать scanf
#include <stdio.h>
#include <inttypes.h> //добавляет контроль размера памяти переменных типа int, например int8_t

int main(void) {
	int start, step, stop;
	printf("Input value \"start\", \"step\" and \"stop\" "
		"for make arifmetic progressiya:\n"); //символ \" обозначает кавычку в языке С
	scanf("%d %d %d", &start, &step, &stop);

	int8_t znak = (step > 0 ? 1 : -1); //для переменной znak типа int8_t выделяется 8 бит
	for (int x = start; znak * x <= znak * stop; x += step) {
		printf("x = %d\n", x);
	}

	system("pause");
	return 0;
}