#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int);

int main() {
	int number;

	printf("Enter a number: ");
	scanf("%d", &number);

	bool success = isPalindrome(number);

	if (success) {
		printf("%d is a palindrome", number);
	}
	else {
		printf("%d is not a palindrome", number);
	}

	return 0;
}

bool isPalindrome(int x) {
	int length = 1; 
	int y = x;
	int modulo = 10;			

	if (x < 0) {
		return false;
	}

	while(y / 10 != 0) { 
		length += 1;
		y /= 10;
	}

	int numbers[length];

	for (int l = 0; l < length; l++) {
		numbers[l] = x % modulo;
		x /= 10;
	}

	for (int k = 0; k < length / 2; k++) {
		if (numbers[k] != numbers[length - 1 - k]) {
			return false;
		}
	}
	return true;
}	
