#include <stdio.h>

void foo(int x[12]) {
	printf("\nfoo\n");
	printf("%zu\n", sizeof x); // 8?! What happened to 48?
    printf("%zu\n", sizeof(int)); // 4 bytes per int
    printf("%zu\n", sizeof x / sizeof(int)); // 8/4 = 2 ints?? WRONG.
	// This is because when you “pass” arrays to functions, you’re only passing a pointer to the first element, and that’s what sizeof measures.
	printf("\n");
}

int main(void) {
	int x[12]; // 12 ints
	printf("%zu\n", sizeof x); // 48 total bytes
	printf("%zu\n", sizeof(int)); // 4 bytes per int
	printf("%zu\n", sizeof x / sizeof(int)); // 48/4 = 12 ints

	foo(x);

	printf("%zu\n", sizeof(double [48]));
}
