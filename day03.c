// Problem: Sum and Difference of Two Numbers
// Source: HackerRank
// Link: https://www.hackerrank.com/challenges/sum-numbers-c/problem
// Note: Reads two integers and two floats, prints their sum and difference formatted properly.
#include <stdio.h>

int main()
{
	int n,m;
    float a,b;
    
    scanf("%d%d",&n,&m);
    scanf("%f%f",&a,&b);
    
    printf("%d ",n+m);
    printf("%d\n",n-m);
    
    printf("%.1f ",a+b);
    printf("%.1f",a-b);
    
    
    return 0;
}
