//Write a program to display a circle.
#include<graphics.h>
#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();
int gd=DETECT,gm;
int x1,y1,r ;
cout<<"enter the co ordinate";
cin>>x1>>y1>>r;
initgraph(&gd,&gm,"C:\\TC\\BGI");
circle(x1,y1,r);
getch();
closegraph();
}

