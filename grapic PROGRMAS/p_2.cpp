//     2

#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Set line color to white
    setcolor(WHITE);

    // Draw a vertical line from (200, 100) to (200, 299)
    for (int y = 100; y < 300; y++) {
        putpixel(200, y, WHITE);
    }

    getch();
    closegraph();

    return 0;
}

