#include <graphics.h>
#include <math.h>

#define PI 3.14159265

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    for(int i=0; i<getmaxx(); i++) {
        int y = 50 * tan(i * PI / 180);
        if(y > getmaxy()/2 || y < -getmaxy()/2) continue;
        putpixel(i, getmaxy()/2 - y, WHITE);
    }

    getch();
    closegraph();

    return 0;
}

