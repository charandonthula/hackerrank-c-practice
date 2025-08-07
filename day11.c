// Problem: Find the Nth Term
// Source: HackerRank
// Link: https://www.hackerrank.com/challenges/recursion-in-c/problem
// Note: Calculates the Nth term of a custom sequence 
//       The sequence is defined as:
//           T(n) = T(n-1) + T(n-2) + T(n-3)
//       with given values for T(1), T(2), and T(3).
//Recursive approach
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
    int t;
    if(n==1)
        return a;
    if(n==2)    
        return b;
    if(n==3)    
        return c;
    t=find_nth_term((n-1),a,b,c)+find_nth_term((n-2),a,b,c)+find_nth_term((n-3), a, b,c);
    return t;    
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
//Iterative approach
int find_nth_term(int n, int a, int b, int c) {
    int t1 = a, t2 = b, t3 = c, tn;
    for (int i = 4; i <= n; i++) {
        tn = t1 + t2 + t3;
        t1 = t2;
        t2 = t3;
        t3 = tn;
    }
    return tn;
}

