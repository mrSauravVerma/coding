#include<graphics.h>
#include<conio.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	outtextxy(250,200,"saurav verma");
	getch();
	closegraph();
}
