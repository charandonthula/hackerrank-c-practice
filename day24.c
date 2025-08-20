// Problem Name: StringStream
// Source: HackerRank
// Link: https://www.hackerrank.com/challenges/c-tutorial-stringstream
// Note: Parse a comma-separated string into integers using stringstream
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    int a;
    char ch;
    vector<int> result;
    stringstream ss(str);
    while(ss>>a){
        result.push_back(a);
        ss>>ch;
    }
    return result;
    // int num = 0;
    // for (int i = 0; i < str.size(); i++) {
    //     if (str[i] == ',') {
    //         result.push_back(num);
    //         num = 0; // reset for next number
    //     } else {
    //         num = num * 10 + (str[i] - '0'); // build number digit by digit
    //     }
    // }
    // result.push_back(num); // last number
    // return result;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
