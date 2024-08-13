#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
    outtextxy(10, 10, "Default font");

    settextstyle(TRIPLEX_FONT, HORIZ_DIR, 4);
    outtextxy(10, 50, "Triplex font");

    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 2);
    outtextxy(10, 100, "Sans serif font");

    getch();
    closegraph();

    return 0;
}

