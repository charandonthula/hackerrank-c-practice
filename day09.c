// Problem: Students Marks Sum
// Source: HackerRank
// Link: https://www.hackerrank.com/challenges/students-marks-sum/problem
// Note: Sums marks of either even-indexed (boys) or odd-indexed (girls) students based on the input gender. 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.
  int marks_summation(int* marks, int number_of_students, char gender) {
    int val=0;
    if(gender=='b')
        for(int i=0;i<number_of_students;i+=2)
            val+=marks[i];
    else if(gender=='g')        
        for(int i=1;i<number_of_students;i+=2)
            val+=marks[i];
    return val; 
    /*        
    for(int i=0;i<number_of_students;i++)
    {
       if(gender=='b')                          // Another approach
            if(i%2==0)
                val=val+marks[i];
       if(gender=='g')         
            if(i%2!=0)
                val=val+marks[i];
    }
    return val;*/
}
int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}
