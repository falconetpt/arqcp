void swap(int *vec1, int *vec2, int size) {
	int i;
	int tmp;
	
	for(i = 0; i < size; i++) {
		tmp = *(vec1+i);
		*(vec1+i) = *(vec2+i);
		*(vec2+i) = tmp; 
	}
}
