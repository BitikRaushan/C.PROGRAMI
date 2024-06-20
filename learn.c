#include <stdio.h>

 
// Function-like Macro definition
#define min(a, b) (((a) < (b)) ? (a) : (b))    //samjh nai aya hai ye wala
 
// Driver Code
int main()
{
 
    // Given two number a and b
    int a = 24;
    int b = 56;
 
    printf( "Minimum value between a:%d  and b:%d is %d",a,b,min(a,b));
        
 
    return 0;
}