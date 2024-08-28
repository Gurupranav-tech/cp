#include <stdio.h>

int main(void) {
	int n = 0, p = 0;
	scanf("%i", &n);

	while (n--) {
		int a, b, c;
		scanf("%i %i %i", &a, &b, &c);
		if (a + b + c >= 2) p++;
	}

	printf("%i\n", p);
}
