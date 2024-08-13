//        6

#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Set line color to white
    setcolor(WHITE);

    // Draw a star
    line(200, 100, 100, 400); // Top-left line
    line(200, 100, 300, 400); // Top-right line
    line(300, 400, 100, 200); // Bottom-left line
    line(100, 200, 300, 200); // Bottom-center line
    line(300, 200, 100, 400); // Bottom-right line

    getch();
    closegraph();

    return 0;
}

