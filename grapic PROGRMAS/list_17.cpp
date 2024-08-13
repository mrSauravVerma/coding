#include<graphics.h>
#include<conio.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	fillellipse(200,200,100,50);
	getch();
	closegraph();
	return 0;
}
