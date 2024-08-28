#include <stdio.h>
#include <string.h>

int main(void) {
	int n = 0;
	scanf("%i", &n);

	while (n--) {
		char word[100] = {0};
		scanf("%s", word);

		size_t size = strlen(word);
		if (size <= 10) {
			printf("%s\n", word);
		} else {
			char newWord[100] = {0};
			sprintf(newWord, "%c%lu%c", word[0], size-2, word[size-1]);
			printf("%s\n", newWord);
		}
	}
}
