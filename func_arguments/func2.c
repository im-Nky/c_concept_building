/* arguments passed at function calling and function 
   definition will have different address. Here we can see 
   that in a & b have different addresses than x & y.
*/

#include <stdio.h>
int sum(int ,int y);

void main() {
        int s,a=2,b=3;
        s = sum(a,b);
        printf("\n The sum is %d\n",s);
	printf("\n The address of a & b is %p %p\n",&a,&b);
}

int sum(int x, int y) {
	printf("\n The address of x & y is %p %p\n",&x,&y);
        return (x+y);
}
        
