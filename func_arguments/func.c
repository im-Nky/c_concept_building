#include <stdio.h>
/*Here in function prototype we can declare without 
  variable name and even partial situation like 
  given below
*/
int sum(int ,int y);

void main() {
	int s;
	s = sum(4,5);
	printf("\n The sum is %d\n",s);
}

/* Here in function argument variable is must*/
int sum(int x, int y) {
	return (x+y);
}
