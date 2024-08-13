#include<graphics.h>
#include<conio.h>
int main()
{						
	int gd=DETECT,gm;     
	initgraph(&gd,&gm,"");
	line(100,300,400,300);
	line(100,300,270,200);
	line(270,200,400,300);
	line(100,300,270,400);	
	line(270,400,400,300);	
	setfillstyle(SOLID_FILL,RED);
	floodfill(120,295,WHITE);
	
  	ellipse(205,300,318,40,90,150);	
	line(70,270,100,300);
	line(70,330,100,300);
	line(70,270,70,330);
	
	setfillstyle(SOLID_FILL,BLUE);
	floodfill(80,295,WHITE);
	getch();
	closegraph();
}
