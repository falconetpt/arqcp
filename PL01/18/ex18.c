#include "compress.h"
#include "print_array.h"

int main(void) {
	short numbers = {1,2,3,4};
	int n = sizeof(numbers) / sizeof(int);
	unsigned int compressed[n/2];
	compress(numbers, compressed, n);
	printf("%d\n", *(compressed+0));
}
