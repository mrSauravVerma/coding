#include <graphics.h>
#include <dos.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    for(int radius = 0; radius < 200; radius++) {
        circle(getmaxx()/2, getmaxy()/2, radius);
        delay(50);
        cleardevice();
    }

    getch();
    closegraph();

    return 0;
}

