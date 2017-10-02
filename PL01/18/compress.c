
void compress(short *numbers, int *vec, int size) {
	int i;
	
	for(i = 0; i < size; i+=2) {		
		int first = (int)*(numbers+i) << 8;
		int sec = (int)*(numbers+i+1);
		
		*(vec+(i/2)) = first + sec;
	}
}


void decompress(int *vec, int size) {
	int i;
	
	for(i = 0; i < size; i++) {		
		int first = *(vec+i) >> 8;
		int sec = (*(vec+i) - (first << 8));

		printf("%d %d\n", first, sec);
	
	}
}
