#include<graphics.h>
#include<conio.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	bar(200,200,400,400);
	getch();
	closegraph();
}
