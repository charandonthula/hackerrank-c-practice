// Problem: Playing With Characters
// Source: HackerRank
// Link: https://www.hackerrank.com/challenges/playing-with-characters/problem
// Note: Demonstrates basic input and output using scanf() with characters and strings.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch,s[100],sen[100];
    
    scanf("%c",&ch);
    printf("%c\n",ch);
    
    scanf("\n");
    scanf("%[^\n]%*c",s);
    scanf("\n");
    scanf("%[^\n]%*c",sen);
    
    printf("%s\n",s);
    printf("%s",sen);
    
    return 0;
}
