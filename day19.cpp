// Problem Name: Conditional Statements
// Source: HackerRank
// Link: https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else
// Note: Prints the English word for numbers 1–9, otherwise prints "Greater than 9".


//Without changing main function and strictly writing with help of conditional statements only

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    if(n==1)
        printf("one\n");
    else if(n==2)    
        printf("two\n");
    else if(n==3)
        printf("three\n");
    else if(n==4)
        printf("four\n");
    else if(n==5)
        printf("five\n");
    else if(n==6)
        printf("six\n");
    else if(n==7)
        printf("seven\n");
    else if(n==8)
        printf("eight\n");
    else if(n==9)    
        printf("nine\n");
    else
        printf("Greater than 9\n");

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
//another approach
// DayXX_PrintNumbersAsWords.cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> words = {
        "one", "two", "three", "four", "five",
        "six", "seven", "eight", "nine"
    };

    if (n >= 1 && n <= 9)
        cout << words[n - 1] << "\n";
    else
        cout << "Greater than 9\n";

    return 0;
}

