/*
*������ ��������� ������� �������������� ���������� �� ��������� �����
*/
#define _CRT_SECURE_NO_WARNINGS //���������� � ����� VS2019 ����� ������������ scanf
#include <stdio.h>
#include <inttypes.h> //��������� �������� ������� ������ ���������� ���� int, �������� int8_t

int main(void) {
	int start, step, stop;
	printf("Input value \"start\", \"step\" and \"stop\" "
		"for make arifmetic progressiya:\n"); //������ \" ���������� ������� � ����� �
	scanf("%d %d %d", &start, &step, &stop);

	int8_t znak = (step > 0 ? 1 : -1); //��� ���������� znak ���� int8_t ���������� 8 ���
	for (int x = start; znak * x <= znak * stop; x += step) {
		printf("x = %d\n", x);
	}

	system("pause");
	return 0;
}