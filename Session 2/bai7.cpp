#include <stdio.h>

int main() {
	int n = 12345;
	
	int a = n / 10000,
	    b = n / 1000 % 10,
	    c = n / 100 % 10,
	    d = n / 10 % 10,
	    e = n % 10;
	    
	int S = a + b + c + d + e;
	
	printf ("S = %d", S);
	
	return 0;
}
