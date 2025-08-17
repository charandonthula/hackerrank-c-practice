// Problem Name: Functions - Max of Four
// Source: HackerRank
// Link: https://www.hackerrank.com/challenges/c-tutorial-functions
// Note: Find maximum of four integers using a custom function
#include <iostream>
#include <cstdio>
using namespace std;
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a,int b,int c,int d){
    int val;
    val=a;
    if (val<b) 
        val=b;
    if(val<c)    
        val=c;
    if(val<d)    
        val=d;
    return val;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}
