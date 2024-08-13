#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

	rectangle(100,250,500,400);
	
	line(200,250,200,400);
	line(150,250,150,400);	
	line(200,250,150,150);
	line(150,150,100,250);	
	line(150,150,450,150);
	line(450,150,500,250);
	
	rectangle(300,300,400,350);
    getch();
    closegraph();
    
    return 0;
}

