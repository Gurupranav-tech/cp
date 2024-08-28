#include <stdio.h>

int main(void) {
	int x = 0, n = 0;
	scanf("%i", &n);

	while (n--) {
		char s[3];
		scanf("%s", s);

		int plus = 0, minus = 0;
		for (int i = 0; i < 3; i++) {
			if (s[i] == '+') plus++;
			if (s[i] == '-') minus++;
		}

		if (plus == 2) x++;
		else x--;
	}

	printf("%i\n", x);
}
