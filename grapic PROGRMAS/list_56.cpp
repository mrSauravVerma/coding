#include <graphics.h>
#include <dos.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    for(int i=0; i<getmaxx(); i++) {
        // Draw the bird
        line(i, 200, i+20, 220);
        line(i, 200, i+20, 180);
        line(i+20, 220, i+40, 200);
        line(i+20, 180, i+40, 200);

        delay(1);
        cleardevice();
    }

    getch();
    closegraph();

    return 0;
}

