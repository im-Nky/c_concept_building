#include <bits/stdc++.h>
using namespace std;

int main()
{
	/* C and C++ differ in the type of the string literal. 
	In C the type is array of char and in C++ it is constant
	array of char. In any case, you are not allowed to change 
	the characters of the string literal, so the const in C++ 
	is not really a restriction but more of a type safety thing.
	A conversion from const char* to char* is generally not 
	possible without an explicit cast for safety reasons. But for
	backwards compatibility with C the language C++ still allows
	assigning a string literal to a char* and gives you a warning
	about this conversion being deprecated.*/
	
	const char * name = "Nitin Kumar Yadav";
	const int i=4;
	int j=3;
	int *k=(int *)&i;
	cout <<i<<endl;
	
	//i = j+1;
	cout <<i<<endl;

	*k=5;
	cout<<*k<<endl;
}
