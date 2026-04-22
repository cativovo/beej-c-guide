#include <stdio.h>

// IMPORTANT: parameters are passed by copy
void increment(int n) {
	n++;
}

int plus_one(int n) {
	return n + 1;
}

void hello(void) {
	printf("Hello World\n");
}

int foo(void); // This is the prototype

int main(void) {
	int i = 10;
	int j = plus_one(i);
	printf("i + 1 is %d\n", j);

	hello();

	int k = 10;
	increment(k);
	printf("k is %d\n", k);

	int f = foo();
	printf("f is %d\n", f);
}

int foo(void) {
	return 6969;
}
