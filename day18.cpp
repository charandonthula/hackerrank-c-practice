// Problem Name: Basic Data Types
// Source: HackerRank
// Link: https://www.hackerrank.com/challenges/c-tutorial-basic-data-types
// Note: Reads different data types from input and prints them in specified formats.
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a;
    long int b;
    char c;
    float d;
    double e;
    scanf("%d %ld %c %f %lf",&a,&b,&c,&d,&e);
    printf("%d\n%ld\n%c\n%.3f\n%.9lf\n",a,b,c,d,e);
    return 0;
}
