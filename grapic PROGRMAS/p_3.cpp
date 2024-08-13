//      3

#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Set line color to white
    setcolor(WHITE);

    // Draw a line from (100, 100) to (300, 200)
    line(100, 100, 300, 200);

    getch();
    closegraph();

    return 0;
}

