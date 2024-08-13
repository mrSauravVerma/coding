#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Draw the pitch
    rectangle(getmaxx()/2 - 20, 50, getmaxx()/2 + 20, getmaxy() - 50);

    // Draw the creases
    line(getmaxx()/2 - 30, 80, getmaxx()/2 + 30, 80);
    line(getmaxx()/2 - 30, getmaxy() - 80, getmaxx()/2 + 30, getmaxy() - 80);

    getch();
    closegraph();

    return 0;
}

