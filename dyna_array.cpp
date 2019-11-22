/*
	Dynamic Array in C using pointers

*/

#include <bits/stdc++.h>
using namespace std;

void dyna_array(int * arr)
{
	for(int i=0;i<10;i++)
	{
		arr[i]=i;
		cout<<arr[i]<<" ";
	}
	cout << endl;
}

int main()
{
	int a[5]={12,3,24,4};
	dyna_array(a);
	return 0;
}
