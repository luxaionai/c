#include<stdio.h>//求素数
#include<math.h>
 int is_prime(int n)
{
	int j;
	for(j=2;j<sqrt(n);j++)
	{
		if(n%j==0)
			return 0;	
	}
	return 1;
}
int main()
{
	int i,n;
	scanf("%d",&i);
	scanf("%d",&n);
	for(;i<=n;i++)
	{	
		if(is_prime(i)==1)
			printf("%d ",i);
	}
	return 0;
}