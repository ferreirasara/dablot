#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

char converte_jogada_y(char X) {
	int x;

	switch (X) {
		case 'A': x = 0; break;
		case 'B': x = 2; break;
		case 'C': x = 4; break;
		case 'D': x = 6; break;
		case 'E': x = 8; break;
		case 'F': x = 10; break;
		case 'G': x = 12; break;
		case 'H': x = 14; break;
		case 'I': x = 16; break;
		case 'J': x = 18; break; 
		case 'K': x = 20; break; 
	}
	return (x);
}