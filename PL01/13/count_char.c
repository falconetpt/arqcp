#include <string.h>

void char_index(char str[], char c, int *vec) {
	int length = strlen(str);
	int i;
	int size=0;
	
	for(i = 0; i < length; i++) {
		if(*(str+i) == c) {
			*(vec+size) = i; 
			size++;
		}
	}
	
	//clear next lines with no values
	for(i = size; i < length; i++) {
		*(vec+i) = -1;
	}
}
