#include <stdio.h>
#define MAX_SIZE 100

int main() {
	int number;
	printf_s("Press 1 or 2 or 3....or 7\n");
	printf_s("1. A program that finds which number is greater between two.\n");
	printf_s("2. A program that finds the smallest of three numbers.\n");
	printf_s("3. A program that resets all even elements of the array to zero.\n");
	scanf_s("%d", &number);
	switch (number) {
	case 1: {
		int x, y;
		printf_s("Enter value x and y\n");
		scanf_s("%d %d", &x, &y);
		if (x > y) {
			printf_s("The lagest number is %d\n", x);
		}
		if (x < y) {
			printf_s("The lagest number is %d\n", y);
		}
		if (x == y) {
			printf_s("Value are the same\n");
		}
	}
		  break;
	case 2: {
		int x, y, z;
		printf_s("Enter value x, y and z\n");
		scanf_s("%d %d %d", &x, &y, &z);
		if (x < y && x < z) {
			printf("Min x=%d", x);
		}
		if (y < x && y < z) {
			printf("Min y=%d", y);
		}
		if (z < x && z < y) {
			printf("Min z=%d", z);
		}
		if (x == y && x == z) {
			printf_s("Value are the same");
		}
	}
		  break;
	case 3: {
		int array[MAX_SIZE], n;
		printf_s("Enter size of massive(not more than %d): ", MAX_SIZE);
		scanf_s("%d", &n);
		if (n < 100) {
			for (int i = 0; i < n; i++) {
				printf_s("arr[%d]: ", i);
				scanf_s("%d", &array[i]);
			}
			for (int i = 0; i < n; i++) {
				if (array[i] % 2 == 0) {
					array[i] = 0;
				}
			}
			for (int i = 0; i < n; i++) {
				printf_s("%d ", array[i]);
			}
		}
		else {
			printf_s("Wrong array");
		}
	}
		  break;
	default:
		printf_s("Wrong number size");
	}
	return 0;
}