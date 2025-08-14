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
//Alternate way 
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a;
    long b;
    char c;
    float d;
    double e;

    cin >> a >> b >> c >> d >> e;

    cout << a << "\n"
         << b << "\n"
         << c << "\n"
         << fixed << setprecision(3) << d << "\n"
         << fixed << setprecision(9) << e << "\n";

    return 0;
}
