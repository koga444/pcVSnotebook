#define _CRT_SECURE_NO_WARNINGS //без этого не работает вывод через scanf
#include <stdio.h>

int main(void) {
	printf("Hello! My name is Bot Jhon. What is your name?\n");
	char name[20]; //массив символов - строка
	scanf("%s", name);
	printf("Nice to meet you, %s! How old is you?\n", name);
	int age;
	scanf("%d", &age); //символ & обязателен во всех случаях кроме символа %s и строки %c
	printf("WOW! I though that you are younger. And that your age is %d\n", age - 3);
	system("pause"); //чтобы после выполнения программы окно сразу не закрывалось, нужно только при запуске из .exe
	return 0;
}