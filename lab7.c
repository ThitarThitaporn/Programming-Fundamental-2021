#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<time.h>
#define left 1
#define right 2
#define stop 3
#define OFF 4
#define ON 5

//function//
void gotoxy(int x, int y) //direction of movement
{
	COORD c = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void setcursor(bool visible) //set console
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE); //set console
	CONSOLE_CURSOR_INFO lpCursor; //like define varianle
	lpCursor.bVisible = visible; 
	lpCursor.dwSize = 20; //text size
	SetConsoleCursorInfo(console, &lpCursor); //put the setting in 2 line above
}
void setcolor(int fg, int bg) //use set color before printf
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, bg * 16 + fg); //set fg& bg
}

char cursor(int x, int y) //tell char at x,y
{
	HANDLE hStd = GetStdHandle(STD_OUTPUT_HANDLE);
	char buf[2]; COORD c = { x,y }; DWORD num_read;
	if (!ReadConsoleOutputCharacter(hStd, (LPTSTR)buf, 1, c, (LPDWORD)&num_read))
		return '\0';      //nothing at x,y
	else
		return buf[0];    //return ASCII code
}

void draw_ship(int x, int y) //draw ship
{
	gotoxy(x, y);
	setcolor(2, 4);
	printf("<-0->");
}

void erase_ship(int x, int y) //erase ship
{
	gotoxy(x, y);
	setcolor(0, 0);
	printf("       ");
}

void draw_bullet(int x, int y) //draw bullet
{
	gotoxy(x, y);
	setcolor(4, 0);
	printf("^");

}
void erase_bullet(int x, int y) // erase bullet 
{
	gotoxy(x, y);
	setcolor(0, 0);
	printf(" ");
}

void draw_star(int x, int y)
{
	gotoxy(x, y);
	setcolor(2, 0);
	printf("*");
}

//main!
int main()
{
	char ch = '.';
	int x = 38, y = 20,direction = stop;
	int bx[5], by[5], i = 0, status[5] = { 0,0,0,0,0 }; //set array of bullet
	int sx, sy, n = 1,score = 0;
	srand(time(NULL));
	setcursor(0);
	draw_ship(x, y);
	do{
		//score
		gotoxy(75, 0);
		setcolor(7, 0);
		printf("score = %d", score);

		//draw ship & check key press 

		if (_kbhit()) { 
			ch = _getch();
			if (ch == 'a' && x != 0) { direction = left; }
			if (ch == 'd' && x != 72) { direction = right; }
			if (ch == 's') { direction = stop; }


			if (ch == ' ' && status[i] == 0) //check status of bullet
			{
				//status = on
				status[i] = 1; //stutus of each bullet
				bx[i] = x + 2; //  location bullet
				by[i] = y - 1; // location bullet
				i++;
				if (i > 4) { i = 0; } //set bullet 5 above to 0-4 only
			}
			fflush(stdin); // delete the value in keyboard
		}
		//check bulllet status
		for (int i = 0; i < 5; i++)
		{
			if (status[i] == 1 && by[i] > 0)//status = on
			{

				Beep(700, 100);
				erase_bullet(bx[i], by[i]);
				if (cursor(bx[i], by[i] - 1) == '*')//bullet crash star
				{
					Beep(700, 300);
					erase_bullet(bx[i], --by[i]);
					status[i] = 0; //delete bullet
					score += 1;
					n--;
				}
				else
				{
					draw_bullet(bx[i], --by[i]); //bullet go up
				}
			}
			else if (by[i] <= 0)
			{
				status[i] = 0;//status = off
				erase_bullet(bx[i], by[i]);
			}
		}
		// check ship direction
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
		//randon star
		sx = 10 + rand() % 61;
		sy = 2 + rand() % 4;
		if (n <= 20 && cursor(sx, sy) != '*')
		{
			draw_star(sx, sy);
			n++;
		

		}


		Sleep(100);
	} while (ch != 'x');
	return 0;
}