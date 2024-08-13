#include<graphics.h>
#include<conio.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	rectangle(100,200,300,300);
	rectangle(170,240,230,300);
	line(200,240,200,300);
	rectangle(185,170,215,150);
	line(100,200,200,100);
	line(200,100,300,200);
	line(200,100,400,100);
	line(220,120,420,120);
	line(240,140,440,140);
	line(260,160,460,160);
	line(280,180,480,180);
	line(400,100,500,200);
	rectangle(300,200,500,300);
	rectangle(370,230,440,270);
	getch();
	closegraph();
}
