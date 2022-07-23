#include<stdio.h>
int main()
{
	int a[100],n,m;
	int i,j;
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
	scanf("%d",&a[j]);
	}
	for( i=0;i<n-1;i++)
	{
		for( j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				m=a[j];
				a[j]=a[j+1];
				a[j+1]=m;
			}
		}
	}
	for(j=0;j<n;j++)
	{
		printf("%d ",a[j]);
	}
	return 0;
}