#include <stdio.h>

void double_array(int *a, int len) {
	for (int i = 0; i < len; i++) {
		a[i] *= 2;
	}
}

int main(void) {
	int x[5] = {1, 2, 3, 4, 5};

	printf("before\n");
	for (int i = 0; i < 5; i++) {
		printf("%d\n", x[i]);
	}
	printf("\n");

	double_array(x, 5);

	printf("after\n");
	for (int i = 0; i < 5; i++) {
		printf("%d\n", x[i]);
	}
}
