#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

	line(250,100,150,200);
	line(250,100,350,200);
	line(150,200,270,350);
	line(350,200,220,350);
	
	line(250,100,250,320);
	
	line(220,350,270,350);
	
	arc(250,300,45,135,140);
    getch();
    closegraph();
    
    return 0;
}

