#define ARRAY_SIZE 1000
#include "Func.h "
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int Array[ARRAY_SIZE];
void RandomizeArray() { 
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		Array[i] = rand() % 36 + (-20); // генератор рандомных чисел от 15 до 15
		printf("%5d", Array[i]);
	}
	exit; // exit
}
int CountZeroNumber() { // реализаци€ ф-ции CountZeroNumber()
	int zeroNumberCount = 0, Maximum = 0;
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		if (Array[i] == 0) zeroNumberCount += 1;
		else {
			if (zeroNumberCount > Maximum) Maximum = zeroNumberCount;
			zeroNumberCount = 0;
		}
	}
	return Maximum;
}
