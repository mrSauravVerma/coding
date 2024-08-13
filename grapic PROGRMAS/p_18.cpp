#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Set line color to white
    setcolor(WHITE);
    
    --------------------->   Uncorrect code   <-----------------------

    // Draw the body of the car
    line(100, 200, 300, 200); // Bottom line
    line(100, 200, 100, 150); // Left vertical line
    line(300, 200, 300, 150); // Right vertical line
    line(100, 150, 300, 150); // Top line

    // Draw the arcs for the car roof
    arc(150, 150, 0, 180, 50); // Left arc
    arc(250, 150, 0, 180, 50); // Right arc

    // Draw the wheels
    circle(150, 250, 25); // Left wheel
    circle(250, 250, 25); // Right wheel

    // Draw the windows
    line(150, 150, 250, 150); // Top window line
    line(150, 150, 150, 200); // Left window line
    line(250, 150, 250, 200); // Right window line
    line(150, 200, 250, 200); // Bottom window line

    getch();
    closegraph();
    
    return 0;
}

