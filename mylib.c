#include "mylib.h"  // Include the header for declarations
#include <stdlib.h>  // For abs()
#include <math.h>    // For potential math (not used here, but included)

// Implementation of reverseDigits
int reverseDigits(int n) {
    int sign = 1;
    if (n < 0) { sign = -1; n = abs(n); }
    int r = 0;
    while (n > 0) {
        r = r * 10 + (n % 10);
        n /= 10;
    }
    return sign * r;
}

// Helper function for power (static means it's only visible in this file)
static int ipow(int base, int exp) {
    int res = 1;
    while (exp-- > 0) res *= base;
    return res;
}

// Implementation of isArmstrong
int isArmstrong(int num) {
    if (num < 0) return 0;
    int n = num;
    int digits = 0;
    int tmp = n;
    if (tmp == 0) digits = 1;
    while (tmp) { digits++; tmp /= 10; }

    int sum = 0;
    tmp = n;
    while (tmp) {
        int d = tmp % 10;
        sum += ipow(d, digits);
        tmp /= 10;
    }
    return (sum == num) ? 1 : 0;
}

// Implementation of isAdams
int isAdams(int num) {
    if (num < 0) num = abs(num);
    long long sq = (long long)num * (long long)num;
    int rev_n = reverseDigits(num);
    long long sq_rev = (long long)rev_n * (long long)rev_n;
    int rev_sq = reverseDigits((int)sq);
  
    return (rev_sq == (int)sq_rev) ? 1 : 0;
}

// Implementation of isPrime
int isPrime(int num) {
    if (num <= 1) return 0;
    if (num <= 3) return 1;
    if (num % 2 == 0) return 0;
    int i;
    for (i = 3; (long long)i * i <= num; i += 2) {
        if (num % i == 0) return 0;
    }
    return 1;
}

// Implementation of isPrimePalindrome
int isPrimePalindrome(int num) {
    if (num < 0) return 0;
    if (!isPrime(num)) return 0;
    return (reverseDigits(num) == num) ? 1 : 0;
}  // End of include guard