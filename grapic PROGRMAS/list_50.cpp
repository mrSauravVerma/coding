#include <graphics.h>
#include <dos.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    int x = getmaxx()/2;
    int y = 30;
    int dy = 1;

    while(!kbhit()) {
        setcolor(BLACK);
        circle(x, y, 30);

        y += dy;
        if(y > getmaxy() - 30 || y < 30) dy = -dy;

        setcolor(RED);
        circle(x, y, 30);

        delay(10);
    }

    getch();
    closegraph();

    return 0;
}

