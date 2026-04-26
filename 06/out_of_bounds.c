#include <stdio.h>

int main(void) {
	int a[5] = {1, 2, 3, 4, 5};

	// doesn't panic
	for (int i = 0; i < 10; i++) {  // BAD NEWS: printing too many elements!
		printf("%d\n", a[i]);
	}
}
