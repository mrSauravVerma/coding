#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    
    rectangle(100, 100, 200, 150);
    setfillstyle(SOLID_FILL, RED);
    floodfill(101, 101, WHITE);
    
    circle(300, 150, 50);
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(300, 150, WHITE);
    
    ellipse(150, 250, 0, 360, 50, 25);
    setfillstyle(SOLID_FILL, BLUE);
    floodfill(150, 250, WHITE);
    
    getch();
    closegraph();
}
