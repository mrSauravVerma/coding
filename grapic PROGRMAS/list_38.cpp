#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Draw slices of the pie chart
    pieslice(200, 200, 0, 75, 100);
    pieslice(200, 200, 75, 150, 100);
    pieslice(200, 200, 150, 225, 100);
    pieslice(200, 200, 225, 360, 100);

    getch();
    closegraph();

    return 0;
}

