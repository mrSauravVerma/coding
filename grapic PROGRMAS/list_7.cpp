#include<graphics.h>
#include<conio.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	
	moveto(200,200);
	lineto(400,200);	
	moveto(200,400);
	lineto(400,400);
	getch();
	closegraph();
	return 0;
}
