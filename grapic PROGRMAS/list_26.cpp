#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Happy Smiley
    circle(200, 200, 100);
    circle(170, 170, 20);
    circle(230, 170, 20);
    arc(200, 200, 225, 315, 50);

    // Sad Smiley
    circle(400, 200, 100);
    circle(370, 180, 20);
    circle(430, 180, 20);
    arc(400, 280, 45, 135, 50);

    getch();
    closegraph();
    return 0;
}

