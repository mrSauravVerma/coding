#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Draw a pie slice
    setfillstyle(SOLID_FILL, RED);
    pieslice(200, 200, 0, 90, 100);

    getch();
    closegraph();

    return 0;
}

