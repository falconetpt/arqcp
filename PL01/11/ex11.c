#include <stdio.h>
#include "palindrome.h"

int main(void) {
	char str[] = "Never odd or,even.";
	printf("%s : %d\n", str, palindrome(str));
	char str2[] = "ricardo";
	printf("%s : %d\n", str2, palindrome(str2));
	return 0;
}
