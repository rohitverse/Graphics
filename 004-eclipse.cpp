// Write a program to display a fill ellipse.
#include <graphics.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    int x2, y2, x1, y1;
    cout << "Enter the co-ordinate :";
    cin >> x1 >> y1 >> x2 >> y2;
    initgraph(&gd, &gm, NULL);
    fillellipse(x1, y1, x2, y2);
    getch();
    closegraph();
}
