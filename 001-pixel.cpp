Write a program to display a pixel.
#include<graphics.h>
#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();
int gd=DETECT,gm;
int x,y;
cout<<"enter the co ordinate";
cin>>x>>y;
initgraph(&gd,&gm,"C:\TC\BGI");
putpixel(x,y,4);
getch();
closegraph();
}
