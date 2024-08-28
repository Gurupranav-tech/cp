#include <stdio.h>
#include <ctype.h>

int main(void) {
	char data[10*10*10];
	scanf("%s", data);
	data[0] = toupper(data[0]);
	printf("%s\n", data);
}
