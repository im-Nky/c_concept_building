// #define my_sizeof (type)(char *)(&type+1) - (char *)(&type)


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[5];
	int *i =(int *)&a;
	int *m =(int *)(&a+1);
	//int n=&a;
	cout <<"Length of array "<<(m-i)<<endl;	

}
