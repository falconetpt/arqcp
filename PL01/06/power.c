
void power_ref(int *x, int y) {
	if(y == 0) {
		*x = 1;
	}
	
	int tmp = *x;
	int i;
	
	for(i = 1; i < y; i++) {
		*x *= tmp;
	}
}
