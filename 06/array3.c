#include <stdio.h>

int main(void) {
	// int a[10];
	// int b[2][7];
	// int c[4][5][6];

    int a[2][5] = { // Initialize a 2D array
        {0, 1, 2, 3, 4},
        {5, 6, 7, 8, 9}
    };

    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 5; col++) {
            printf("(%d,%d) = %d\n", row, col, a[row][col]);
        }
    }

	// Make a 3x3 identity matrix
	// 1 0 0
	// 0 1 0
	// 0 0 1
	int b[3][3] = {[0][0]=1, [1][1]=1, [2][2]=1};
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            printf("%d", a[row][col]);
        }
		printf("\n");
    }
}
