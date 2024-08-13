#include <graphics.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    srand(time(NULL));
	for(int i=0 ; i<3 ; i++){
        int x = rand() % getmaxx();
        int y = rand() % getmaxy();
        int radius = rand() % 100;
        
        circle(x, y, radius);
    }

    getch();
    closegraph();

    return 0;
}

