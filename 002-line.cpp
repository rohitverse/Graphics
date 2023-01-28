// Write a program to display a line.
#include <graphics.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    int x2, y2, x1, y1;
    cout << "enter the co-ordinate";
    cin >> x1 >> y1 >> x2 >> y2;
    initgraph(&gd, &gm, NULL);
    line(x1, y1, x2, y2);
    getch();
    closegraph();
}
