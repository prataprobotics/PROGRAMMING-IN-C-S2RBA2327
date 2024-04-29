#include <stdio.h>

int main() {
    int n, i;
    int sumOfOdd = 0, sumOfNatural = 0;

    // Input the value of N
    printf("Enter the value of N: ");
    scanf("%d", &n);

    // Calculate the sum of first N odd numbers
    for (i = 1; i <= 2 * n; i += 2) {
        sumOfOdd += i;
    }

    // Calculate the sum of first N natural numbers
    for (i = 1; i <= n; i++) {
        sumOfNatural += i;
    }

    // Calculate the difference
    int difference = sumOfOdd - sumOfNatural;

    // Display the difference
    printf("Difference between the sum of first %d odd numbers and first %d natural numbers is: %d\n", n, n, difference);

    return 0;
}
