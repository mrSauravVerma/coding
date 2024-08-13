#include<graphics.h>
#include<conio.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	line(100,200,250,300);
	getch();
	closegraph();
}
