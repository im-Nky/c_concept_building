#include <stdio.h>
int main()
{
	int i = 5;
	const int * p; // or int const *p;  // both statement are same

		/* Here p is a pointer of integer constant i.e. p is ordinary pointer but interger
		 * to which it's pointing is type of consta means value of variable can't be changed
		 * */
	p = &i;

	p++;    // allowed no problem
	(*p)++; // Gives Error b/c we are trying to change variable which is getting pointed by p.

	int * const q = &i;;  /* Must have intialized immediatlly */ 
	
	/* q is constant pointer which is pointing to an integer i.e. q can't be 
	* changed but variable to which it's pointing can be changed.	*/

	q++; // will give Error
	(*q)++; // allowed, works fine

	const int * const r = &i; /*Must be initialized immediatly*/

	/* No modification operation is allowed strictly read only */

	r++;	// Error
	(*r)++; // Error
}
