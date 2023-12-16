#include <stdio.h>
#define MAX_SIZE 100

int main() {
	int number;
	printf_s("Press 1 or 2 or 3....or 7\n");
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
				printf_s("array[%d]: ", i);
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
			printf_s("Wrong array size");
		}
	}
		  break;
	case 4: {
		int array[MAX_SIZE], n, sum = 0;
		printf_s("Enter size of massive(not more than %d): ", MAX_SIZE);
		scanf_s("%d", &n);
		if (n < 100) {
			for (int i = 0; i < n; i++) {
				printf_s("array[%d]: ", i);
				scanf_s("%d", &array[i]);
			}
			for (int i = 0; i < n; i++) {
				sum += array[i];
			}
			printf_s("Result of sum %d", sum);
		}
		else {
			printf_s("Wrong array size");
		}
	}
		  break;
	case 5: {
		int array[MAX_SIZE], n;
		printf_s("Enter size of massive(not more than %d): ", MAX_SIZE);
		scanf_s("%d", &n);
		if (n < 100) {
			for (int i = 0; i < n; i++) {
				printf_s("array[% d]: ", i);
				scanf_s("%d", &array[i]);
			}
			for (int i = n - 1; i >= 0; i--) {
				printf_s("araay %d ", array[i]);
			}
		}
		else {
			printf_s("Wrong array size");
		}
	}
		break;
	case 6: {
		int array[MAX_SIZE], n, min, max;
		printf_s("Enter size of massive(not more than %d): ", MAX_SIZE);
		scanf_s("%d", &n);
		if (n < 100) {
			for (int i = 0; i < n; i++) {
				printf_s("array[% d]: ", i);
				scanf_s("%d", &array[i]);
			}
			min = array[0];
			max = array[0];
			for (int i = 0; i < n; i++) {
				if (min > array[i]) {
					min = array[i];
				}
			}
			for (int i = 0; i < n; i++) {
				if (max < array[i]) {
					max = array[i];
				}
			}
			printf_s("Min value: %d and Max value: %d", min, max);
		}
		else {
			printf_s("Wrong array size");
		}
	}
		  break;
	case 7: {
		int array[MAX_SIZE], n, sum=0, array2[MAX_SIZE];
		printf_s("Enter size of massive(not more than % d) : ", MAX_SIZE);
		scanf_s("%d", &n);
		if (n < 100) {
			for (int i = 0; i < n; i++) {
				printf_s("array[%d]", i);
				scanf_s("%d", &array[i]);
			}
			for (int i = 0; i < n; i++) {
				sum += array[i];
				array2[i]=sum;
				printf_s("array2 %d\n", array2[i]);
			}
		}
		else {
			printf_s("Wrong array size");
		}
	}
		  break;
	default: 
		printf_s("Wrong number size");
	}
	return 0;
}