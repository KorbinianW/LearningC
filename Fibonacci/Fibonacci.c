#include <stdio.h>

int main() {
	int length;
	int result;
	int firstNumber = 1;
	int secondNumber = 1;
	
	printf("Enter a number: ");
	scanf("%d", &length);

	for (int i = 1; i <= length; i++) {
		result = firstNumber + secondNumber;

		firstNumber = secondNumber;
		secondNumber = result;

		printf("%d, ", result);
	}
}
