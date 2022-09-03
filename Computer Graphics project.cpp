#include<graphics.h>
#include<iostream>
#include<math.h>
#include<dos.h>

using namespace std;

void DDA()

{
float x,y,x1,y1,x2,y2,dx,dy,step;
int i,gd=DETECT,gm;

initgraph(&gd,&gm,"c:\\turboc3\\bgi");

cout<<"Enter the value of x1 and y1 : ";
cin>>x1>>y1;
cout<<"Enter the value of x2 and y2: ";
cin>>x2>>y2;

dx=abs(x2-x1);
dy=abs(y2-y1);

if(dx>=dy)
step=dx;
else
step=dy;

dx=dx/step;
dy=dy/step;

x=x1;
y=y1;

i=1;
while(i<=step)
{
putpixel(x,y,5);
x=x+dx;
y=y+dy;
i=i+1;
delay(100);
}

closegraph();
}
int Bresenham(){

     int x,y,x1,y1,x2,y2,dx,dy,p;
	 cout<<"Enter the value of x1 and y1: ";
     cin>>x1>>y1;
     cout<<"Enter the value of x2 and y2: ";
     cin>>x2>>y2;
     dx=abs(x2-x1);
     dy=abs(y2-y1);

     x=x1;
     y=y1;
     p=2*dy-dx;
     while(x<=x2)
     {
         if(p>=0)
         {
             putpixel(x,y,12);
             y=y+1;
             p=p+2*dy- 2*dx;

         }
         else
         {
             putpixel(x,y,12);
             p=p+2*dy;
         }
         x=x+1;
         delay(100);
     }
     getch();
}

int emoji()

{
     setcolor(YELLOW);
     circle(200,200,100);
     setfillstyle(SOLID_FILL,YELLOW);
     floodfill(200,200,YELLOW);

     //left eye
     setcolor(WHITE);
     circle(150,170,25);
     setfillstyle(SOLID_FILL,WHITE);
     floodfill(150,170,WHITE);
     //left eye ball
     setcolor(BLACK);
     circle(150,180,15);
     setfillstyle(SOLID_FILL,BLACK);
     floodfill(150,180,BLACK);

     //right eye
     setcolor(WHITE);
     circle(250,170,25);
     setfillstyle(SOLID_FILL,WHITE);
     floodfill(250,170,WHITE);
     //right eye ball
     setcolor(BLACK);
     circle(250,180,15);
     setfillstyle(SOLID_FILL,BLACK);
     floodfill(250,180,BLACK);

     //mouth
     setcolor(RED);
     circle(200,250,25);
     setfillstyle(SOLID_FILL,RED);
     floodfill(200,250,RED);
    getch();

}


int Flag()
{
    initwindow(1000,800,"National Flag");

    line(500,0,500,800);
    line(0,400,1000,400);


setcolor(RED);
      setfillstyle(SOLID_FILL,GREEN);
    rectangle(100,50,400,200);
    rectangle(600,50,900,200);
    rectangle(100,450,400,600);
    rectangle(600,450,900,600);
     floodfill(101,60,RED);
     floodfill(601,60,RED);
     floodfill(101,460,RED);
     floodfill(601,460,RED);
setcolor(RED);
      setfillstyle(SOLID_FILL,BLUE);
    rectangle(80,50,100,350);
    rectangle(580,50,600,350);
    rectangle(80,450,100,750);
    rectangle(580,450,600,750);
   floodfill(81,60,RED);
   floodfill(581,60,RED);
   floodfill(81,460,RED);
   floodfill(581,460,RED);

      setcolor(RED);
      setfillstyle(SOLID_FILL,RED);

    circle(250,120,50);
    circle(750,120,50);
    circle(250,525,50);
    circle(750,525,50);
   floodfill(250,120,RED);
   floodfill(750,120,RED);
   floodfill(250,525,RED);
   floodfill(750,525,RED);
    getch();
}


void Bird()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	setcolor(RED);
	setfillstyle(SOLID_FILL,YELLOW);
	ellipse(345,180,190,189,89,50);
	floodfill(345,180,RED);
	setfillstyle(SOLID_FILL,YELLOW);
	circle(224,150,40);
	floodfill(225,150,RED);
	setfillstyle(SOLID_FILL,BLACK);
	circle(200,143,2);
	floodfill(200,143,RED);
	line(135,183,190,170);
	line(135,183,185,143);
	line(379,290,379,227);
	line(340,280,345,230);
	arc(371,295,30,160,10);
	arc(331,286,20,160,10);
	setfillstyle(SOLID_FILL,YELLOW);
	ellipse(507,160,110,109,80,20);
	floodfill(510,160,RED);
	setfillstyle(SOLID_FILL,YELLOW);
	ellipse(503,160,108,107,70,10);
	floodfill(503,160,RED);
	getch();
	closegraph();
}

