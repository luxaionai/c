#include<stdio.h>//辗转相除求最大公因数
int main()
{
	int a,b,r;
	scanf("%d %d",&a,&b);
	while(a%b!=0)
	{
		r=a%b;
		a=b;
		b=r;
	}
	printf("%d\n",b);
	return 0;
}