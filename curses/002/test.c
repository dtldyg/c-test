#include <curses.h>

void main_logic()
{
	move(LINES / 2, COLS / 2);
	// waddstr(stdscr, "Hello, world!");
	getch();
	waddstr(stdscr, "H");
	getch();
	waddstr(stdscr, "e");
	getch();
	waddstr(stdscr, "l");
	getch();
	waddstr(stdscr, "l");
	getch();
	waddstr(stdscr, "o");
	getch();
	waddstr(stdscr, ",");
	getch();
	waddstr(stdscr, "W");
	getch();
	waddstr(stdscr, "o");
	getch();
	waddstr(stdscr, "r");
	getch();
	waddstr(stdscr, "l");
	getch();
	waddstr(stdscr, "d");
	getch();
	waddstr(stdscr, "!");
	getch();
}

int main()
{
	initscr();
	main_logic();
	endwin();
	return 0;
}