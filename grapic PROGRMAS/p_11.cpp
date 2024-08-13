//       11

#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    
    // Set fill color to white
    setfillstyle(SOLID_FILL, WHITE);

	bar(100,100,150,400);
	bar(200,200,250,400);
	bar(300,300,350,400);
	bar(400,150,450,400);
    getch();
    closegraph();
    return 0;
}

