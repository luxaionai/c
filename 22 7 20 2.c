#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>
void game()
{ 
	int ret;
	int guess;
	ret=rand()%100+1;
	while(1)
	{
		printf("输入猜的数字:\n");
		scanf("%d",&guess);
		if(guess>ret)
		{
			printf("猜大了\n");
		}
		else if(guess<ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
		Sleep(1000);
		system("cls");
	}

}
void menu()
{
	printf("********************************\n");
	printf("***    play:1      end:0     ***\n");
	printf("********************************\n");
}
int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:\n");
		scanf("%d",&input);
		Sleep(1000);
		system("cls");
		switch(input)
		{
		case 1:
			game ();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	}
	while(input);
	return 0;
}