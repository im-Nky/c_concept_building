#include <bits/stdc++.h>
using namespace std;

int main()
{	
	const int i=4;
	int j=3;
	int *k=(int *)&i;
	cout <<i<<endl;
	
	//i = j+1;	// Throws error b/c i is read-only
	cout <<i<<endl; // Here we are printing variable i which gives o/p = 4 
	
	*k=5;
	
	/*
	* IMPORTANT: The variables declared using const keyword, get stored in .rodata segment, 
	* but we can still access the variable through the pointer and change the value of that
	* variable. By assigning the address of the variable to a non-constant pointer, We are 
	* casting a constant variable to a non - constant pointer. The compiler will give warn-
	* ing while typecasting and will discard the const qualifier. Compiler optimization is
	* different for variables and pointers. That is why we are able to change the value of 
	* a constant variable through a non-constant pointer. */
	cout<<*k<<endl;	// Note:Here we are printing *k 'not' i which gives o/p *k = 5
}
