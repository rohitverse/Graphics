// Write a program to display a text.
#include <graphics.h>
#include <conio.h>
#include <iostream>
using namespace std;
main()
{
    int gd = DETECT, gm;
    int x1, y1;
    cout << "Enter the Co-ordinate : ";
    cin >> x1 >> y1;
    initgraph(&gd, &gm, NULL);
    outtextxy(x1, y1, "Rohit");
    getch();
    closegraph();
}