#include<stdio.h>
void Add(int *p)
{
	(*p)++;
}
int main()
{
	int nume=0;
	Add(&nume);
	printf("%d\n",nume);
	return 0;
}