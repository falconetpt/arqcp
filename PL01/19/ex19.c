#include <stdio.h>
#include "find_word.h"

int main(void) {
	char *str = "12345124";
	char *word = "12";
	printf("%s\n", find_word(str, word, (str)));
	printf("%s\n", find_word(str, word, (str+2)));
	return 0;
}
