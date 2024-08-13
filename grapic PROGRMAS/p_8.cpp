//     8

#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Set text color to white
    setcolor(WHITE);

    // Output text using outtextxy()
    outtextxy(100, 100, "Hello, World!");

    getch();
    closegraph();

    return 0;
}

