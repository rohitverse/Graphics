// Write a program to set the background color.
#include <graphics.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    setbkcolor(YELLOW);
    getch();
    closegraph();
}
