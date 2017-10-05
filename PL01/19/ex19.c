#include <stdio.h>
#include "find_word.h"

int main(void) {
	char *str = "12345124126";
	char *word = "12";
	printf("%s\n", find_word(str, word, (str)));
	printf("%s\n", find_word(str, word, (str+2)));
	printf("%s\n", find_word(str, word, (str+8)));
	return 0;
}
