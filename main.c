#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#define _CRT_SECURE_NO_DEPRECATE

int main() {
	setlocale(LC_ALL, "rus");
	int A, B, C;
	printf("Введите вес контейнеров A B и C ");
	scanf(" %d %d %d", &A, &B, &C);
	

	if ((A % 10 == 0 || A % 10 == 5 ) && (B % 10 == 0 || B % 10 == 5 ) && (C % 10 == 0 || C % 10 == 5 )
		)
	{
		printf("Погрузку Разрещаю");
	}
	else {
		printf("Погрузку Запрещаю");
	}
}