// Double pointer

#include <stdio.h>
int sum(int **,int **y);

void main() {
        int s,a=2,b=3;
	int *c=&a, *d=&b; 
        s = sum(&c,&d);
        printf("\n The sum is %d\n",s);

}

int sum(int **x, int **y) {

        return ((**x)+(**y));
}

