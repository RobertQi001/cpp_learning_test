#include <iostream>
#include<time.h>
#include<conio.h>
using namespace std;

void swap(int &, int &);

int win[3][3] =
{
	1,2,3,
	4,5,6,
	7,8,NULL
};

class puzzle
{
public:
	puzzle();
	void display();
	void game();

private:
	int grid[3][3];
};

puzzle::puzzle()
{
	int temp[8] = { 1,2,3,4,5,6,7,8 };
	int t=0;
	for (int i = 0; i < 8; i++)
	{
		int j = rand() % 8;
		swap(temp[i], temp[j]);
	}
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			if(!(i==2&&j==2))
			grid[i][j] = temp[t++];
	grid[2][2] = NULL;
}

void puzzle::display()
{
	for (int i = 0; i < 3; i++)
		for (int j=0; j < 3; j++)
		{
			cout << grid[i][j]<<"  ";
			if (j == 2)
				cout << endl;
		}
}

void puzzle::game()
{
	
		while (1)
		{
			if ((equal(&win[0][0], &win[0][0] + 9, &grid[0][0])))
			{
				cout << "WIN!" << endl;
				break;
			}
			int flag_1 = 0, flag_2 = 0;
			int row_0, col_0;
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
					if (grid[i][j] == NULL)
					{
						row_0 = i; col_0 = j;
						/*cout << row_0 << "  " << col_0 << endl;*/
						flag_1 = 1; break;
					}
				if (flag_1 == 1)
					break;
			}
			//找到空格所在位置
			int ch;
			if (_kbhit())
			{
				ch = _getch();
				system("cls");
				switch (ch)
				{
				case 75:												//left
					if (col_0 != 2)
						swap(grid[row_0][col_0], grid[row_0][col_0 + 1]);
					break;
				case 72:												//up
					if (row_0 != 2)
						swap(grid[row_0][col_0], grid[row_0 + 1][col_0]);
					break;
				case 77:												//right
					if (col_0 != 0)
						swap(grid[row_0][col_0], grid[row_0][col_0 - 1]);
					break;
				case 80:												//down
					if (row_0 != 0)
						swap(grid[row_0][col_0], grid[row_0 - 1][col_0]);
					break;
				case 27:												//Esc
					flag_2 = 1;
					break;
				default:
					break;
				}
				//检测按键

				display();										//显示
				if (flag_2 == 1)
					break;



				/*if(grid[0][0]==1&&grid[0][1]==2&&grid[0][2]==3&&grid[1][0]==4&&grid[1][1]==5&&grid[1][2]==)*/
			}

		}
}

void swap(int &a,int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

 void main()
 {
	 puzzle puzzle1;
	 puzzle1.display();
	 puzzle1.game();
 }