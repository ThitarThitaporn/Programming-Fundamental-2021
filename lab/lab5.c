#include<stdio.h>
#include<windows.h>
#include<conio.h>
#define left 1
#define right 2
#define stop 3

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
void setcolor(int fg, int bg) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, bg * 16 + fg);
}
void erase_ship(int x, int y) {
	gotoxy(x, y);
	setcolor(0, 0);
	printf("       ");
}

void draw_ship(int x, int y)
{
	gotoxy(x, y); 
	setcolor(2, 4);
	printf("<-0->");
}


int main()
{
	char ch = '.';
	int x = 38, y = 20;
	int direction = stop;
	
	draw_ship(x, y);
	setcursor(0);
	do {
		if (_kbhit()) {
			ch = _getch();
			if (ch == 'a' &&  x!=0) { direction = left;}
			if (ch == 'd' && x!=72) { direction = right;}
			if(ch == 's' )	{ direction = stop;}

		
		}
		if (direction == left && x != 0) {
			erase_ship(x, y);
			draw_ship(--x, y);
		}
		else if (direction == right && x != 72) {
			erase_ship(x, y);
			draw_ship(++x, y);
		}

		Sleep(100);
	} while (ch != 'x');
	return 0;
}
