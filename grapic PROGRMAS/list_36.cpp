#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Draw a rectangle
    rectangle(200, 200, 400, 400);

    // Set fill style
    setfillstyle(SOLID_FILL, RED);

    // Use floodfill to fill the rectangle
    floodfill(250, 250, WHITE);

    getch();
    closegraph();

    return 0;
}

