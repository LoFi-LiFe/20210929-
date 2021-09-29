#include <iostream>
#include <conio.h>

using namespace std;

void Input();
void Process();
void Draw();

// 1. 지도를 초기화 한다.
char Map[10][10] = 
{
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1},
};

int PlayerX = 1;
int PlayerY = 1;

bool bIsRunning = true;
char Key;

int main()
{
	while (bIsRunning)//반복하기위해 작성
	{
		Input();
		Process();
		Draw();
	}
	return 0;

}

void Input()
{
		// 2. 입력을 받는다.
		Key = _getch();
		
}

void Process()
{
	// 3. 처리한다.
		//	  플레이어를 움직인다.
	switch (Key)
	{
		case 'w':
		case 'W':
		{
			PlayerY--;
			break;
		}

		case 's':
		case 'S':
		{
			PlayerY++;
			break;
		}

		case 'a':
		case 'A':
		{
			PlayerX--;
			break;
		}

		case 'd':
		case 'D':
		{
			PlayerX++;
			break;
		}
		case 'q':
		case 'Q':
		{
			bIsRunning = false;
			break;
		}
	}
}

void Draw()
{
	// 4. 지도를 그린다.
	system("cls");//화면을 지운다.
	for (int Y = 0; Y < 10; ++Y)
	{
		for (int X = 0; X < 10; ++X)
		{
			if (PlayerX == X && PlayerY == Y)
			{
				cout << "P" << " ";
			}
			else if (Map[X][Y] == 0)
			{
				cout << " " << " ";
			}
			else if (Map[X][Y] == 1)
			{
				cout << "X" << " ";
			}
		}
		cout << endl;
	}
}
