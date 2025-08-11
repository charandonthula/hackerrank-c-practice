// Problem: Small Triangles, Large Triangles
// Source: HackerRank
// Link: https://www.hackerrank.com/challenges/small-triangles-large-triangles/problem
// Note: Reads n triangles, calculates area using Heron’s formula, and sorts in ascending order.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};
typedef struct triangle triangle;
float calarea(triangle tr) {
    float p = (tr.a + tr.b + tr.c) / 2.0;
    return sqrt(p * (p - tr.a) * (p - tr.b) * (p - tr.c));
}
void sort_by_area(triangle *tr, int n) {
    triangle temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (calarea(tr[j]) > calarea(tr[j + 1])) {
                temp = tr[j];
                tr[j] = tr[j + 1];
                tr[j + 1] = temp;
            }
        }
    }
}
int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}

//Sortings are always same techinques, but in addtion to that if there is something it is better to create another funtion and sort based on that funtion return value.
