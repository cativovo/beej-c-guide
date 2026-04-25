#include <stdio.h>

void increment(int *p) {
	*p = *p + 1;
}

int main(void) {
	int i;
	int *p;

	i = 10;
	p = &i;

	printf("i is %d\n", i); // prints 10
	printf("i is also %d\n", *p); // prints 10

	increment(p);

	printf("i is %d\n", i); // prints 11
}
