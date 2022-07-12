#include "func.h "
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
int main() {
	int choice;
	srand(time(0));
	setlocale(LC_ALL, "Russian");
	for (;;) {
		printf("Эта программа предназначена для генеририи массива из 1000 чисел случайным образом и находит в нём наибольшее количество нулей, идущих подряд\n");
		puts("Продолжить?\n1 - Да\n2 - Нет");
		printf("Ваш ответ: ");
		scanf_s("%d", &choice);
		switch (choice) {
		case 1: RandomizeArray();
			puts(""); // переход на новую строку
			printf("Наибольшее количество нулей, идущих подряд = %d \n", CountZeroNumber());
			break;
		case 2: printf("Программа завершена.");
			return 0; // завершаем программу
			break;
		default: printf("Ошибка.Неверный выбор.");

			break;
		}

	}
}
