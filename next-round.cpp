#include <stdio.h>

int main(void) {
	int n, k;
	scanf("%i %i", &n, &k);

	int ps[100] = {0};
	for (int i = 0; i < n; i++) scanf("%i", &ps[i]);

	int won = 0;
	for (int i = n; i >= 0; i--) {
		if (ps[i] >= ps[k-1] && ps[i] > 0) won++;
	}

	printf("%i\n", won);
}
