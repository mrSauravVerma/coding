#include<graphics.h>
#include<conio.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	rectangle(200,200,600,400);	
	getch();
	closegraph();
}
