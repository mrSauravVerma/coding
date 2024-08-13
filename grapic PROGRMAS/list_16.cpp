#include<graphics.h>
#include<conio.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	circle(200,200,3);
	ellipse(200,200,0,360,100,50);
	getch();
	closegraph();
}

