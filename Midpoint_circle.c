#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main() 
{
    int gd=DETECT,gm,x,y,r,d;
    clrscr();
    printf("Enter radius: ");
    scanf("%d",&r);
    y=r;
    d=3-2*r;
    initgraph(&gd,&gm,"c:\\turboc3\\bgi");
    for(x=0;x<y;x++)
    {
        putpixel(x+100,y+100,4);
        putpixel(x+100,-y+100,5);
        putpixel(-x+100,y+100,6);
        putpixel(-x+100,-y+100,7);
        putpixel(y+100,x+100,8);
        putpixel(y+100,-x+100,9);
        putpixel(-y+100,x+100,10);
        putpixel(-y+100,-x+100,11);
        if(d<0)
            d+=2*dx+3;
        else
        {
            d+=2*dx-2*dy+5;
            y--;
        }
        delay(100);
    }
    getch();
}