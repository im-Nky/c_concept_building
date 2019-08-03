#include <bits/stdc++.h>
using namespace std;

int main()
{
	const int i=4;
	int j=3;
	int *k=(int *)&i;
	cout <<i<<endl;
	
	//i = j+1;
	cout <<i<<endl;

	*k=5;
	cout<<*k<<endl;
}
