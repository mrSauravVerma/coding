//     1

#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Set line color to white
    setcolor(WHITE);

    // Draw a horizontal line from (100, 200) to (500, 200)
    for (int x = 100; x <= 500; x++) {
        putpixel(x, 200, WHITE);
    }

    getch();
    closegraph();

    return 0;
}

