#include "mylib.h"  // Include your header to use the functions
#include <stdio.h>  // For printf (output)

int main() {
    int num = 153;  // Test with an Armstrong number (153 is 1^3 + 5^3 + 3^3 = 153)
    printf("Number: %d\n", num);
    printf("Reverse: %d\n", reverseDigits(num));
    printf("Is Armstrong? %s\n", isArmstrong(num) ? "Yes" : "No");
    printf("Is Adams? %s\n", isAdams(num) ? "Yes" : "No");
    printf("Is Prime? %s\n", isPrime(num) ? "Yes" : "No");
    printf("Is Prime Palindrome? %s\n", isPrimePalindrome(num) ? "Yes" : "No");

    // Test another number (e.g., 2 is a prime palindrome)
    num = 2;
    printf("\nNumber: %d\n", num);
    printf("Reverse: %d\n", reverseDigits(num));
    printf("Is Armstrong? %s\n", isArmstrong(num) ? "Yes" : "No");
    printf("Is Adams? %s\n", isAdams(num) ? "Yes" : "No");
    printf("Is Prime? %s\n", isPrime(num) ? "Yes" : "No");
    printf("Is Prime Palindrome? %s\n", isPrimePalindrome(num) ? "Yes" : "No");

    return 0;
}