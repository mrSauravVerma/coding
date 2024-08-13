#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Draw the face
    circle(200, 200, 100);

    // Draw the eyes
    circle(170, 170, 10); // Left eye
    circle(230, 170, 10); // Right eye

    // Draw the smile
    arc(200, 200, 220, 320, 50);

    getch();
    closegraph();
    
    return 0;
}

