#include "compress.h"

int main(void) {
	short numbers[] = {1,7,3,4, 8, 12};
	int n = sizeof(numbers) / sizeof(short);
	unsigned int compressed[n/2];
	
	printf("Compressed to:\n");
	compress(numbers, compressed, n);
	int i;
	for(i =0; i < n/2; i++) {
		printf("%d\n", *(compressed+i));
	}
	
	printf("Decompressed:\n");
	decompress(compressed, n/2);
	return 0;
}
