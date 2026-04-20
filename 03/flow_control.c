#include <stdio.h>
#include <stdlib.h>

void iff() {
	printf("\nIF\n");

	int x = 10;

	if (x == 10) printf("x is 10\n");

	if (x == 10)
		printf("x is 10\n");

	if (x == 10) {
		printf("x is 10\n");
		printf("And also this happens when x is 10\n");
	}

	int y = 11;

	if (y == 10)
		printf("This happens if y is 10\n");
		printf("This happens ALWAYS!\n"); // not part of the if block

	int z = 99;

	if (z == 10) {
		printf("z is 10\n");
	} else {
		printf("z is decidedly not 10.\n");
		printf("Which irritates me a little, frankly\n");
	}

	int a = 99;

	if (a == 10)
		printf("a is 10!\n");
	else if (a == 20)
		printf("a is 10!\n");
	else if (a == 99) {
		printf("a is 99! My favorite\n");
		printf("I can't tell you how happy I am.\n");
		printf("Really.\n");
	} else
		printf("a is some crazy number I've never heard of.\n");

}

void whilee() {
	printf("\nWHILE\n");

	int i = 0;
	while (i < 10) {
		printf("i is now %d\n", i);
		i++;
	}
	printf("All done\n");
}

void doWhile() {
	printf("\nDO-WHILE\n");

	int i = 10;
	while(i < 10) {
		// this block is not executed
		printf("while: i is %d\n", i);
		i++;
	}

	i = 10;
	do {
		// this block is executed once
		printf("do-while: i is %d\n", i);
		i++;
	} while(i < 10);
	printf("All done!\n");
}

void gamble() {
	printf("\nGAMBLE\n");

	int r;
	int c = 0;
	do {
		r = rand() % 100;
		printf("r is %d\n", r);
		c++;
	} while (r != 37);
	printf("took %d tries\n", c);
}

void forr() {
	printf("\nFOR\n");

	// using while loop
	printf("while loop:\n");
	int i = 0;
	while(i < 10) {
		printf("i is %d\n", i);
		i++;
	}

	// using for loop
	printf("for loop:\n");
	for (int i = 0; i < 10; i++) {
		printf("i is %d\n", i);
	}

	for (int i = 0, j = 999; i < 10; i++, j--) {
		printf("i is %d, j is %d\n", i, j);
	}
}

void switchh() {
	printf("\nSWITCH\n");

	// switch works with integer types, character types (character types are secretly integers themselves) and enums (also integer types)
	// don’t use floating point or string types in there

	int x = 1;
	switch(x) {
		case 1:
			printf("1\n");
			// FALL THROUGH

		case 2:
			printf("2\n");
			break;

		case 3:
			printf("3\n");
			break;

		default:
			printf("69\n");
	}

	char c = 'b';

	switch (c) {
		case 'a':
			printf("It's 'a'!\n");
			break;

		case 'b':
			printf("It's 'b'!\n");
			break;

		case 'c':
			printf("It's 'c'!\n");
			break;
	}
}

void forever1() {
	while(1) {
		printf("1 is always true, so this repeats forever\n");
	}
}

void forever2() {
	for(;;) {
		printf("1 is always true, so this repeats forever\n");
	}
}

int main(void) {
	iff();
	whilee();
	doWhile();
	gamble();
	forr();
	switchh();
}
