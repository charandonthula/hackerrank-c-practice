// Problem Name: Structs
// Source: HackerRank
// Link: https://www.hackerrank.com/challenges/c-tutorial-struct/problem
// Note: Task was to create a struct `Student` with members age, first_name, 
// last_name, standard and print them in the required format. 

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Student {
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main() {
    Student st;
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    return 0;
}
