#include "direction.h"
//向上
void up(void)
{
	for(int j=0;j<4;j++)
	{
		int end=0;
		for(int i=1;i<4;i++)
		{
			for(int k=i;k>end;k--)
			{
				if(view[k][j]&&view[k-1][j]==0)
				{
					view[k-1][j]=view[k][j];
					view[k][j]=0;
					is_move_merge=true;
				}
				else if(view[k][j]&&view[k][j]==view[k-1][j])
				{
					view[k-1][j]*=2;
					view[k][j]=0;
					end=k;	
					is_move_merge=true;
				}
			}
		}
	}
}

//向下
void down(void)
{
	for(int j=0;j<4;j++)
	{
		int end=3;
		for(int i=2;i>=0;i--)
		{
			for(int k=i;k<end;k++)
			{
				if(view[k][j]&&view[k+1][j]==0)
				{
					view[k+1][j]=view[k][j];
					view[k][j]=0;
					is_move_merge=true;
				}
				else if(view[k][j]&&view[k][j]==view[k+1][j])
				{
					view[k+1][j]*=2;
					view[k][j]=0;
					end=k;	
					is_move_merge=true;
				}
			}
		}
	}
}
//向左
void left(void)
{
	for(int i=0;i<4;i++)
	{
		int end=0;
		for(int j=1;j<4;j++)
		{
			for(int k=j;k>end;k--)
			{
				if(view[i][k]&&view[i][k-1]==0)
				{
					view[i][k-1]=view[i][k];
					view[i][k]=0;
					is_move_merge=true;
				}
				else if(view[i][k]&&view[i][k]==view[i][k-1])
				{
					view[i][k-1]*=2;
					view[i][k]=0;
					end=k;
					is_move_merge=true;	
				}
			}
		}
	}
}
//向右
void right(void)
{
	for(int i=0;i<4;i++)
	{
		int end=3;
		for(int j=2;j>=0;j--)
		{
			for(int k=j;k<end;k++)
			{
				if(view[i][k]&&view[i][k+1]==0)
				{
					view[i][k+1]=view[i][k];
					view[i][k]=0;
					is_move_merge=true;
				}
				else if(view[i][k]&&view[i][k]==view[i][k+1])
				{
					view[i][k+1]*=2;
					view[i][k]=0;
					end=k;
					is_move_merge=true;	
				}
			}
		}
	}
}
