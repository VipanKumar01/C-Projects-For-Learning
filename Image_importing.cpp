#include<graphics.h>
int main()
{
	initwindow(700,700,"pankaj");
//	setbkcolor(RED);
	cleardevice();
	readimagefile("To Do.jpg",200,200,400,400);
	getch();
	closegraph();
}
