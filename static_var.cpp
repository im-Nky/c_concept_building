/*	***VERY IMPORTANT***
	1.DYNAMIC ARRAY: Check behaviour of ptr o/p: 0 1 0 0
	2.static variables: can only be intialize by constants
*/

#include <iostream> 
using namespace std; 

int * fun() 
{ 
	static int arr[2]={0,1}; 
	return arr; 
} 

int main() 
{ 
	int * ptr = fun(); 
	cout << ptr[0]<<" "<<ptr[1]<<" "<<ptr[2]<<" "<<ptr[3]<<endl; 
	return 0; 
} 

