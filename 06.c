#include <stdio.h>
#include <string.h>

#define ZERO_ASCII 48

int integer_part(char *str);
int fraction_part(char *str);

int main(void) {
	char *str = "123.456";
	int integer = integer_part(str);
	int decimal = fraction_part(str);
	printf("%s Integer: %d Decimal: %d\n", str, integer, decimal);
	return 0;
}

int integer_part(char *str) {
	int i;
	int result = 0;
	int str_length = strlen(str);
	
	for(i = 0; i < str_length; i++) {
		if(str[i] == '.') {
			return result;
		}
		result = result * 10 + str[i] - ZERO_ASCII;
	}
	return result;
}

int fraction_part(char *str) {
	int i;
	int flag = 0;
	int result = 0;
	int str_length = strlen(str);
	
	for(i = 0; i < str_length; i++) {
		if(flag == 1) {
			result = result * 10 + str[i] - ZERO_ASCII;
		}
		
		if(str[i] == '.') {
			flag = 1;
		}
	}
	return result;
}
