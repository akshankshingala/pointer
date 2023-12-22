/*

Q.2 Write a Program to swap two variables using Pointers.
For example,
Input:
Enter the value of x: 5
Enter the value of y: 3

Output:
Before swapping:
x: 5
y: 3

After swapping:
x: 3
y: 5
*/

#include <stdio.h>
void main() {

    int a,b;
    int swap;
    int *a1,*a2;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);
   
   
    a1 = &a;
    a2 = &b;
 
    swap = *a1;
   
    *a1 = *a2;
    *a2 = swap;
    printf("\n swapp a = %d && b = %d", a,b);
   
}


