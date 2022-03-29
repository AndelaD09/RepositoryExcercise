// ispisi zadnji uneseni element liste

#include <cstddef>
#include <stdio.h>
#include <stdlib.h>

typedef struct _Struct {
	int n;
	Struct* next;
}Struct;

Struct* dodajPoRedu(Struct* str, int n) {
	
	Struct* novi = (Struct*)malloc(malloc(sizeof(Struct)));

	novi->n = n;
	novi->next = str;
	str = novi;
	return novi;
}

void print(Struct* s) {
	while (s->next != NULL)
	{
		printf("%d\n", s->n);
		s = s->next;
	}
}

void main4(Struct* str) {
	int num = 0, cnt = 0, zadnji = 0;
	
	do {
		num = 4;
		zadnji = num;
		str = dodajPoRedu(str, num);
		str = str->next;
		cnt++;
	} while (cnt < 3);

	printf("%d", num);
	print(str);
}