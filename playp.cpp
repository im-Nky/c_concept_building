#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[5]={10,20,30,40,50};
	int *p=(int*)&a;

	cout << "*p "<<*p<<endl;
	cout << "*p++ "<<*p++<<endl;	/*Should behave *(p++) but behaves (*p)++*/
	cout << "*++p "<<*++p<<endl;
	cout << "++*p "<<++*p<<endl;
}
