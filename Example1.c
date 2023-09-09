#include<string.h>
#include<stdio.h>
#include <stdlib.h>

int x = 100;
int main()
{
	// data stored on stack
	int   a=2;
	float b=2.5;
	
	static int y;
	// allocate memory on heap
	int*ptr = (int*) malloc(2*sizeof(int));
	// values 5 and 6 stored on heap
	ptr[0]=5;
	ptr[1]=6;

	printf("\nx is at %p content %d", &x, x);
	printf("\na is at %p content %d", &a,a);
	printf("\nb is at %p content %f", &b,b);
	printf("\ny is at %p content %d", &y,y);
	printf("\nptr is at %p, content %p", &ptr, ptr);
	printf("\nptr is at %p, content %d", &ptr[0], ptr[0]);
	printf("\nptr is at %p, content %d", &ptr[1], ptr[1]);
	
	// deallocate memory on heap
	free(ptr);
	return 1;
}
