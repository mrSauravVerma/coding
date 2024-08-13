#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x = 100, y = 400, radius = 200;
    int colors[] = { RED,ORANGE, GREEN, BLUE };
    int numColors = 4;

    for (int i = 0; i < 4; i++) {
        setcolor(colors[i]);
        arc(x, y, 90, 180, radius);
        radius -= 30; // Reduce radius for each arc
    }

    getch();
    closegraph();
    return 0;
}

