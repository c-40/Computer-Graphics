#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main()
{
int gd=DETECT,gm,x,y,xc,yc,x1,y1,i,r; float d;
clrscr();
detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
printf("Enter the center coordinates");
scanf("%d%d",&xc,&yc);
printf("Enter radius");
scanf("%d",&r);
d=1.25-r;
x=0;
y=r;

do
{
 putpixel(xc+x,yc+y,WHITE);
putpixel(xc+y,yc+x,YELLOW);
putpixel(xc-y,yc+x,BLUE);
putpixel(xc-x,yc+y,GREEN);
putpixel(xc-x,yc-y,RED);
putpixel(xc-y,yc-x,WHITE);
putpixel(xc+y,yc-x,YELLOW);
putpixel(xc+x,yc-y,BLUE);
if(d<0)
{
    x=x+1;
y=y;
d=d+2*x+3;

}
else
{
    x=x+1;
y=y-1;
d=d+2*x-2*y+5;

}
delay(25);
}while(x<=y);
getch();
return 0;
}
