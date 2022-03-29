#include <stdio.h>
#include <stdlib.h>

//Napiši program prima dva broja, jedan binarni i jedan u obliku string te ispisuje njegovu razliku hexadekadski. 

int pretvori(int broj) {
	int ostatak = 0, decimalno = 0, cnt = 0, baza = 1;

	while (broj) {
		ostatak = broj % 10; 
		broj = broj / 10;
		decimalno = decimalno + ostatak * baza;
		baza = baza * 10;
	}
	return decimalno;
}

int mystrlen(char* hex) {
	if (hex == NULL)
		return -1;
	
	char* str = hex;
	int len = 0;

	while (*str != '\0') { // je li pokazivaè na string pokazuje na nul term
		*str++; //povecavamo ga za jedno misto
		len++;
	}

	printf("len : %d", len);

	return len;
}

int pretvorihex(char* hex) {
	int len = mystrlen(hex);
	int base = 1, decimalno=0;

	for (int i = len - 1; i >= 0; i--) {
		if (hex[i] >= '0' && hex[i] <= '9') {
			decimalno  = decimalno + (hex[i] - 48) * base;
		}
		if (toupper(hex[i]) >= 'A' && toupper(hex[i]) <= 'F') {
			decimalno = decimalno + (toupper(hex[i]) - 55) * base;
		}

		base = base * 16;
	}
	return decimalno;
}


void main()
{

	int binarno = 0b100101111; //303

	char hex[100] = "12a"; //298

	int decimalno = pretvori(binarno); //303

	printf("%d\n", decimalno);

	int decimalno2 = pretvorihex(hex); // 298

	printf("\nhex broj je :%d\n", decimalno2);

	int oduzimanje = decimalno > decimalno2 ? decimalno - decimalno2 : decimalno2 - decimalno;

	printf("/n broj je %d\n", oduzimanje);

	char hexa[100];

	int ostatak = 0, dijeljeno = oduzimanje, cnt = 0;

	while (dijeljeno != 0) {
		ostatak = dijeljeno % 16;
		dijeljeno = dijeljeno / 16;

		if (ostatak >= 0 && ostatak <= 9) {
			hexa[cnt] = ostatak + 48;
			cnt++;
		}
		else {
			hexa[cnt] = ostatak + 48;
			cnt++;
		}
		
	}
	int j = 0;
	
	while (cnt != 0) {
		printf("%c",hexa[j++]);
		cnt--;
	}
	
	
}