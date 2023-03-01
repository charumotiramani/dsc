#include <stdio.h>
int main()
{
	int x=4;
	int *p; // declaration
	p=&x; // initialization
	printf("Value at address pointed by p: %d \n",*p);
	printf("Value of x: %d \n",x);
	printf("Address of x: %d \n",&x);
	printf("Value of p: %d \n",p);
	printf("Address of p: %d \n",&p);
}
