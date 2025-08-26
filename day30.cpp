// Problem: Inheritance Introduction
//Source: HackerRank
// Link: https:www.hackerrank.com/challenges/inheritance-introduction/problem
//  Note: Demonstrates simple inheritance in C++ using the `:` symbol to derive one class (Isosceles) from another (Triangle).
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class Triangle{
    public:
    	void triangle(){
     		cout<<"I am a triangle\n";
    	}
};

class Isosceles : public Triangle{
    public:
    	void isosceles(){
    		cout<<"I am an isosceles triangle\n";
    	}
  		//Write your code here.
        void description(){
            cout<<"In an isosceles triangle two sides are equal"<<endl;
        }
};

int main(){
    Isosceles isc;
    isc.isosceles();
  	isc.description();
    isc.triangle();
    return 0;
}
