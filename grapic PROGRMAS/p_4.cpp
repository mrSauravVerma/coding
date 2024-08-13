//      4

#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Set line color to white
    setcolor(WHITE);

    // Draw a rectangle with top-left corner at (100, 100)
    line(100, 100, 300, 100); // Top line
    line(300, 100, 300, 200); // Right line
    line(300, 200, 100, 200); // Bottom line
    line(100, 200, 100, 100); // Left line

    getch();
    closegraph();
    return 0;
}

