#include<graphics.h>
#include<conio.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	putpixel(200,300,RED);
	getch();
	closegraph();
	return 0;
}