void plotpoints (int x0, int y0,int x, int y)
{
    putpixel(x0+x ,y0+y,7);
    putpixel(x0+x ,y0-y,7);
    putpixel(x0-x ,y0+y,7);
    putpixel(x0-x ,y0-y,7);
    putpixel(x0+y ,y0+x,7);
    putpixel(x0+y ,y0-x,7);
    putpixel(x0-y ,y0+x,7);
    putpixel(x0-y ,y0-x,7);


}

void midpoint(int x0,int y0,int r)
{
    int x=0,y=r;
    int f=1-r;

    plotpoints(x0,y0,x,y);

    while(x<y)
    {
        x++;
        if(f<0)
        {
            f+=(2*x)+1;
        }
        else
        {
            y--;
            f+=(2*(x-y))+1;

        }
        plotpoints(x0,y0,x,y);
    }
    getch();
}

int mid_point()
{

    int x,y,r;
    cout<<"Enter the value of center co-ordinate:";
    cin>>x>>y;

    cout<<"Enter the radius of the circle:";
    cin>>r;
    midpoint(x,y,r);
}
int house()
{

    setcolor(BROWN);
    rectangle(100,200,300,350);
     setfillstyle(1,BROWN );
    floodfill(101,201,BROWN);

    setcolor(BLACK);
    rectangle(180,250,220,350);
    setfillstyle(3,BLACK);
    floodfill(181,251,BLACK);

    setcolor(YELLOW);
    line(175,125,325,125);
    line(175,125,100,200);
    line(325,125,300,200);
    line(325,125,375,200);
    setfillstyle(1,YELLOW);
    floodfill(150,150,YELLOW);

    setcolor(YELLOW);
    rectangle(300,200,375,350);
    setfillstyle(1,YELLOW);
    floodfill(301,201,YELLOW);

    setcolor(RED);
    rectangle(315,250,350,290);
    setfillstyle(3,RED );
    floodfill(316,251,RED);
   getch();
}
void man()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	arc(150,150,80,230,70);
	line(164,81,105,204);
	line(133,145,179,180);
	circle(200,120,30);
	line(185,146,160,280);
	line(215,146,212,283);
	line(160,280,212,283);
	line(163,280,180,350);
	line(200,282,220,350);
	line(200,180,250,250);
	line(298,175,242,250);
	circle(300,130,30);
	line(285,156,260,280);
	line(315,156,335,280);
	line(260,280,335,280);
	line(285,280,285,350);
	line(310,280,310,350);
	circle(335,150,10);
	circle(335,168,7);
	circle(335,180,5);
	getch();
	closegraph();
}

void Cockroach()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	setfillstyle(SOLID_FILL,BROWN);
	fillellipse(310,160,80,50);
	ellipse(310,160,110,109,80,50);
	setfillstyle(SOLID_FILL,BROWN);
	fillellipse(400,160,20,20);
	circle(400,160,20);
	setcolor(RED);
	arc(468,150,80,180,50);
	arc(468,165,180,290,50);
	ellipse(355,136,120,284,105,23);
	ellipse(355,185,77,240,105,23);
	arc(310,70,300,40,50);
	arc(270,67,300,40,50);
	arc(282,221,300,15,60);
	arc(240,224,300,15,60);
	circle(410,170,3);
	circle(410,150,3);
	getch();
}




int main(){

    initwindow(800,600,"Md Taiabur Rahman");
    int a=330, b= 10;
    int c=330, d = 30;
	setcolor(10);
	outtextxy(a,b,"MY FIRST PROJECT");
	outtextxy(c,d,"MD TAIABUR RAHMAN");
	int x=330, y= 50;
	outtextxy(x,y,"CSE1902017075");

	int choice;

	cout<<"\t\t\t1.DDA algorithm\n";
	cout<<"\t\t\t2.Bresenham algorithm\n";
	cout<<"\t\t\t3.Emoji\n";
	cout<<"\t\t\t4.Flag\n";
	cout<<"\t\t\t5.Bird\n";
	cout<<"\t\t\t6.Midpoint circle algorithm\n";
	cout<<"\t\t\t7.House\n";
	cout<<"\t\t\t8.Man\n";
	cout<<"\t\t\t9.Cockroach\n";



	cout<<"\nEnter your choice:";
	cin>>choice;


	switch(choice)
	{
		case (1):
			DDA();
			break;

		case(2):
			Bresenham();
		    break;

        case(3):
			emoji();
		    break;

		case(4):
			Flag();
		    break;

		case(5):
            Bird();
            break;

        case(6):
            mid_point();
            break;

        case(7):
            house();
            break;

        case(8):
            man();
            break;

        case(9):
            Cockroach();
            break;


		     default:
                cout<<"Error";

	}
	return 0;

}
