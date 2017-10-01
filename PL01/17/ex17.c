#include "swap.h"
#include "print_array.h"

int main(void) {
	int vec1[] = {1,2,3};
	int vec2[] = {4,5,6};
	int n =3;
	
	printf("Vec1\n");
	print_array(vec1, n);
	
	printf("Vec2\n");
	print_array(vec2, n);
	
	swap(vec1, vec2, n);
	
	printf("Swapped Vec1\n");
	print_array(vec1, n);
	
	printf("Swapped Vec2\n");
	print_array(vec2, n);
	
	return 0;
}
