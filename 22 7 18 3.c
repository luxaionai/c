#include<stdio.h>
#include<string.h>
int main()
{
	int i=0;
	char passward[20];
	for(i=0;i<3;i++)
	{
		printf("����������:\n");
		scanf("%s",&passward);
		if(strcmp(passward,"123456")==0)
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������!\n");
		}
	}
	if(i==3)
	{
		printf("��¼ʧ��\n");
	}
	return 0;
}