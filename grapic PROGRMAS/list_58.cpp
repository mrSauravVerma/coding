#include <stdio.h>
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Set the color for the body
    circle(200,70,20);
    
    setcolor(YELLOW);
    // Draw the head
    circle(200, 170, 50);

    // Draw the body
    line(200, 220, 200, 300);
    line(200, 250, 150, 300);
    line(200, 250, 250, 300);
	
	circle(150,307,7);
	circle(250,307,7);
    // Set the color for the face
    setcolor(RED);

    // Draw the eyes
    circle(180, 140, 5);
    circle(220, 140, 5);

    // Draw the smile
    line(180, 160, 220, 160);
    arc(200, 160, 190, 350, 20);

    // Set the color for the arms and legs
    setcolor(BLUE);

    // Draw the legs
    line(200, 300, 150, 350);
    line(200, 300, 250, 350);

    getch();
    closegraph();
    return 0;
}
