// Problem Name: Pointer in C++
// Source: HackerRank
// Link: https://www.hackerrank.com/challenges/c-tutorial-pointer
// Note: Update values using pointers — first variable stores sum, second stores absolute difference.

#include <iostream>
#include <cmath>  // for abs()
using namespace std;

void update(int *a,int *b) {
    int temp = *a;
    *a = *a + *b;
    *b = abs(temp - *b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    cin >> a >> b;
    update(pa, pb);
    cout << a << "\n" << b;

    return 0;
}
//if want abs in c++ style then go for std::abs(temp-*b) by including #include<iostream>
