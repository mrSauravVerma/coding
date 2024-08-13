//     10

#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Draw a filled rectangle using bar()
    bar(100, 100, 200, 200);

    // Draw a 3D rectangle using bar3d()
    bar3d(300, 100, 400, 200, 30, 1);

    getch();
    closegraph();

    return 0;
}

