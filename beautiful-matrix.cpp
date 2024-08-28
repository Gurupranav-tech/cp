#include <stdio.h>
#include <math.h>

int main(void) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			int number;
			scanf("%i", &number);
			if (number == 1) {
				printf("%i\n", abs(3 - i - 1) + abs(3 - j - 1));
			}
		}
	}
}
