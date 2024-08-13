#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Draw the lock body
	circle(250, 250, 70);
    // Draw the lock shackle
    arc(250, 190, 350, 190, 50);
    rectangle(247,247,252,280);

	arc(400, 200, 300, 240, 30);
	rectangle(390,220,410,350);
	rectangle(410,320,440,350);
    getch();
    closegraph();

    return 0;
}

