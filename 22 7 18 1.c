#include<stdio.h>
/*int main()
{
	int arr[100],n,i,x;
	printf("������Ҫ�������:\n");
	scanf("%d",&n);
	printf("������������:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("������Ҫ���ҵ���\n");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			printf("�ҵ���\n");
		}
	}
	if(n==i)
		printf("û�ҵ�\n");
	return 0;
}*/
int main()
{
	int arr[100],n,i,x;
	int left,right,mid;
	printf("������Ҫ�������:\n");
	scanf("%d",&n);
	printf("������������:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("������Ҫ���ҵ���\n");
	scanf("%d",&x);
	left=1;
	right=n;
	while(left<=right)
	{
		mid=(left+right)/2;
		if(arr[mid]>x)
		{
			right=mid-1;
		}
		else if(arr[mid]<x)
		{	
			left=mid+1;
		}
		else
		{
			printf("�ҵ���\n�±���:%d\n",mid);
			break;
		}

	}
	if(left>right)
	{
		printf("û�ҵ�\n");
	}
	return 0;
}