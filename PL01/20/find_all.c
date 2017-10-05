#include "find_word.h"
#include <string.h>

void clear_arr(char** str, int n) {
	int i;
	for(i = 0; i < n; i++) {
		*(str+i) = "";
	}
}

void fill_all_words(char *str, char* word, char** addrs) {
	int filled = 0;
	int i =0;
	char *tmp = str;
	
	while(*(str+i)) {
		tmp = find_word(str, word, (tmp));
		
		if(tmp) {
			*(addrs+filled) = tmp;
			filled++;
		} else {
			return;
		}
		i++;
	}
}
