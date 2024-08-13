#include<graphics.h>
#include<conio.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	outtext("saurav verma");
	getch();
	closegraph();
}
