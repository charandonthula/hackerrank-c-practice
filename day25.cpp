// Problem Name: Strings
// Source: HackerRank
// Link: https://www.hackerrank.com/challenges/c-tutorial-strings
// Note: swap(a[0], b[0]) uses std::swap (a built-in STL function) to exchange the first characters of two strings.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    string b;
    cin >> a >> b;
    cout << a.size() << " " << b.size() << endl;
    cout << a + b << endl;
    swap(a[0], b[0]);
    cout << a << " " << b << endl;
    return 0;
}
//swap is builtin function in c++.
//For primitive types (like int, char, float, double, etc.), it just swaps the values directly.
//For objects (like string, vector, Complex, etc.), it swaps their contents by calling their assignment operator.
//For user-defined classes, swap works as long as the class supports assignment (=). If the class has a lot of data, you can even specialize swap for efficiency.
