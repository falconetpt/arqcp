#include <stdio.h>
#include "replace_lower_case.h"

int main(void) {
	char str[] = "aRa dsAsr AweerWeWWEeW";
	printf("%s\n", str);
	replace_lower_Case(str);
	printf("%s\n", str);
	return 0;
}
