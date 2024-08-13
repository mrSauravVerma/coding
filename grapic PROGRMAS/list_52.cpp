#include <graphics.h>

int main() {

    int gd = DETECT, gm;

    initgraph(&gd, &gm, NULL);

  line(200,200,250,420);
  line(300,200,250,420);
  line(200,200,300,200);
  arc(250,210,10,170,50);
    getch();

    closegraph();

    return 0;
}

