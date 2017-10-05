#include <stdio.h>
#include "find_all.h"
#include <string.h>

int main(void) {
	char *str = "12A34512412a6";
	char *word = "12a";
	
	int n = strlen(str);
	char* arr[n];
	int i;
	
	clear_arr(arr, n);
	fill_all_words(str, word, arr);
	
	for(i = 0; i < n; i++) {
		if(strlen(*(arr+i))>0) {
			printf("%s\n", *(arr+i));
		}
		
	}
	return 0;
}
