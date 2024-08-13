#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Draw a circle at (100, 100) with radius 20
    circle(100, 100, 20);

    // Move the circle to the right
    for (int x = 100; x < getmaxx(); x += 10) {
        delay(100); // Delay for visibility
        cleardevice(); // Clear the screen
        circle(x, 100, 20); // Draw the circle at the new position
    }

    getch();
    closegraph();
    return 0;
}
