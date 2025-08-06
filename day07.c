// Problem: Conditional Statements in C
// Source: HackerRank
// Link: https://www.hackerrank.com/challenges/for-loop-in-c/problem
// Note: Uses if-else statements with a 2D character array to print numbers in words (1–9) or "even"/"odd" for greater numbers.

#include <stdio.h>

int main() 
{
    int a, b, i;

    // 2D array 
    char words[10][6] = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"
    };

    scanf("%d %d", &a, &b);

    for (i = a; i <= b; i++) 
    {
        if (i >= 1 && i <= 9) 
        {
            printf("%s\n", words[i]);  // Accessing 
        } 
        else 
        {
            if (i % 2 == 0)
                printf("even\n");
            else
                printf("odd\n");
        }
    }

    return 0;
}
