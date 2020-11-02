/*SoloLearn - SpyLife
* Программа расшифровывает вводимые сообщения.
* Зашифрованное сообщение выглядит как фраза написанная задом наперед
* с вкрапленниями ненужных символов и цифр.
* В результате дешифрации сообщение должно содержать только буквы и пробелы,
* а также идти в правильном порядке, а не задом наперед.
*/

#include <stdio.h>
#include <string.h>

void deshifr(char* str);
void invers(char* str);

int main() {
	char str[256];
	fgets(str, 256, stdin); //считываем вводимую строку (не более 255 символов, 256ой - символ конца строки) ыдо нажатия Enter

	deshifr(str);
	invers(str);

	puts(str); //выводим на экран строку, Enter добавляется автоматически
	system("pause");
	return 0;
}

//Функция удаляет лишние символы
void deshifr(char* str)
{
	for (int i = 0; i < strlen(str); i++)
	{
		//Условие ниже основано на таблице ASCII и присвоенных в нейномерах символов
		if (((str[i] < 65) && (str[i] != 32)) || (str[i] > 122) || ((str[i] > 90) && (str[i] < 97)))
		{
			for (int j = i; str[j] != '\0'; j++)
			{
				str[j] = str[j + 1];
			}
			i--;
		}
	}
}

//Функция переворачивает строку
void invers(char* str)
{
	char tmp;
	for (int i = 0; i < (strlen(str) / 2); i++)
	{
		tmp = str[i];
		str[i] = str[strlen(str) - i - 1];
		str[strlen(str) - i - 1] = tmp;
	}
}
