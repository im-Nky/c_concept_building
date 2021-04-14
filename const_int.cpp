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
	cout<<*k<<endl;	// Note:Here we are printing *k 'not' i which gives o/p *k = 5
}
