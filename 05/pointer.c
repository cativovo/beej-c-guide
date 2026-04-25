#include <stdio.h>

int main(void) {
	int i; // i's type is "int"
	int *p; // p's type is "pointer to an int", or "int-pointer"

	p = &i;

	i = 10;
	*p = 20;
		
	printf("i is %d\n", i); // prints "20"
	printf("i is %d\n", *p); // "20"! dereference-p is the same as i!
}
