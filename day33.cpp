//Problem: Preprocessor Solution
//Source: HackerRank
//Link: https://www.hackerrank.com/challenges/preprocessor-solution/problem
//Note: Demonstrates usage of preprocessor macros in C++.Defines custom macros for loops, input, comparisons,and string conversion. Highlights how macros can replace repetitive code but should be used carefully to avoid readability issues.
#define foreach(v, i) for(int i = 0; i < n; i++)
#define io(v) cin >> v
#define INF 100000000
#define minimum(a, b) if(a > b) a = b;
#define maximum(a, b) if(a < b) a = b;
#define FUNCTION(a,b) 
#define toStr(arg) "Result =" 

#include <iostream>
#include <vector>
using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif 

FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main(){
	int n; cin >> n;
	vector<int> v(n);
	foreach(v, i) {
		io(v)[i];
	}
	int mn = INF;
	int mx = -INF;
	foreach(v, i) {
		minimum(mn, v[i]);
		maximum(mx, v[i]);
	}
	int ans = mx - mn;
	cout << toStr(Result =) <<' '<< ans;
	return 0;

}
