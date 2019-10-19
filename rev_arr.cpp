/*
	As Static can be only intialized by constants size would always be problem 

*/

#include <iostream> 
using namespace std; 

int * fun(int * ar,int m)	/* Problem with 'm' compiler is not able to evaluueate it */ 
{
	int *arr = (int*)malloc(sizeof(int)*m);
	
	// int n = (int)((int *)(&ar+1) -(int *)(&ar));		// This will also fail
	//static int arr[5]; // ## Giving Error Here Because Static Variables can only intialized by constant 
	
	int j=0;
	for(int i=m-1;i>=0;i--) 
	{
		arr[j]=ar[i];
		j++;
	}
	return arr; 
} 

int main() 
{ 
	int a[5]={23,56,4343,3,54};
	int* ptr = fun(a,5); 
	cout << ptr[0]<<" "<< ptr[1] <<" "<<ptr[2]<<" "<<ptr[3]<<" "<<ptr[4]; 
	return 0; 
} 
