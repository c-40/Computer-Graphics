#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<math.h>
int main()
   {
    int gd = DETECT, gm,i,x,y,x1,y1,x2,y2,dx,dy; float d;
     clrscr();
    initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
     detectgraph(&gd,&gm);
     printf("Enter the coordinate");
     scanf("%d%d",&x1,&y1);
     printf("Enter the coordinate");
     scanf("%d%d",&x2,&y2);
     dx=x2-x1;
     dy=y2-y1;
     x=x1;
     y=y1;
     if(abs(dx)>=abs(dy))
     {
     d=2*dy-dx;
     while(x!=x2||y!=y2)
     {putpixel(x,y,WHITE);
     if(d<0)
     {
     x=x+1;
     y=y;
     d=d+2*dy;
     }
     else
     {
     x=x+1;
     y=y+1;
     d=d+2*dy-2*dx;
     }
     }
     }
     else
     {
     d=2*dx-dy;
     while(x!=x2||y!=y2)
     {putpixel(x,y,WHITE);
     if(d<0)
     {
     x=x;
     y=y+1;
     d=d+2*dx;
     }
     else
     {
     x=x+1;
     y=y+1;
     d=d+2*dx-2*dy;
     }
     }
     }
     getch();
     return 0;
     }
