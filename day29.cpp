//Problem: Vector-Sort
//Source: HackerRank
//Link: https:www.hackerrank.com/challenges/vector-sort/problem
//Note: Demonstrates how to use STL vector to store integers and apply the built-in sort() function to arrange them.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());   

    for (int i = 0; i < n; i++)
        cout << v[i] << " ";

    return 0;
}
//vector:It’s like a dynamic array that can grow or shrink in size automatically.
