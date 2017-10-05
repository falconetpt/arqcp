#include "find_word.h"

void fill_all_words(char *str, char* word, char** addrs) {
	int filled = 0;
	int i =0;
	
	while(*(str+i)) {
		char *tmp = find_word(str, word, *(str+i));
		
		if(tmp!=NULL) {
			*(addrs+filled) = tmp;
		} else {
			return;
		}
		i++;
	}
}
