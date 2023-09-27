#include <stdio.h>

int main(void)
{
	int a[5] = {10, 30, 40, 50, 60};
	int *ptr = &a[2];
	*ptr +=2;
	
	printf("The value of pointer ptr= %d\n", *ptr);

	printf("The value of pointer ptr= %d\n", a[]);
	return (0);
}
