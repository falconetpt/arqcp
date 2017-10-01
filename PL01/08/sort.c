void array_sort(int *vec, int n) {
	int i;
	int j;
	int tmp;
	
	for(i = 0; i < n; i++) {
		for(j = i+1; j < n; j++) {
			if(*(vec+i) > *(vec+j)) {
				tmp = *(vec+i);
				*(vec+i) = *(vec+j);
				*(vec+j) = tmp; 
			}
		}
	}
}
