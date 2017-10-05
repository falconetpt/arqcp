#include <string.h>

int is_equal_char(char *str1, char *str2) {
	int length_str1 = strlen(str1);
	int i;
	for(i = 0; i < length_str1; i++) {
		if(*(str1+i) != *(str2 + i)) {
			return 0;
		}
	}
	
	return 1;
}

char* where_exists(char *str1, char *str2) {
	int length_str1 = strlen(str1);
	int length_str2 = strlen(str2);
	
	if(length_str1 > length_str2) {
		return NULL;
	}
	
	int i;
	
	for(i = 0; i < length_str2 - length_str1 + 1; i++) {
		if(is_equal_char(str1, (str2 + i)) == 1) {
			return (str2 + i);
		}
	}
	
	return NULL;
}

char *find_word(char *str, char *word, char *initial_addr) {
	return where_exists(word, initial_addr);
}

