
#include <stdio.h>

// integer exponentiation using bit shifts
int power(int x, int y) {
	int result = 1;

	while(y > 1) {
	    if(y & 1) {
	        result = result * x;
	    }
	    y >>= 1;
		x = x * x;
	}
	if(y > 0) {
	    result = result * x;
	}

	return result;
}

int main() {
	printf("Exponentiation of 2^4: %i\n", power(2, 4));
	printf("Exponentiation of 3^5: %i\n", power(3, 5));
	printf("Exponentiation of 6^2: %i\n", power(6, 2));
	return 0;
}
