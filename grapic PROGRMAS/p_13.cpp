#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    
    // Draw the body of the fish
    ellipse(250,200,0,360,150,70);
    ellipse(180,200,270,90,30,60);
    
    // Draw the tail fin
    line(400, 180, 450, 140);
    line(400, 210, 450, 250);
    line(450, 140, 450, 250);
    
    line(200,135,300,80);
    line(300,80,250,130);
    
    line(200,265,300,320);
    line(300,320,250,270);
    // Draw the eye
    circle(160, 190, 5);
    
    getch();
    closegraph();
    
    return 0;
}

