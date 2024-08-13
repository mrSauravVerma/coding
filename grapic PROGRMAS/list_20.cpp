#include <graphics.h>
#include<conio.h>
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Get the current cursor position
    int x,y;
     x = getx();
     y = gety();

    // Get the maximum x and y coordinates
    int maxx = getmaxx();
    int maxy = getmaxy();

    // Draw a line from the current position to the maximum coordinates
    line(x, y, maxx, maxy);

    getch();
    closegraph();
    return 0;
}
