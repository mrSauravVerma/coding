#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Use the current time as the seed for the random number generator
    srand(time(NULL));

    for (int i = 0; i < 100; i++)
	{
        int x = rand() % getmaxx();
        int y = rand() % getmaxy();
        putpixel(x, y, WHITE);
    }

    getch();
    closegraph();
    return 0;
}
