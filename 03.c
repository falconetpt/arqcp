#include <stdio.h>
#include <string.h>
#include <malloc.h>
#define ZERO_ASCII 48

int string_to_int(char *str);

int main(void) {
	char* s1 = malloc(sizeof(char) *30);
	char* s2 = malloc(sizeof(char) *30);
	printf("Enter a number: \n");
	scanf("%s", s1);
	printf("Enter a number: \n");
	scanf("%s", s2);
	int num1 = string_to_int(s1);
	int num2 = string_to_int(s2);
	printf("num1: %d num2: %d -> Average: %.2f\n", num1, num2, (num1 + num2)/2.0);
	return 0;
}

int string_to_int(char *str) {
	int i;
	int str_length = strlen(str);
	int result = 0;
	
	for(i = 0; i < str_length; i++) {
		result = result * 10 + str[i] - ZERO_ASCII;
	}
	return result;
}
