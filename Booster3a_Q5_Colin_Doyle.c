#include <stdio.h> 

void modifyVal(int * myptr) {
    * myptr = * myptr + 5; 
    } 
     
int main() {
    int x = 5;
    int * myptr = &x;
    printf("Original value of x is: %d\n", x);
    modifyVal(myptr);
    printf("Modified value of x is: %d\n", x);
    return 0;

}// Passing the pointer ptr to the function modifyVal(myptr); 
 // Printing the modified value of x printf("Modified value of x is: %d\n", x); return 0; }
 // The output of the code is: Modified value of x is: 10
 // The pointer modifies the original value of x by adding 5 to it. The modified value of x is printed using the printf() function.