// Write a program to show the bar.
#include <graphics.h>
#include <conio.h>
#include <iostream>
using namespace std;
main()
{
    int gd = DETECT, gm;
    int x2, y2, x1, y1;
    cout << "Enter the co-ordinate : ";
    cin >> x1 >> y1 >> x2 >> y2;
    initgraph(&gd, &gm, "NULL");
    bar(x1, x2, y1, y2);
    getch();
    closegraph();
}
