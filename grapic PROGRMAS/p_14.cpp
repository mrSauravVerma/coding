#include <graphics.h>
#include <math.h> // for cos() and sin() functions

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Set fill colors and draw the saffron (top) band
    setfillstyle(SOLID_FILL,LIGHTRED);
    bar(100,100, 400,150);

    // Draw the white band
    setfillstyle(SOLID_FILL, WHITE);
    bar(100,150, 400,200);

    // Draw the green (bottom) band
    setfillstyle(SOLID_FILL, GREEN);
    bar(100,200, 400,250);

    // Set color for the Ashok Chakra
    setcolor(BLUE);
    setfillstyle(SOLID_FILL, BLUE);
	fillellipse(250,175,25,25);
	circle(250,175,25);
	
	setcolor(BROWN);	
	rectangle(100,100,110,700);
    setfillstyle(SOLID_FILL, BROWN);
    floodfill(101,101,BROWN);
    
    getch();
    closegraph();
    
    return 0;
}

