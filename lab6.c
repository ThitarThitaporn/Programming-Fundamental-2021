#include<stdio.h>
#include<windows.h>
#include<conio.h>
#define left 1
#define right 2
#define stop 3
#define OFF 4
#define ON 5

//function//
void gotoxy(int x, int y) 
{
	COORD c = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);  
}
void setcursor(bool visible) 
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE); 
	CONSOLE_CURSOR_INFO lpCursor;
	lpCursor.bVisible = visible;
	lpCursor.dwSize = 20;
	SetConsoleCursorInfo(console, &lpCursor);
}
void setcolor(int fg, int bg) 
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, bg * 16 + fg);
}
void draw_ship(int x, int y) 
{
	gotoxy(x, y);
	setcolor(2, 4);
	printf("<-0->");
}
void erase_ship(int x, int y) 
{
	gotoxy(x, y);
	setcolor(0, 0);
	printf("       ");
}
void draw_bullet(int x, int y) 
{
	gotoxy(x, y);
	setcolor(2, 2);
	printf("|");	
}
void erase_bullet(int x, int y) 
{
	gotoxy(x, y);
	setcolor(0, 0);
	printf(" ");
}

int main()
{
	char ch = '.';
	int x = 38, y = 20;
	int direction = stop;
	int bx[5], by[5], i = 0, status[5] = { 0,0,0,0,0 }; 

	setcursor(0);
	draw_ship(x, y);
	do {
		if (_kbhit()) { 
			ch = _getch();
			if (ch == 'a' && x != 0) { direction = left; }
			if (ch == 'd' && x != 72) { direction = right; }
			if (ch == 's') { direction = stop; }

			if (ch == ' ' && status[i]==0) 
			{ 
				status[i] = 1;  
				bx[i] = x + 2; 
				by[i] = y -1; 
				i++;
				if (i > 4) {i = 0;} 

				
			}
			fflush(stdin); 
		}
		
		if (direction == left && x != 0) {
			erase_ship(x, y);
			draw_ship(--x, y);
		}
		else if (direction == right && x != 72) {
			erase_ship(x, y);
			draw_ship(++x, y);
		}
		else if (direction == stop) {
			draw_ship(x, y);
		}

		
		for (int i = 0; i < 5; i++) {
			if (status[i] == 1 && by[i] > 0) {
				erase_bullet(bx[i], by[i]);
				draw_bullet(bx[i], --by[i]);
			}
			else if (by[i] <= 0) {
				status[i] = 0;
				erase_bullet(bx[i], by[i]);
			}
		}
		Sleep(100);
	} while (ch != 'x');
	return 0;
}