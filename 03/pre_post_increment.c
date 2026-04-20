#include <stdio.h>

void postIncrement() {
	int i = 10;
	int j = 5 + i++;
	printf("post-increment: %d, %d\n", i, j);
}

void preIncrement() {
	int i = 10;
	int j = 5 + ++i;
	printf("pre-increment: %d, %d\n", i, j);
}

int main(void) {
	postIncrement();
	preIncrement();
}
