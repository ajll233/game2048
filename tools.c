#include "tools.h"
#include "game2048.h"

//判断是否满
static bool is_full(void)
{
	int* num =(int*) view;
	for(int i=0;i<16;i++)
	{
		if(0==num[i])return false;
	}
	return true;
}


//检查是否输掉比赛
bool is_die(void)
{
	if(!is_full()) return false;
	for(int j=0;j<4;j++)
	{
		for(int i=0;i<3;i++)
		{
			if(view[i][j]==view[i+1][j])
			return false;
		}
	}
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(view[i][j]==view[i][j+1])
			return false;
		}
	}
	return true;
}


//生成为2的随机数
void rand_two(void)
{
	if(is_full())
	{
		debug("没有空位\n");
		return;
	}
	for(;is_move_merge;)
	{
		int x=rand()%4;
		int y=rand()%4;
		if(view[x][y]==0)
		{
			view[x][y]=2;
			return;
		}
	}
	
}
//展示游戏界面
void show_view(void)
{
	system("clear");
	for(int i=0;i<4;i++)
	{
		printf("---------------------\n");
		for(int j=0;j<4;j++)
		{
			if(view[i][j])
			printf("|%4d",view[i][j]);
			else
			{
				printf("|    ");
			}
		}
		printf("|\n");
	}
	printf("---------------------\n");
}
