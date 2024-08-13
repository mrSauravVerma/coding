//    7

#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Set text color to white
    setcolor(RED);

    // Output text using outtext
    outtext("Hello, World!");

    getch();
    closegraph();
    return 0;
}

