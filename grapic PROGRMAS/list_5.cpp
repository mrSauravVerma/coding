#include<graphics.h>
#include<conio.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
    line(200,400,350,100);
	line(350,100,500,400);
	line(500,400,200,200);
	line(200,200,500,200);
	line(500,200,200,400);
	getch();
	closegraph();
}
