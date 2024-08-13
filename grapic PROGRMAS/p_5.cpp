//     5

#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Set line color to white
    setcolor(WHITE);

    // Draw a Triangle
    line(200, 100, 100, 300); // Left line
    line(100, 300, 300, 300); // Bottom line
    line(300, 300, 200, 100); // Right line

    getch();
    closegraph();
    return 0;
}

