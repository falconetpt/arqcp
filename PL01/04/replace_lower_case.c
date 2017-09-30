#include <string.h>
#include <malloc.h>

#define MINIMUM_LOWER_CASE = 97
#define MAXIMUM_LOWER_CASE = 122
#define CONVERSION 32;


void replace_lower_Case(char *str) {
	int length = strlen(str);
	int i;
	char *tmp_char = malloc(sizeof(char) * length + 1);
	
	for(i = 0; i < length; i++) {
		if(*(str+i) >= MINIMUM_LOWER_CASE && *(str+i) <= MAXIMUM_LOWER_CASE)
			*(tmp_char + i) =  *(str+i) - CONVERSION;
		} else {
			*(tmp_char + i) =  *(str+i);
		}
	}
	
	*str = *tmpchar;
}
