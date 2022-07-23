#include<stdio.h>
#include<string.h>
int main()
{
	int i=0;
	char passward[20];
	for(i=0;i<3;i++)
	{
		printf("ÇëÊäÈëÃÜÂë:\n");
		scanf("%s",&passward);
		if(strcmp(passward,"123456")==0)
		{
			printf("µÇÂ¼³É¹¦\n");
			break;
		}
		else
		{
			printf("ÃÜÂë´íÎó!\n");
		}
	}
	if(i==3)
	{
		printf("µÇÂ¼Ê§°Ü\n");
	}
	return 0;
}