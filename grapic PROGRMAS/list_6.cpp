#include<graphics.h>
#include<conio.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	
	lineto(400,200);
	lineto(400,400);
	lineto(200,400);
	lineto(200,200);
	
	getch();
	closegraph();
}
