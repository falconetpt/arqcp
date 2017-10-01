#include <string.h>

void char_index(char str[], char c, int *vec) {
	int length = strlen(str);
	int i;
	int size;
	
	for(i = 0; i < length; i++) {
		if(*(str+i) == c) {
			*(vec+size) = i; 
			size++;
		}
	}
	
	for(i = size + 1; i < length; i++) {
		*(vec+i) = -1;
	}
}
