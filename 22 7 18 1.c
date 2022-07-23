#include<stdio.h>
/*int main()
{
	int arr[100],n,i,x;
	printf("输入需要数组个数:\n");
	scanf("%d",&n);
	printf("输入有序数组:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("请输入要查找的数\n");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			printf("找到了\n");
		}
	}
	if(n==i)
		printf("没找到\n");
	return 0;
}*/
int main()
{
	int arr[100],n,i,x;
	int left,right,mid;
	printf("输入需要数组个数:\n");
	scanf("%d",&n);
	printf("输入有序数组:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("请输入要查找的数\n");
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
			printf("找到了\n下标是:%d\n",mid);
			break;
		}

	}
	if(left>right)
	{
		printf("没找到\n");
	}
	return 0;
}