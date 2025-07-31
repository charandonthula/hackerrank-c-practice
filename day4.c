// Problem: Functions in C - Max of Four
// Source: HackerRank
// Link: https://www.hackerrank.com/challenges/functions-in-c/problem
// Note: Defines and uses a custom function to find the maximum of four integers.
#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a,int b,int c,int d);

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
max_of_four(int a,int b,int c,int d)
{
    int max;
    max=a;
    if(max<b)
    max=b;
    if(max<c)
    max=c;
    if(max<d)
    max=d;
    
    return max;
}
