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
		printf("����µ�����:\n");
		scanf("%d",&guess);
		if(guess>ret)
		{
			printf("�´���\n");
		}
		else if(guess<ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
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
		printf("��ѡ��:\n");
		scanf("%d",&input);
		Sleep(1000);
		system("cls");
		switch(input)
		{
		case 1:
			game ();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	}
	while(input);
	return 0;
}