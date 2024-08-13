#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Draw lines with different line styles
    setlinestyle(SOLID_LINE, 0, 1);
    line(50, 50, getmaxx() - 50, 50);

    setlinestyle(DOTTED_LINE, 0, 1);
    line(50, 100, getmaxx() - 50, 100);

    setlinestyle(DASHED_LINE, 0, 1);
    line(50, 150, getmaxx() - 50, 150);

    getch();
    closegraph();

    return 0;
}

