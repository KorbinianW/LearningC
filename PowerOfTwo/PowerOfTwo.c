#include <stdio.h>
#include <stdbool.h>

bool isPowerOfTwo(int n);

bool isPowerOfTwo(int n) {
    if (n == 1) {
        return true;
    }

    if (n % 2 != 0 || n <= 0) {
        return false;
    }

    while (n > 1) {
        if (n % 2 != 0) {
            return false;
            }
        n /= 2;
    }
    return true;
}

int main() {
    int i;
    printf("Enter a number: \n");
    scanf("%d", &i);

    if (isPowerOfTwo(i)) {
        printf("%d is a power of two.\n", i);
    }
    else {
        printf("%d is not a power of two.\n", i);
    }

    return 0;
}
