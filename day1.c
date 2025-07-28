// Problem: Hello World
// Source: HackerRank
// Link: https://www.hackerrank.com/challenges/hello-world-c/problem
// Note: Only core logic  – input/output handled by HackerRank

#include <stdio.h>
#include <string.h>
#include <math.h>
int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);
  	
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    printf("Hello, World!\n");
    printf("%s",s);
    return 0;
}
