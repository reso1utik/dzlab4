#include <stdio.h>
#include <locale.h>
#define _CRT_SECURE_NO_DEPRECATE

int main() {
	setlocale(LC_ALL, "rus");
	int A, B, C;
	A = 15;
	B = 25;
	C = 30;

	if ((A % 5 == 0 || A % 5 == 1 || A % 5 == 2 || A % 5 == 3 || A % 5 == 4)
		&& (B % 5 == 0 || B % 5 == 1 || B % 5 == 2 || B % 5 == 3 || B % 5 == 4)
		&& (C % 5 == 0 || C % 5 == 1 || C % 5 == 2 || C % 5 == 3 || C % 5 == 4)
		)
	{
		printf("Погрузку Разрещаю");
	}
	else {
		printf("Погрузку Запрещаю");
	}
}