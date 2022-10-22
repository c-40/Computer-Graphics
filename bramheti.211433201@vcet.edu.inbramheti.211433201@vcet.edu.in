 #include<stdio.h>
 #include<graphics.h>
 #include<math.h>
 #include<dos.h>
 #include<conio.h>
 int main()
 {
 int gd=DETECT,gm,x1,x2,y1,y2,dx,dy,i,step,xin,yin,x,y; i=1;
 detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
 printf("Entter the first point ");
 scanf("%d%d",&x1,&y1);
 printf("\nEnter the end point");
 scanf("%d%d",&x2,&y2);
 dx=x2-x1;
 dy=y2-y1;
 if(abs(dx)>=abs(dy))
 {
 step=dx;
 }
 else
 {
 step=dy;
 }
 xin=dx/step;
 yin=dy/step;
 x=x1;
 y=y1;
 putpixel(x,y,YELLOW);
 while(x!=x2&&y!=y2)
 {
  if(i%2==0)
  {
  putpixel(x,y,YELLOW);
  }
  x=x+xin;
  y=y+yin;
  i++;
  }
  getch();
  return 0;
  }
