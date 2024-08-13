#include<graphics.h>
#include<conio.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
    line(300,200,100,400);
	line(100,400,500,400);
	line(500,400,300,200);
	getch();
	closegraph();
}
