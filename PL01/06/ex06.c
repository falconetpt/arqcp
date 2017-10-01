#include <stdio.h>
#include "power.h"

int main(void) {
	int x = 2;
	int y = 10;
	power_ref(&x, y);
	
	printf("%d\n", x);
	
	
	return 0;
}
