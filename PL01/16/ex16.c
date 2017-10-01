#include <stdio.h>
#include "where_exists.h"

int main(void) {
	char *str1 = "012aabds";
	char *str2 = "z";
	
	printf("%s\n", where_exists(str2, str1) ? where_exists(str2, str1) : "");
	return 0;
}
