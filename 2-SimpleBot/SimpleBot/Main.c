#define _CRT_SECURE_NO_WARNINGS //��� ����� �� �������� ����� ����� scanf
#include <stdio.h>

int main(void) {
	printf("Hello! My name is Bot Jhon. What is your name?\n");
	char name[20]; //������ �������� - ������
	scanf("%s", name);
	printf("Nice to meet you, %s! How old is you?\n", name);
	int age;
	scanf("%d", &age); //������ & ���������� �� ���� ������� ����� ������� %s � ������ %c
	printf("WOW! I though that you are younger. And that your age is %d\n", age - 3);
	system("pause"); //����� ����� ���������� ��������� ���� ����� �� �����������, ����� ������ ��� ������� �� .exe
	return 0;
}