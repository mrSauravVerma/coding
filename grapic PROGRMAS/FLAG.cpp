#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw the flag pole
    setcolor(RED);
    rectangle(190,50,200,700);
    setfillstyle(SOLID_FILL, RED);
    floodfill(191,51, RED);

    // Draw the flag
    setcolor(RED);
    rectangle(200, 50, 500, 100);
    setfillstyle(SOLID_FILL, LIGHTRED);
    floodfill(201, 51, RED);

    setcolor(WHITE);
    rectangle(200, 100, 500, 150);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(201, 101, WHITE);

    setcolor(GREEN);
    rectangle(200, 150, 500, 200);
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(201, 151, GREEN);

    // Draw the Ashoka Chakra
    setcolor(BLUE);
    setfillstyle(SOLID_FILL, BLUE);
    fillellipse(350, 125, 25, 25);

    // Draw the 24 spokes
    setcolor(WHITE);
    for (int i = 0; i < 24; i++)
    {
        double angle = 15 * i * 3.14159 / 180;
        line(350, 125,( 350 + 25 * cos(angle)), (125 + 25 * sin(angle)));
    }

    getch();
    closegraph();
    return 0;
}
