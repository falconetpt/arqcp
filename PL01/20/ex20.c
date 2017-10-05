#include <stdio.h>
#include "find_all.h"
#include <string.h>

int main(void) {
	char *str = "12345124126";
	char *word = "12";
	
	int n = strlen(str);
	char* arr[n];
	int i;
	
	fill_all_words(str, word, addrs);
	
	for(i = 0; i < n; i++) {
		printf("%s\n", *(arr+i));
	}
}
