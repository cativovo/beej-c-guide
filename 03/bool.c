#include <stdio.h>
#include <stdbool.h> // not needed in C23

int main(void) {
	bool x = true;
	if (x) {
		printf("true\n");
	} else {
		printf("false\n");
	}

	int i = 2;
	printf("The number %d is %s", i, i % 2 == 0 ? "even" : "odd");
}
