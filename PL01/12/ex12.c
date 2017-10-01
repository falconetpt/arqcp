#include <stdio.h>

int main(void) {
	char str[] = "the number Must be sAVED";
	printf("%s\n", str);
	capitalize_word(str);
	printf("%s\n", str);
	return 0;
}
