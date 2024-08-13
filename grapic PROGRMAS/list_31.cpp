#include <graphics.h>
#include <stdlib.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Coordinates of the pentagon
    int points[] = {320, 150, 370, 200, 350, 275, 290, 275, 270, 200, 320, 150};

    // Draw the pentagon
    drawpoly(6, points);

    getch();
    closegraph();

    return 0;
}

