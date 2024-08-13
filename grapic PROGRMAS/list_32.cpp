#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Draw bars on screen
    bar(100, 200, 140, 450);
    
    bar(160, 150, 200, 450);
    
    bar(220, 180, 260, 450);

	bar(280, 220, 320, 450);
    getch();
    closegraph();

    return 0;
}

