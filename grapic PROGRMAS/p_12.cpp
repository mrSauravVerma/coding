//        12

#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    
    // Draw an ellipse using ellipse()
    ellipse(200, 200, 0, 360, 100, 50);
    
    // Draw a filled ellipse using fillellipse()
    fillellipse(400, 300, 100, 50);
    
    getch();
    closegraph();
    
    return 0;
}

