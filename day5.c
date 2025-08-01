// Problem: Pointers in C
// Source: HackerRank
// Link: https://www.hackerrank.com/challenges/pointer-in-c/problem
// Note: Demonstrates pointer manipulation by updating and swapping two integers.

#include <stdio.h>
#include <math.h>

void update(int *a,int *b) {
    int t = *a;
    *a= *a + *b ;
    *b= fabs(t - *b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
