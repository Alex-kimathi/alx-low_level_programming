#include <stdio.h>

int add(int a, int b)
{
	int sum;

	sum = a + b;
/*	return (sum);*/
}
int main(void)
{
	int i = 4;
	int j = 5;
	int res;
	
	res = add(i, j);

	printf("result is : %d\n", res);

	return (0);

}
