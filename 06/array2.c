#include <stdio.h>

int main(void) {
	int a[5] = {22, 37, 3490, 18, 95}; // initialize with these values

	for (int i = 0; i < 5; i++) {
		printf("%d\n", a[i]);
	}

	// ERROR: num of elements > initialized len
	// int a[5] = {22, 37, 3490, 18, 95, 69};

	// int a[5] = {22, 37, 3490};
	// is the same as:
	// int a[5] = {22, 37, 3490, 0, 0};

	// common shortcut to initialize array with n length
	// int a[100] = {0};

	// index 5 should value 55
	// int a[10] = {0, 11, 22, [5]=55, 66, 77};
	// 0 11 22 0 0 55 66 77 0 0

	// #define COUNT 5
	// int a[COUNT] = {[COUNT-3]=3, 2, 1};
	// 0 0 3 2 1

	// you can also have C compute the size of the array from the initializer, just by leaving the size off
	// int a[3] = {22, 37, 3490};
	// is the same as:
	// int a[] = {22, 37, 3490};  // Left the size off!
}
