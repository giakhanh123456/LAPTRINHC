#include <stdio.h>
#include <math.h>

int main() {
	int a = 3, b = 4, c = 2;
	
	float A =  (sqrt(pow(a, 2) + pow(b, 2))) / (c + 1) + (a * b) / c - sqrt(abs(a - b) + pow(c, 3));
	
	printf("A = %.2f", A);
}
