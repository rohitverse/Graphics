// Write a program to display a circle.
#include <graphics.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    int x1, y1, r;
    cout << "Enter the co-ordinate :";
    cin >> x1 >> y1 >> r;
    initgraph(&gd, &gm, NULL);
    circle(x1, y1, r);
    getch();
    closegraph();
}
