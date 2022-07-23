#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
	char arr1[]="we come to renshou!!!!!";
	char arr2[]="#######################";
	int left=0,right=strlen(arr1)-1;
	while(left<=right)
	{
		arr2[left]=arr1[left];
		arr2[right]=arr1[right];
		left++;
		right--;
		printf("%s\n",arr2);
		Sleep(1000);
		system("cls");
	}
	printf("%s\n",arr2);
	return 0;
}











