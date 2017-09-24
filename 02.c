#include <stdio.h>
#include <string.h>
#define ZERO_ASCII 48

int string_to_it(char *str);

int main(void) {
	char *str = "12345";
	printf("%d\n", string_to_it(str));
}

int string_to_it(char *str) {
	int i;
	int str_length = strlen(str);
	int result = 0;
	
	for(i = 0; i < str_length; i++) {
		result = result * 10 + str[i] - ZERO_ASCII;
	}
	return result;
}
