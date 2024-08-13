#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    // Draw the flag pole
	rectangle(140, 500, 144, 130);
    // Draw the flag
    setcolor(RED);
    rectangle(150, 140, 350, 250);
    setfillstyle(SOLID_FILL, RED);
    floodfill(151, 141, RED);
    
    setcolor(WHITE);
    rectangle(150, 200, 350, 300);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(151, 201, WHITE);
    
    setcolor(GREEN);
    rectangle(150, 250, 350, 310);
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(151, 251, GREEN);

    // Draw the symbol on the flag
    setcolor(BLUE);
    circle(250, 225, 25);

    getch();
    closegraph();

    return 0;
}
