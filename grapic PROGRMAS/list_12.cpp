#include<graphics.h>
#include<conio.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	arc(300,200,180,360,100);
	getch();
	closegraph();
}
