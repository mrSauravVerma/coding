#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Set line color to white
    setcolor(WHITE);

    // Draw the pot
    circle(200, 300, 50); // Bottom part of the pot
    line(150, 250, 250, 250); // Top part of the pot

    // Draw the flower
    circle(200, 200, 20); // Center of the flower
    line(200, 180, 200, 150); // Stem
    line(180, 190, 220, 190); // Petal left-right
    line(190, 180, 190, 220); // Petal up-down

    getch();
    closegraph();
    
    return 0;
}

