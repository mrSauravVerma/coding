#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Draw the car body
    rectangle(100, 150, 200, 200);

    // Draw the wheels
    circle(120, 200, 10);
    circle(180, 200, 10);

    // Move the car to the right
    for (int x = 100; x < getmaxx(); x += 10) {
        delay(100); // Delay for visibility
        cleardevice(); // Clear the screen

        // Draw the car at the new position
        rectangle(x, 150, x + 100, 200);
        circle(x + 20, 200, 10);
        circle(x + 80, 200, 10);
    }

    getch();
    closegraph();
    return 0;
}
