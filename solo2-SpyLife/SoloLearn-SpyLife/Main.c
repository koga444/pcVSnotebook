/*SoloLearn - SpyLife
* ��������� �������������� �������� ���������.
* ������������� ��������� �������� ��� ����� ���������� ����� �������
* � ������������� �������� �������� � ����.
* � ���������� ���������� ��������� ������ ��������� ������ ����� � �������,
* � ����� ���� � ���������� �������, � �� ����� �������.
*/

#include <stdio.h>
#include <string.h>

void deshifr(char* str);
void invers(char* str);

int main() {
	char str[256];
	fgets(str, 256, stdin); //��������� �������� ������ (�� ����� 255 ��������, 256�� - ������ ����� ������) ��� ������� Enter

	deshifr(str);
	invers(str);

	puts(str); //������� �� ����� ������, Enter ����������� �������������
	system("pause");
	return 0;
}

//������� ������� ������ �������
void deshifr(char* str)
{
	for (int i = 0; i < strlen(str); i++)
	{
		//������� ���� �������� �� ������� ASCII � ����������� � ���������� ��������
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

//������� �������������� ������
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
