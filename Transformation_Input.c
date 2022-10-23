#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
void translation(int x1,int y1,int x2,int y2,int x3,int y3)
{ int tx,ty;
 printf("Enter the tx and ty"); scanf("%d%d",&tx,&ty);
 line(x1+tx,y1+ty,x2+tx,y2+ty);
  line(x2+tx,y2+ty,x3+tx,y3+ty);
   line(x1+tx,y1+ty,x3+tx,y3+ty);

}
void scalaing(int x1,int y1,int x2,int y2,int x3,int y3)
{
    int sx,sy;
   printf("Enter the sx and sy");
    scanf("%d%d",&sx,&sy);
 line(x1*sx,y1*sy,x2*sx,y2*sy);
  line(x2*sx,y2*sy,x3*sx,y3*sy);
   line(x1*sx,y1*sy,x3*sx,y3*sy);
}
void rotation(int x1,int y1,int x2,int y2,int x3,int y3)
{

    double s,c,A;
    printf("Enter the angle");
    scanf("%lf",&A);
    c=cos(A*3.14/180);
    s=sin(A*3.14/180);
    x1=floor(x1*c-y1*s);
    y1=floor(x1*s+y1*c);
     x2=floor(x2*c-y2*s);
    y2=floor(x2*s+y2*c);
     x3=floor(x3*c-y3*s);
    y3=floor(x3*s+y3*c);
   line(x1,y1,x2,y2);
  line(x2,y2,x3,y3);
   line(x1,y1,x3,y3);

}
int main()
{
    double s,c,A;
    int gd=DETECT,gm,x1,y1,x2,y2,x3,y3,ch;
    clrscr();
detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
 printf("Enter the x and y of 3 coordinates");
 scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
 line(x1,y1,x2,y2);
  line(x2,y2,x3,y3);
   line(x1,y1,x3,y3);
   printf("Enter choise\n1-translation\n2-scaling\n3-rotation\n4-Exit");
   scanf("%d",&ch);
   while(ch!=4)
   {
    switch(ch)
    {
        case 1:
    translation(x1,y1, x2,y2, x3,y3);
    break;
    case 2:
    scalaing(x1,y1, x2,y2, x3,y3);
    break;
    case 3:
    rotation(x1,y1, x2,y2, x3,y3);
    }
     printf("Enter choise\n1-translation\n2-scaling\n3-rotation\n4-Exit");
   scanf("%d",&ch);
   }
   printf("------------------------------Exited-----------------------------------------");

 
getch();
return 0;
}
