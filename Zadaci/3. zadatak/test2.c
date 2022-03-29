#include <stdio.h>
#include <stdlib.h>

// je li broj paran bez koristenja modulo operatora

void main() {
	int broj = 544546567;

	if (broj & 1 == 0)
		printf("broj %d je paran", broj);
	else
		printf("broj %d je neparan", broj);
}