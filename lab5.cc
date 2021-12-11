#include <stdio.h> 
#include <stdlib.h>

int main() {
	int a [] = {90, 76, 54, 23, 56, 12, 48};
	int b;
	int size;
	size = sizeof(a)/sizeof(int);
	for(b = 0; b < size; b++)
		printf("[%d]", a[b]);
	return 0;
}