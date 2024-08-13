#include <graphics.h>

int main() {

	int gd = DETECT, gm;

	initgraph(&gd, &gm, NULL);

	setcolor (BLUE);

	rectangle(100, 100, getmaxx(), getmaxy());

	setcolor (WHITE);

	outtextxy(10, 10, "Turbo C++");

	getch();

	closegraph();

	return 0;
}
