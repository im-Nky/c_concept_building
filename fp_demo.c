
#include <stdio.h>

void fun(int a)
{
	printf("\nprinting value = %d",a);
}

int main()
{
	void (*fun_ptr)(int);		// function pointer decleration

	fun_ptr = &fun;			

	(*fun_ptr)(10);			// function calling using fp

	// ***alternative to declare fp***

	//void (*fun_ptr)(int)=fun;    Notice '&' is removed 
	//fun_ptr(10);                 Notice '*' is removed

}
