// Problem: 1D Array in C
// Source: HackerRank
// Link: https://www.hackerrank.com/challenges/1d-arrays-in-c/problem
// Note: Reads `n` integers into an array and calculates their sum.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int sum=0,n;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<n;i++)
        sum+=arr[i];
    printf("%d",sum);
    return 0;
}
