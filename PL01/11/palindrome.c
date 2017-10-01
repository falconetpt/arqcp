#include <string.h>
#include "replace_lower_case.h"

int palindrome(char str[]) {
	replace_lower_Case(str);
	int initial_index = 0;
	int final_index = strlen(str) -1;
	
	while(initial_index < final_index) {
		if(*(str+initial_index) == ' ') {
			initial_index++;
		}
		
		if(*(str+final_index) == ' ') {
			final_index--;
		}
		
		if(*(str+initial_index) != *(str+final_index)) {
			return 0;
		}
		
		initial_index++;
		final_index--;
	}
	return 1;
}
