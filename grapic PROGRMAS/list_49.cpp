#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    setcolor(RED);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
    outtextxy(10, 10, "Red default font");

    setcolor(GREEN);
    settextstyle(TRIPLEX_FONT, HORIZ_DIR, 4);
    outtextxy(10, 50, "Green triplex font");

    setcolor(BLUE);
    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 2);
    outtextxy(10, 100, "Blue sans serif font");

    getch();
    closegraph();

    return 0;
}

