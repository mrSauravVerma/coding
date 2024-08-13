
#include <graphics.h>
#include <time.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    while(!kbhit()) {
        cleardevice();

        time_t now = time(0);
        struct tm *timeStruct = localtime(&now);

        char timeStr[9];
        strftime(timeStr, 9, "%H:%M:%S", timeStruct);

        outtextxy(getmaxx()/2 - textwidth(timeStr)/2, getmaxy()/2 - textheight(timeStr)/2, timeStr);

        delay(1000);
    }

    getch();
    closegraph();

    return 0;
}

