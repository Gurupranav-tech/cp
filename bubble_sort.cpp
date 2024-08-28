#include <bits/stdc++.h>
#include "utils.h"

int main() {
	size_t size = 100;
	int* array = RandomArray(size, 0, size);
	PrintArray(array, size);

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (array[j] > array[j+1]) Swap(array[j], array[j+1]);
		}
	}

	PrintArray(array, size);
	delete[] array;
}
