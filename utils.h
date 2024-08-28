#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void PrintArray(int* array, size_t size) {
	printf("[ ");
	for (int i = 0; i < size; i++) {
		printf("%i ", array[i]);
	}
	printf("]\n");
}

void Swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int* RandomArray(size_t S, int min = 0, int max = 10) {
	srand(time(0));
	int* array = new int[S];

	for (int i = 0; i < S; i++) {
		array[i] = min + (rand() % (max + 1));
	}

	return array;
}
