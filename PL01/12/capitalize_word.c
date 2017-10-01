#include <string.h>

void capitalize_word(char str[]) {
	int length = strlen(str);
	int i;
	for(i = 0; i < length; i++) {
		if(i == 0 || !isalpha(*(str+i-1))) {
			*(str+i) = toupper(*(str+i));
		}
	}
}
