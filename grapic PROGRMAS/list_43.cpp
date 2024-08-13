#include <graphics.h>
#include <math.h>

#define PI 3.14

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    for(int i=0; i<getmaxx(); i++) {
        int y = 100 * cos(i * 2 * PI / 180);
        putpixel(i, getmaxy()/2 - y, WHITE);
    }

    getch();
    closegraph();

    return 0;
}

