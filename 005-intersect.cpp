// Write a program to do intersection of two line segments.
#include <graphics.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    int x2, y2, x1, y1, x3, x4, y3, y4;
    cout << "Enter the co-ordinate : ";
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;
    initgraph(&gd, &gm, NULL);
    line(x1, y1, x2, y2);
    line(x3, y3, x4, y4);
    getch();
    closegraph();
}
