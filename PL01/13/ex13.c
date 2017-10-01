#include <stdio.h>
#include <string.h>
#include "count_char.h"

int main(void) {
	char str[] = "ricardo gomes";
	char c = 'o';
	int str_size = strlen(str); 
	int index[str_size];
	
	char_index(str, c, index);
	
	//print array
	int i;
	for(i=0; i < str_size; i++) {
		if(*(index+i) != -1) {
			printf("%d\n", *(index+i));
		}
	}
	
	return 0;
}
