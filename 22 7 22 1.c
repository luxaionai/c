#include<stdio.h>//���ֲ���
int binary_search(int arr[],int k,int sz)
{ 
	int left=0,right=sz-1;
	while(left<=right)
	{
		int mid=(left+right)/2;
		if(arr[mid]<k)
		{
			left=mid+1;
		}
		else if(arr[mid]>k)
		{
			right=mid-1;
		}
		else
		{
			return mid+=1;
			break;
		}
	
	}
	return -1;
}
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int k=1;
	int sz =sizeof(arr)/sizeof(arr[0]);
	int ret=binary_search(arr,k,sz);//arr����ȥ������Ԫ�ص�ַ����������һ��ָ��
	if(ret==-1)
	{
		printf("�Ҳ���ָ����\n");
	}
	else
		printf("�ҵ���\n");
	return 0;
}