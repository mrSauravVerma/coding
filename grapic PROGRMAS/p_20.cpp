#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Draw the face
    circle(200, 200, 100);

    // Draw the eyes
    circle(170, 170, 10); // Left eye
    circle(230, 170, 10); // Right eye

    // Draw the frown
    arc(200, 270, 30, 150, 50);

    getch();
    closegraph();
    
    return 0;
}

