// Write a program to show the arc.
#include <graphics.h>
#include <conio.h>
#include <iostream>
using namespace std;
main()
{
    int gd = DETECT, gm;
    int x2, y2, x1, y1, x3, y3;
    cout << "Enter the Co-ordinate : ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    initgraph(&gd, &gm, NULL);
    bar3d(x1, y1, x2, y2, x3, y3);
    getch();
    closegraph();
}
