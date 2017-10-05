#include <stdio.h>
#include "find_word.h"

int main(void) {
	char *str = "12a34512a412a6";
	char *word = "12a";
	printf("%s\n", find_word(str, word, (str)));
	printf("%s\n", find_word(str, word, (str+2)));
	printf("%s\n", find_word(str, word, (str+8)));
	return 0;
}
