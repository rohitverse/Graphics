// Write a program to display a pixel.
#include <graphics.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
    // clrscr();
    int gd = DETECT, gm;
    int x, y;
    cout << "Enter the co-ordinate : ";
    cin >> x >> y;
    initgraph(&gd, &gm, NULL);
    putpixel(x, y, 4);
    getch();
    closegraph();
}
