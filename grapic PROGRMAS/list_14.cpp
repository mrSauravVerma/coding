#include<graphics.h>
#include<conio.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	bar(50,400,100,300);
	bar(150,400,200,200);
	bar(250,400,300,250);
	bar(350,400,400,200);
	getch();
	closegraph();
}
