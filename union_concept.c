#include <stdio.h>
#include <string.h>
#include <stdlib.h>

union ex{
	int a;
	char b;
};

void main() {
	union ex A;
	A.a = 50;
	printf("%d\n",A.a);
	printf("%c\n",A.b); /* Will print corresponding ascii value to 50
			       as a and b will share same address
			       */
			/* In case of struct there will be nothing print */
}
