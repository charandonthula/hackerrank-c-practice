// Problem Name: For Loop
// Source: HackerRank
// Link: https://www.hackerrank.com/challenges/c-tutorial-for-loop
// Note: Prints numbers in words if 1–9, otherwise prints "even"/"odd".
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
     int a, b;
    cin >> a >> b;
    string nums[] = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"
    };
    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            cout << nums[i] <<endl;
        } else if (i % 2 == 0) {
            cout << "even\n";
        } else {
            cout << "odd\n";
        }
    }
    return 0;
}
/*if using printf and scanf instaed of cin and cout requires array to be declared as char *. Where each element becomes becomes pointer to string literal */
/*where as if we use "string" it is a class and variable associated with it is object */
