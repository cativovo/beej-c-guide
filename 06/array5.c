#include<stdio.h>

// passing as a pointer to the first element
// most common
void times2(int *a, int len) {
	printf("\ntimes2\n");
	for (int i = 0; i < len; i++) {
		printf("%d\n", a[i]*2);
	}
	printf("\n");
}

// same thing, but using array notation
void times3(int a[], int len) {
	printf("\ntimes3\n");
	for (int i = 0; i < len; i ++) {
		printf("%d\n", a[i]*3);
	}
	printf("\n");
}

// same thing, but using array notation with size
void times4(int a[5], int len) {
	printf("\ntimes4\n");
	for (int i = 0; i < len; i++) {
		printf("%d\n", a[i]*4);
	}
	printf("\n");
}

int main(void) {
	int x[5] = {1, 2, 3, 4, 5};

	times2(x, 5);
	times3(x, 5);
	times4(x, 5);
}
