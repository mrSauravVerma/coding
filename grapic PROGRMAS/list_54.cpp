#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Draw the outer boundary
    rectangle(50, 50, getmaxx() - 50, getmaxy() - 50);

    // Draw the center circle
    circle(getmaxx()/2, getmaxy()/2, 50);

    // Draw the goal boxes
    rectangle(50, getmaxy()/2 - 50, 100, getmaxy()/2 + 50);
    rectangle(getmaxx() - 100, getmaxy()/2 - 50, getmaxx() - 50, getmaxy()/2 + 50);

    getch();
    closegraph();

    return 0;
}

