#include <stdio.h>

int main(void) {
	int t;
	scanf("%i", &t);

	while (t--) {
		int ones = 0;
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				int x;
				scanf("%i", &x);
				ones += x;
			}
		}

		if (ones == 0) {
			printf("%i\n", 0);
		} else if (ones == 4) {
			printf("%i\n", 2);
		} else if (ones == 3 || ones == 2 || ones == 1) {
			printf("%i\n", 1);
		}
	}
}
