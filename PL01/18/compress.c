
#define FIRST_DIGIT 1000000000
#define TRANSISTION 10000

void compress(short *numbers, unsigned int *vec, int sizeShort) {
	int i;
	int control_digit =0;
	
	for(i = 0; i < size; i+=2) {
		int first = *(vec+i);
		int sec = *(vec+i+1);
		
		
		*(vec+(i/2)) = control_digit + *(vec + i) * TRANSISTION + *(vec + i + 1);
	}
}
