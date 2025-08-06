// Problem: Sum of Digits of a Five Digit Number
// Source: HackerRank
// Link: https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem
// Note: Extracts each digit using modulus and division in a `while` loop, then prints the sum of digits.

#include <stdio.h>


int main() {
	
    int n,d,sum=0;
    scanf("%d", &n);
    while (n) {
        d=n%10;
        sum+=d;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}
