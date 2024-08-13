#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Define the points for the polygon
    int poly[14] = {100, 100, 150, 50, 200, 100, 200, 200, 150, 250, 100, 200, 100, 100};

    // Draw the polygon
    drawpoly(7, poly);

    // Fill the polygon
    setfillstyle(SOLID_FILL, RED);
    fillpoly(7, poly);

    getch();
    closegraph();

    return 0;
}

