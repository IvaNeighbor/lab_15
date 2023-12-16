#include <stdio.h>
int main() {
	int number;
	printf_s("Press 1 or 2 or 3....or 7");
	printf_s("1. A program that finds which number is greater between two.\n");
	printf_s("2. A program that finds the smallest of three numbers.\n");
	printf_s("3. A program that resets all even elements of the array to zero.\n");
	printf_s("4. A program that calculates the sum of the elements of an integer array.\n");
	printf_s("5. A program that displays array elements in reverse order.\n");
	printf_s("6. A program to store the maximum and minimum values in an array.\n");
	printf_s("7. The accumulation algorithm is an algorithm used to process data sets with the accumulation of a certain value.\n");
	scanf_s("%d", &number);
	switch (number) {
	case 1: {
		int x, y;
		if (x > y) {
			printf_s("The lagest number\n", x);
		}
		else {
			printf_s("The lagest number\n", y);
		}
		if (x = y) {
			printf_s("Value are the same\n", x, y);
		}
	}
		  break;
	case 2:
	default:
		printf_s("Wrong number");
	}
	return 0;
}