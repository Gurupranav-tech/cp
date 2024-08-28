#include <stdio.h>

int main(void) {
	long long int n, m, a, x, y, sum;
	scanf("%llu %llu %llu", &n, &m, &a);
	
	if (n % a == 0) x = n / a;
	else x = n / a + 1;
	if (m % a == 0) y = m / a;
	else y = m / a + 1;

	sum = x * y;
	printf("%llu\n", sum);
}
