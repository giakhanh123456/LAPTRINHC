#include <stdio.h>
#include <math.h>

int main() {
	int a = 50, b = 20, c = 30;
	
	int A =  pow(a, 3) + pow(b, 2) + 2 * c + sqrt(a + b - c);
	
	printf("A = %d", A);
}
