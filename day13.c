// Problem: Printing an Array in Reverse
// Source: HackerRank
// Link: https://www.hackerrank.com/challenges/reverse-array-c/problem
// Note: Dynamically allocates an array, reverses it in-place by swapping
//       elements from both ends toward the center, and prints the result.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i,temp;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    for(i=0;i<num/2;i++){
         temp = arr[i];
         arr[i]=arr[num-1-i];
         arr[num-1-i]=temp;
    }
    
    /* Write the logic to reverse the array. */

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
