#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    setcolor(WHITE);

    // Draw house
    line(320, 240, 320, 440); // Vertical line
    circle(320, 240, 20);     // Roof
    line(320, 320, 270, 370); // Left side of the roof
    line(320, 320, 370, 370); // Right side of the roof
    line(320, 440, 270, 480); // Left side of the house
    line(320, 440, 370, 480); // Right side of the house

    getch();
    closegraph();
    return 0;
}

