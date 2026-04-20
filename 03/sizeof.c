#include <stdio.h>

int main(void) {
	int a = 999;

	// %zu is the format specifier for type size_t
	// If you need to print out negative size_t values, use %zd
	
	printf("%zu\n", sizeof a); // 4
	printf("%zu\n", sizeof(2 + 7)); // 4
	printf("%zu\n", sizeof 3.14); // 8
	
	printf("%zu\n", sizeof(int)); // 4
	printf("%zu\n", sizeof(char)); // 1
}
