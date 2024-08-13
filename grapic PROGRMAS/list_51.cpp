#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Draw the pencil body
    setcolor(YELLOW);
    rectangle(100, 200, 200, 220);

    // Draw the pencil tip
    setcolor(BROWN);
    line(200, 200, 220, 210);
    line(200, 220, 220, 210);

    getch();
    closegraph();

    return 0;
}

