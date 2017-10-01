int sum_even_elements(int *vec, int n) {
	int total = 0;
	int i;
	
	for(i = 0; i < n; i++) {
		if(*(vec+i) % 2 == 0) {
			total += *(vec+i);
		}
	}
	
	return total;
}
