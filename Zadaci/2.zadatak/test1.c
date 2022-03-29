#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//2. Nadji prijestupnu godinu

void main() {
	
	int godina = 1500;

	if (godina % 400 == 0) {
		printf(" %d godina je prijestupna", godina); // ako je dijeljiva sa 400, automatski je i dijeljiva sa sto?
	}
	else if (godina % 4 == 0) {
		printf("%d godina je prijestupna", godina);
	}
	else {
		printf("%d godina nije prijestupna", godina);
	}
}