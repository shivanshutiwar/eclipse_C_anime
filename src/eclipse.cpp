/* CREATED BY, JUBIN JOSE, Watch music video created 
with this code here: https://www.youtube.com/watch?v=8LdwhOEwMiU
Read Full details about this Project: http://iamjbn.blogspot.in/2012/05/eclipse-graphics-animation-music-video.html
Get me on facebook: https://facebook.com/PixVfx
Get me on twitter: https://twitter.com/IamJubin
 */

#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <process.h>
#include <iostream>
#include <math.h>
#include <graphics.h>

using namespace std;
int path[600],a[1420][2],cas=1,s=1416,ar[1000][2],maxx,maxy,s3=0,color=8,change=0,dl=100,ex=0;
void bezierCurve(int p1x,int p1y,int p2x,int p2y,int p3x,int p3y);
void Wiggle(int x1,int y1,int x2,int y2,double d);
void drawcCircle(int xc,int yc,int r);
int circularArray(int p1,int p2);
void boxer(int spx, int spy, int length, int breadth, int skip, int option);
void grains(int thickness);
int dist(int a,int b);

//******************************SCENES ************************************************
void sound_thread(void *param1);
void scene3();                                   //SCENE 3
void scene3thread1(void *param1);
void scene3thread2(void *param2);
void scene3thread3(void *param3);
void scene3thread4(void *param4);
void scene3thread5(void *param5);
void scene3thread6(void *param6);
void scene3thread7(void *param7);
void scene3thread8(void *param8);
void scene3thread9(void *param9);

void scene4();                                   //SCENE 4
void scene4thread1(void *param1);
void scene4thread2(void *param2);
void scene4thread3(void *param3);
void scene4thread4(void *param4);
void scene4thread5(void *param5);
void scene4thread6(void *param6);
void scene4thread7(void *param7);


void scene5();                                  //SCENE 5
void scene5thread1(void *param1);
void scene5thread2(void *param2);
void scene5thread3(void *param3);

void scene6();                                 //SCENE 6


void scene7();                                 //SCENE 7

void scene8();                                 //SCENE 8

void scene9();                                 //SCENE 9

void scene10();                                 //SCENE 10
void scene10thread1(void *param1);
void scene10thread2(void *param2);
void scene10thread3(void *param3);
void scene10thread4(void *param4);
void scene10thread5(void *param5);
void scene10thread6(void *param6);
void scene10thread7(void *param7);
void scene10thread8(void *param8);

void scene11();                                 //SCENE 11

void scene12();                                 //SCENE 12
void scene12thread1(void *param1);
void scene12thread2(void *param2);
void scene12thread3(void *param3);
void scene12thread4(void *param4);
void scene12thread5(void *param5);
void scene12thread6(void *param6);
void scene12thread7(void *param7);
void scene12thread8(void *param8);
void scene12thread9(void *param9);
void scene12thread10(void *param10);

void scene14();                                 //SCENE 14

//DON't CARE ITS REPEATING
void bezierCurve1(int p1x,int p1y,int p2x,int p2y,int p3x,int p3y);
void Wiggle1(int x1,int y1,int x2,int y2,double d);
void boxer1(int spx, int spy, int length, int breadth, int skip, int option);


/************************************************ MAIN FUNCTION *****************************************************/
int main( )
{ int i;double w;
	initwindow( 700 ,700 , "WinBGIm" );
	int val;
	HANDLE handle;
/*
 *    bezierCurve(0,100,500,200,0,300);
 *    for(i=0;i<500;i+=2)
 *    {w=rand()%100;
 *    Wiggle(i,i,i+2,i+2,5+w);delay(0);
 *    }
 *
 */
maxx=getmaxx();
maxy=getmaxy();
handle = (HANDLE) _beginthread( sound_thread,0,&val);
	drawcCircle(maxx/2,maxy/2,250);
	delay(1000);
	cleardevice();

    scene3();
//  scene3();
    if(s3==1)
    scene4();
    setfillstyle(1,WHITE);
    grains(6);
setcolor(BLACK);
    scene5();

  scene6();
  scene7();
  scene8();
  setcolor(WHITE);
  scene9();
    scene10();
    scene11();
    scene12();
    scene14();
        getch();
	closegraph( );
	return( 0 );
}

void sound_thread(void *param1)  //****************************** PLAY SOUND THREAD ********************************************************
{

	int h=*((int*)param1);
	PlaySound("C:/Users/jubin/Desktop/1.wav",NULL,SND_FILENAME);
}





/* ****************************************************************************************************************************************************************
********************** SCENE 3 ********************************************************************************************** */
void scene3()
{ int j=0,next=0,w=0,x;
double decay=0;
    int i;
	int val,val1,innr=20;
	HANDLE handle;

		val =71;
		val1=100;

  //FIRST ANIMATION STARTS:

      for(x=s/4;x>j;x-=j)
{
//    putpixel(a[x][0],a[x][1],8-j);

 w=rand()%50;
decay+=1;
j=5;
next=x-j;
//if(x+2>568)

//color=7;
    Wiggle(circularArray(x,0),circularArray(x,1),circularArray(next,0),circularArray(next,1),w-decay);
   delay(50);
}

//SECOND ANIMATION STARTS HERE:

   for(x=s/4;x<s/2;x+=j)
{
//    putpixel(a[x][0],a[x][1],8-j);
//w=rand()%50;
decay=0;
    w=rand()%50;
decay+=1;
j=5;
next=x+j;
//if(x==3*s/8)


    Wiggle(a[x%s][0],a[x%s][1],a[next%s][0],a[next%s][1],w-decay);
   delay(30);
}

//THIRD ANIMATION STARTS HERE:


	handle = (HANDLE) _beginthread( scene3thread1,0,&val); // create thread
	handle = (HANDLE) _beginthread( scene3thread2,0,&val1);
	WaitForSingleObject(handle,INFINITE);


	handle = (HANDLE) _beginthread( scene3thread3,0,&val1);
//
	handle = (HANDLE) _beginthread( scene3thread5,0,&innr);
	handle = (HANDLE) _beginthread( scene3thread6,0,&innr);
	handle = (HANDLE) _beginthread( scene3thread9,0,&innr);



		handle = (HANDLE) _beginthread( scene3thread4,0,&val1);
		WaitForSingleObject(handle,INFINITE);

	handle = (HANDLE) _beginthread( scene3thread7,0,&innr);
	WaitForSingleObject(handle,INFINITE);
	s3=1;
//	handle = (HANDLE) _beginthread( scene3thread8,0,&innr);

}











//THREAD DEFENITIONS:

void scene3thread1(void *param1)  //****************************** THREAD 1 ********************************************************
{

	int h=*((int*)param1);
	int x=0,j=0,next=0,w;
for(x=3*s/8;x>=j;x-=j)
{
//    putpixel(a[x][0],a[x][1],8-j);
j=5;
next=x-j;
//if(x+2>568)

 w=rand()%50;
    Wiggle(a[x%s][0],a[x%s][1],a[next%s][0],a[next%s][1],w);
   delay(50);
}
//setcolor(RED);
for(x=s/8;x<s/2+100;x+=j)
{
//    putpixel(a[x][0],a[x][1],8-j);
j=8;
next=x+j;
//if(x+2>568)

 w=rand()%100;
    Wiggle(a[x%s][0],a[x%s][1],a[next%s][0],a[next%s][1],w);
   delay(20);
}
    }

	void scene3thread2(void *param2)  //******************************* THREAD 2 **********************************************
{


	int h=*((int*)param2);
    int x,j=0,next,w;
 for(x=s/4;x<s/2;x+=j)
{
//    putpixel(a[x][0],a[x][1],8-j);
j=8;
next=x+j;
//if(x+2>568)

 w=rand()%100;
    Wiggle(a[x%s][0],a[x%s][1],a[next%s][0],a[next%s][1],w);
   delay(20);
}
j=5;
 for(x=s/4;;x-=j)
{

next=x-j;
w=rand()%80;
    Wiggle(circularArray(x,0),circularArray(x,1),circularArray(next,0),circularArray(next,1),w);
   delay(20);
   if(next<=x/2-10)
   break;
}
    }

void scene3thread3(void *param3)  //******************************* THREAD 3 **********************************************
{
int h=*((int*)param3);
    int x,j=0,next,w;float k=0;
 for(x=0;x<s/2-10;x+=j)
{
//    putpixel(a[x][0],a[x][1],8-j);
j=10;
next=x+j;
//if(x+2>568)

 w=rand()%100;
    Wiggle(a[x][0]-k,a[x][1],a[next][0]-k,a[next][1],w);
    k+=.4;
   delay(50);
}k=0;
 for(x=0;x<s/2-100;x+=j)
{
//    putpixel(a[x][0],a[x][1],8-j);
j=10;
next=x+j;
//if(x+2>568)

 w=rand()%200;
    Wiggle(a[x][0]-k,a[x][1],a[next][0]-k,a[next][1],w);
    k+=1;
   delay(20);
}

k=0;
for(x=100;x<s/2;x+=j)
{
//    putpixel(a[x][0],a[x][1],8-j);
j=15;
next=x-j;
//if(x+2>568)

 w=rand()%40;
    Wiggle(a[x][0]-k,a[x][1],a[next][0]-k,a[next][1],w);
    k++;
   delay(20);
}
boxer(a[14][0],a[14][1]-10, 400, 250, 15, 1);
delay(100);
boxer(a[800][0]+200,a[800][1]+10, 350, 100, 10, 2);
}

void scene3thread4(void *param4)  //******************************* THREAD 4 **********************************************
{
int h=*((int*)param4);
    int x,j=0,next,w;float k=0;
 for(x=s/4+200;x>j;x-=j)
{
//    putpixel(a[x][0],a[x][1],8-j);
j=6;
next=x-j;
//if(x+2>568)

 w=rand()%50;
    Wiggle(circularArray(x,0)-k,circularArray(x,1),circularArray(next,0)-k,circularArray(next,1),w);
    k+=.4;
   delay(50);
}k=0;
 for(x=s/4;x>j;x-=j)
{
//    putpixel(a[x][0],a[x][1],8-j);
j=10;
next=x-j;
//if(x+2>568)

 w=rand()%200;
    Wiggle(a[x][0]-k,a[x][1],a[next][0]-k,a[next][1],w);
    k+=.1;
   delay(20);
}

k=0;
for(x=s/4;x<s/2;x+=j)
{
//    putpixel(a[x][0],a[x][1],8-j);
j=5;
next=x+j;
//if(x+2>568)

 w=rand()%40;
    Wiggle(a[x][0]-k,a[x][1],a[next][0]-k,a[next][1],w);
    k++;
   delay(20);
}j=0;

boxer(a[14][0],a[14][1]-10, 400, 250, 15, 1);
boxer(a[500][0],a[500][1]+200, 350, 150, 10, 4);

}
void scene3thread5(void *param5)  //******************************* THREAD 5 **********************************************
{
int incr=*((int*)param5);
    int x,j=0,next,w,l=0,m=0;float k=incr,shift=1;
    while(m<10)
    {
 for(x=1+l;x<=s/2-l;x+=j)
{
//    putpixel(a[x][0],a[x][1],8-j);
j=10;
next=x-j;
//if(x+2>568)

 w=rand()%100;
    Wiggle(circularArray(x,0)-k-shift,circularArray(x,1),circularArray(next,0)-k-shift,circularArray(next,1),w);
    k+=.1;
if(circularArray(next,1)<=maxy/2&&circularArray(next,1)>=maxy/4)
shift+=2;
if(circularArray(next,1)>=maxy/2&&circularArray(next,1)<=3*maxy/4)
shift-=2;
  delay(30);//incr++;
}l+=17;j++;m++;}}

void scene3thread6(void *param6)  //******************************* THREAD 6 **********************************************
{
int incr=*((int*)param6);
    int x,j=0,next,w,l=0,m=0;float k=incr;
 //   delay(10000);
    while(m<10)
    {
 for(x=s/2-l;x>=l+j;x-=j)
{
//    putpixel(a[x][0],a[x][1],8-j);
j=10;
next=x-j;
//if(x+2>568)

 w=rand()%100;
    Wiggle(circularArray(x,0)-k,circularArray(x,1),circularArray(next,0)-k,circularArray(next,1),w);
    k+=.1;

  delay(30);//incr++;
}l+=17;j--;m++;}}

void scene3thread7(void *param7)  //******************************* THREAD 7 **********************************************
{

int incr=*((int*)param7);int j=100,k=0,yoyo=0;
    while(yoyo<=50)
{
//boxer(a[177][0]+j,a[177][1]+j+100, 400, 800, 15, 3);
delay(100);
boxer(a[531][0]+100-j,a[531][1]-100+j, 400, 150+j, 10, 4);
boxer(a[14][0]-k*3,a[14][1]-10, 500, 450, 15, 1);
boxer(a[500][0]+k,a[500][1]+200-k, 350, 350+k, 10, 4);
boxer(a[531][0]-j,a[531][1]+100, 500, 150+j*2, 10, 4);
//boxer(circularArray(177,0)+2*j,circularArray(177,1)+k, 400, 250, 15, 4);
j+=5;k+=2;
//bgiout<<yoyo;
//outstreamxy(0,15);
yoyo++;
}
}

void scene3thread8(void *param8)  //******************************* THREAD 8 **********************************************
{

int incr=*((int*)param8);int j=0,k=0;
    while(!kbhit())
{
boxer(a[708][0]-j,a[708][1], 100, 100, 15, 4);

//boxer(circularArray(177,0)+2*j,circularArray(177,1)+k, 400, 250, 15, 4);
j+=5;
}
}

void scene3thread9(void *param9)  //******************************* THREAD 9 **********************************************
{

int incr=*((int*)param9);int j=100,k=0,x,next,w,innr;
//HANDLE handle;
while(change!=2)
{     for(x=s/2;x<s/2+100*k&&change!=2;x+=j)
{
//    putpixel(a[x][0],a[x][1],8-j);
j=5;
next=x+j;
//if(x+2>568)

 w=rand()%50;
    Wiggle(circularArray(x,0),circularArray(x,1),circularArray(next,0),circularArray(next,1),w);


  delay(70);//incr++;
}
for(x=s-1;x>s-100*k&&change!=2;x-=j)
{
//    putpixel(a[x][0],a[x][1],8-j);
j=5;
next=x-j;
//if(x+2>568)

 w=rand()%50;
    Wiggle(circularArray(x,0),circularArray(x,1),circularArray(next,0),circularArray(next,1),w);


  delay(70);//incr++;
}   k++;}
//handle = (HANDLE) _beginthread( scene3thread8,0,&innr);
}


/* ****************************************************************************************************************************************************************
********************************************************** SCENE 4 ********************************************************************************************** */
void scene4()
{
    int val,val1,rv;
	HANDLE handle;

	  handle = (HANDLE) _beginthread( scene4thread5,0,&val);
//	  handle = (HANDLE) _beginthread( scene4thread6,0,&val);
	for(int i=0;change!=2;i++)
    {	val =5+rand()%20;
    rv=rand()%4;
    switch(rv+1)
    {case 1:
    handle = (HANDLE) _beginthread( scene4thread4,0,&val);
    handle = (HANDLE) _beginthread( scene4thread1,0,&val);break;
    case 2:
    handle = (HANDLE) _beginthread( scene4thread3,0,&val);
    handle = (HANDLE) _beginthread( scene4thread2,0,&val);break;
    }
    val1 =5+rand()%10;
    rv=rand()%4;
    switch(rv+1)
    {case 2:
        handle = (HANDLE) _beginthread( scene4thread1,0,&val);
    handle = (HANDLE) _beginthread( scene4thread4,0,&val);
    break;
    case 1:
        handle = (HANDLE) _beginthread( scene4thread2,0,&val);
    handle = (HANDLE) _beginthread( scene4thread3,0,&val);
    break;

}

  WaitForSingleObject(handle,INFINITE);

    }
//cleardevice();
}

void scene4thread1(void *param1)  //****************************** THREAD 1 ********************************************************
{
	int h=*((int*)param1);
    int next=0,w,x,y,i;
    for(i=s/4;i>s/8;)                                      // to the right from bottom
    {
        next=i-h;
        w=rand()%50;
        Wiggle(a[i][0],a[i][1],a[next][0],a[next][1],w);
        i=next;
        delay(50);
    }
    x=a[next][0];
    y=a[next][1];
    while((x<maxx)&&(y>0))
    {
        w=rand()%50;
        Wiggle(x,y,x+h,y-h,w);
        x=x+h;
        y=y-h;
        delay(20);
   // line(a[354][0],a[354][1],maxx,0);
  //  line(a[885][0],a[885][1],0,maxy);
}

    for(i=3*s/4;i>s/2+s/8;)                                      // to the left from top
    {
        next=i-h;
        w=rand()%50;
        Wiggle(a[i][0],a[i][1],a[next][0],a[next][1],w);
        i=next;
        delay(20);
    }
    x=a[next][0];
    y=a[next][1];
    while((x>0)&&(y<maxy))
    {
        w=rand()%40;
        Wiggle(x,y,x-h,y+h,w);
        x=x-h;
        y=y+h;
        delay(20);
   // line(a[354][0],a[354][1],maxx,0);
  //  line(a[885][0],a[885][1],0,maxy);
}
}



void scene4thread2(void *param2)  //****************************** THREAD 2 ********************************************************
{
	int h=*((int*)param2);
	int next=0,w,x,y,i;
 for(i=0;i<s/8+1;)                                      // to the right from top
    {
        next=i+h;
        w=rand()%50;
        Wiggle(a[i][0],a[i][1],a[next][0],a[next][1],w);
        i=next;
        delay(20);
    }
    x=a[next][0];
    y=a[next][1];
    while((x<maxx)&&(y>0))
    {
        w=rand()%50;
        Wiggle(x,y,x+h,y-h,w);
        x=x+h;
        y=y-h;
        delay(20);
   // line(a[354][0],a[354][1],maxx,0);
  //  line(a[885][0],a[885][1],0,maxy);
}

for(i=s/2;i<s/2+s/8;)                                      // to the left from bottom
    {
        next=i+h;
        w=rand()%50;
        Wiggle(a[i][0],a[i][1],a[next][0],a[next][1],w);
        i=next;
        delay(20);
    }
    x=a[next][0];
    y=a[next][1];
    while((x>0)&&(y<maxy))
    {
        w=rand()%50;
        Wiggle(x,y,x-h,y+h,w);
        x=x-h;
        y=y+h;
        delay(20);
   // line(a[354][0],a[354][1],maxx,0);
  //  line(a[885][0],a[885][1],0,maxy);
}
}

void scene4thread3(void *param3)  //****************************** THREAD 3 ********************************************************
{
	int h=*((int*)param3);
    int next=0,w,x,y,i,k=100;


    for(i=3*s/4;i>s/2+s/8;)                                      // to the left from top
    {
        next=i-h;
        w=rand()%50;
        Wiggle(a[i][0],a[i][1],a[next][0],a[next][1],w);
        i=next;
        delay(20);
    }
    x=a[next][0];
    y=a[next][1];
    while((x>0)&&(y<maxy))
    {
        w=rand()%40;
        Wiggle(x,y,x-h,y+h,w);
        x=x-h;
        y=y+h;
        delay(20);
   // line(a[354][0],a[354][1],maxx,0);
  //  line(a[885][0],a[885][1],0,maxy);
}
for(i=s/4;i>s/8;)                                      // to the right from bottom
    {
        next=i-h;
        w=rand()%50;
        Wiggle(a[i][0],a[i][1],a[next][0],a[next][1],w);
        i=next;
        delay(20);
    }
    x=a[next][0];
    y=a[next][1];
    while((x<maxx)&&(y>0))
    {
        w=rand()%50;
        Wiggle(x,y,x+h,y-h,w);
        x=x+h;
        y=y-h;
        delay(20);
   // line(a[354][0],a[354][1],maxx,0);
  //  line(a[885][0],a[885][1],0,maxy);
}
}

void scene4thread4(void *param4)  //****************************** THREAD 4 ********************************************************
{
	int h=*((int*)param4);
	int next=0,w,x,y,i;


for(i=s/2;i<s/2+s/8;)                                      // to the left from bottom
    {
        next=i+h;
        w=rand()%50;
        Wiggle(a[i][0],a[i][1],a[next][0],a[next][1],w);
        i=next;
        delay(20);
    }
    x=a[next][0];
    y=a[next][1];
    while((x>0)&&(y<maxy))
    {
        w=rand()%50;
        Wiggle(x,y,x-h,y+h,w);
        x=x-h;
        y=y+h;
        delay(20);
   // line(a[354][0],a[354][1],maxx,0);
  //  line(a[885][0],a[885][1],0,maxy);
}
for(i=0;i<s/8+1;)                                      // to the right from top
    {
        next=i+h;
        w=rand()%50;
        Wiggle(a[i][0],a[i][1],a[next][0],a[next][1],w);
        i=next;
        delay(20);
    }
    x=a[next][0];
    y=a[next][1];
    while((x<maxx)&&(y>0))
    {
        w=rand()%50;
        Wiggle(x,y,x+h,y-h,w);
        x=x+h;
        y=y-h;
        delay(20);
   // line(a[354][0],a[354][1],maxx,0);
  //  line(a[885][0],a[885][1],0,maxy);
}
}

void scene4thread5(void *param5)  //****************************** THREAD 5 ********************************************************
{
	int h=*((int*)param5);
	int i,w,val;float j=0;
	HANDLE handle;
	setcolor(BLACK);
	setfillstyle(1,BLACK);
	for( i=0;i<250;i++)
	{setfillstyle(1,BLACK);
fillellipse(maxx/2,maxy/2,i,i);
if(i>100)
{
setfillstyle(1,WHITE);
fillellipse(maxx/2,maxy/2,i-100,i-100);delay(10);
}
}
setfillstyle(1,BLACK);
setcolor(WHITE);
fillellipse(maxx/2,maxy/2,i-100,i-100);
setfillstyle(1,GREEN);
handle = (HANDLE) _beginthread( scene4thread7,0,&val);

for(i=5;i<s*5;i+=15)
	{
        w=rand()%80;
        Wiggle(circularArray(i,0),circularArray(i,1),circularArray(i+15,0),circularArray(i+15,1),w);
        delay(20);
    }
    change=1;
//    setcolor(5);
for(i=5;i<s*5;i+=15)
	{
        w=rand()%80;
        Wiggle(circularArray(i,0),circularArray(i,1),circularArray(i+15,0),circularArray(i+15,1),w);
        delay(20);
    }
    change=2;


}

void scene4thread6(void *param6)  //****************************** THREAD 6 ********************************************************
{
	int h=*((int*)param6);
	int i;
	int r=rand()%8;
    while(1)
    {if(change==3)
    {switch(r+1)
    {case 1:for(i=0;i<maxy/2+50;i+=3)
            {fillellipse(maxx/2,maxy/2+5+i,25,25);delay(3);//cleardevice();
            }break;
    case 2:for(i=0;i<maxy/2+50;i+=3)
            {fillellipse(maxx/2+5,maxy/2+5+i,25,25);delay(3);//cleardevice();
            }break;
    case 3:for(i=0;i<maxy/2+50;i+=3)
            {fillellipse(maxx/2,maxy/2+5+i,25,25);delay(3);//cleardevice();
            }break;
    case 4:for(i=0;i<maxy/2+50;i+=3)
            {fillellipse(maxx/2-5,maxy/2+5+i,25,25);delay(3);//cleardevice();
            }break;
    case 5:for(i=0;i<maxy/2+50;i+=3)
            {fillellipse(maxx/2-5,maxy/2+i,25,25);delay(3);//cleardevice();
            }break;
    }}}

}


void scene4thread7(void *param7)  //****************************** THREAD 7 ********************************************************
{
	int h=*((int*)param7);
	pieslice( maxx/2,maxy/2, 10, 80, 150 );
	pieslice( maxx/2,maxy/2, 190, 260, 150 );
}

/* ****************************************************************************************************************************************************************
********************************************************** SCENE 5 ********************************************************************************************** */
void scene5()
{
    HANDLE handle;
    int val;
    handle = (HANDLE) _beginthread( scene5thread3,0,&val);
        handle = (HANDLE) _beginthread( scene5thread2,0,&val);        //SCENE 5
    handle = (HANDLE) _beginthread( scene5thread1,0,&val);                //SCENE 5

    WaitForSingleObject(handle,INFINITE);
    cleardevice();
}

void scene5thread1(void *param1)              //****************************** THREAD 1 ********************************************************
{
    int h=*((int*)param1);
    int i=0,r;float j=0;
//	HANDLE handle;


	    for( i=0;i<250;i++)
    {setfillstyle(1,WHITE);
    fillellipse(maxx/2,maxy/2,i,i);delay(10);}
    for( i=0;i<250;i++)
    {setfillstyle(1,BLACK);
    fillellipse(maxx/2,maxy/2,i,i);delay(5);}
    for( i=0;i<250;i++)
    {setfillstyle(1,WHITE);
    fillellipse(maxx/2,maxy/2,i,i);delay(2);}
//    change=2;
    for( i=0;i<250;i++)
    {setfillstyle(1,BLACK);
    fillellipse(maxx/2,maxy/2,i,i);delay(1);}
    for( i=0;i<125;i++)
    {setfillstyle(1,WHITE);
    fillellipse(maxx/2,maxy/2,i,i);delay(1);}
   delay(1000);
   setcolor(WHITE);
    while(j<100)
    {int r=rand()%8;
    cleardevice();
    switch(r+1)
    {case 1:fillellipse(maxx/2,maxy/2-5,125-j,125-j);break;
    case 2:fillellipse(maxx/2+5,maxy/2-5,125-j,125-j);break;
    case 3:fillellipse(maxx/2+5,maxy/2,125-j,125-j);break;
    case 4:fillellipse(maxx/2+5,maxy/2+5,125-j,125-j);break;
    case 5:fillellipse(maxx/2,maxy/2+5,125-j,125-j);break;
    case 6:fillellipse(maxx/2-5,maxy/2+5,125-j,125-j);break;
    case 7:fillellipse(maxx/2-5,maxy/2,125-j,125-j);break;
    case 8:fillellipse(maxx/2-5,maxy/2-5,125-j,125-j);break;
    }
    change=3;
    circle(maxx/2,maxy/2,250-j-i-25);
 //   if(j>70)

          delay(35);
        j+=.4;
//     	WaitForSingleObject(handle,INFINITE);

     }delay(3); change=2;
    cleardevice();
    for(i=0;i<maxy/2;i+=5)
    {
    fillellipse(maxx/2,maxy/2+i,25,25);
    delay(3);
    cleardevice();} }

//*****************************************************************************

  //  while(1)
  //  {//if(change==3)
    //{
void scene5thread2(void *param2)  //****************************** THREAD 2 ********************************************************
{
	int h=*((int*)param2);
	int i,r,flag=0;
        r=rand()%5;
        while(1)
        {
         while(change==3)
    {//if()
        switch(r+1)
    {case 1:for(i=0;i<maxy/2;i+=5)
            {fillellipse(maxx/2,maxy/2+5+i,25,25);delay(3);//cleardevice();
            }break;
    case 2:for(i=0;i<maxy/2;i+=5)
            {fillellipse(maxx/2+5,maxy/2+5+i,25,25);delay(3);//cleardevice();
            }break;
    case 3:for(i=0;i<maxy/2;i+=5)
            {fillellipse(maxx/2,maxy/2+5+i,25,25);delay(3);//cleardevice();
            }break;
    case 4:for(i=0;i<maxy/2;i+=5)
            {fillellipse(maxx/2-5,maxy/2+5+i,25,25);delay(3);//cleardevice();
            }break;
    case 5:for(i=0;i<maxy/2;i+=5)
            {fillellipse(maxx/2-5,maxy/2+i,25,25);delay(4);//cleardevice();
            }break;
    }}if(change==3)
    flag=1;
    if(change==2&&flag==1)
    break;}}

//}


void scene5thread3(void *param3)  //****************************** THREAD 3 ********************************************************
{
	int h=*((int*)param3);
	int i,r,flag=0;
        r=rand()%5;
        while(1)
        {
         while(change==3)
    {//if()
        switch(r+1)
    {case 1:for(i=0;i<maxy/2;i+=5)
            {fillellipse(maxx/2,maxy/2+10+i,25,25);delay(3);//cleardevice();
            }break;
    case 2:for(i=0;i<maxy/2;i+=5)
            {fillellipse(maxx/2+10,maxy/2+10+i,25,25);delay(3);//cleardevice();
            }break;
    case 3:for(i=0;i<maxy/2;i+=5)
            {fillellipse(maxx/2,maxy/2+10+i,25,25);delay(3);//cleardevice();
            }break;
    case 4:for(i=0;i<maxy/2;i+=5)
            {fillellipse(maxx/2-10,maxy/2+10+i,25,25);delay(3);//cleardevice();
            }break;
    case 5:for(i=0;i<maxy/2;i+=5)
            {fillellipse(maxx/2-10,maxy/2+i,25,25);delay(4);//cleardevice();
            }break;
    }}if(change==3)
    flag=1;
    if(change==2&&flag==1)
    break;}}



/* ****************************************************************************************************************************************************************
********************************************************** SCENE 6 ********************************************************************************************** */
void scene6()
{
    int val,val1,rv;
	HANDLE handle;
	for(int i=1;i<550;i+=2)
	{
        //cleardevice();
        setcolor(BLACK);
        setfillstyle(1,WHITE);
        fillellipse(maxx/2,maxy/2,250,250);
        setfillstyle(1,BLACK);
        fillellipse(maxx/2+i,maxy/2,300,300);
        delay(10);


    }
}

/* ****************************************************************************************************************************************************************
********************************************************** SCENE 7 ********************************************************************************************** */
void scene7()
{
    int val,i;
	HANDLE handle;
    delay(1000);
    setfillstyle(1,WHITE);
    bar(0,0,maxx/2-2,maxy);//delay(10);
    setfillstyle(1,BLACK);
    bar(maxx/2,maxy,maxx,maxy);
    sector( maxx/2,maxy/2,90,270,250,250);
    setfillstyle(1,WHITE);
    sector( maxx/2,maxy/2,270,90,250,250);
    delay(500);

    setfillstyle(1,BLACK);
    bar(0,0,maxx/2,maxy);//delay(10);
    setfillstyle(1,WHITE);
    bar(maxx/2,0,maxx,maxy);
    sector( maxx/2,maxy/2,90,270,250,250);
    setfillstyle(1,BLACK);
    sector( maxx/2,maxy/2,270,90,250,250);
    delay(500);

    setfillstyle(1,WHITE);
    bar(0,0,maxx/2-2,maxy);//delay(10);
    setfillstyle(1,BLACK);
    bar(maxx/2,0,maxx,maxy);
    sector( maxx/2,maxy/2,90,270,250,250);
    setfillstyle(1,WHITE);
    sector( maxx/2,maxy/2,270,90,250,250);
    delay(500);

    setfillstyle(1,BLACK);
    bar(0,0,maxx/2,maxy);//delay(10);
    setfillstyle(1,WHITE);
    bar(maxx/2,0,maxx,maxy);
    sector( maxx/2,maxy/2,90,270,250,250);
    setfillstyle(1,BLACK);
    sector( maxx/2,maxy/2,270,90,250,250);
    delay(500);

    setfillstyle(1,WHITE);
    bar(0,0,maxx/2-2,maxy);//delay(10);
    setfillstyle(1,BLACK);
    bar(maxx/2,0,maxx,maxy);
    sector( maxx/2,maxy/2,90,270,250,250);
    setfillstyle(1,WHITE);
    sector( maxx/2,maxy/2,270,90,250,250);
    delay(500);

    setfillstyle(1,BLACK);
    bar(0,0,maxx/2,maxy);//delay(10);
    setfillstyle(1,WHITE);
    bar(maxx/2,0,maxx,maxy);
    sector( maxx/2,maxy/2,90,270,250,250);
    setfillstyle(1,BLACK);
    sector( maxx/2,maxy/2,270,90,250,250);
    delay(500);

    setfillstyle(1,WHITE);
    bar(0,0,maxx/2-2,maxy);//delay(10);
    setfillstyle(1,BLACK);
    bar(maxx/2,0,maxx,maxy);
    sector( maxx/2,maxy/2,90,270,250,250);
    setfillstyle(1,WHITE);
    sector( maxx/2,maxy/2,270,90,250,250);
    delay(500);

    setfillstyle(1,BLACK);
    bar(0,0,maxx/2,maxy);//delay(10);
    setfillstyle(1,WHITE);
    bar(maxx/2,0,maxx,maxy);
    sector( maxx/2,maxy/2,90,270,250,250);
    setfillstyle(1,BLACK);
    sector( maxx/2,maxy/2,270,90,250,250);
    delay(500);
//*************************************************************************************************
    for(i=0;i<252;i++)
    {setfillstyle(1,BLACK);
    setcolor(BLACK);
    sector( maxx/2,maxy/2,90,270,i,i);
    setfillstyle(1,WHITE);
    setcolor(WHITE);
    sector( maxx/2,maxy/2,270,90,i,i);
    delay(10);
}
    for(i=0;maxx/2-i>=0;i+=3)
    {bar(maxx/2,maxy,maxx/2-i,-1);
    delay(2);}
    setcolor(BLACK);
}


/* ****************************************************************************************************************************************************************
********************************************************** SCENE 8 ********************************************************************************************** */
void scene8()
{
    int val,i,sk=15,r,c=1;
	HANDLE handle;
    delay(1000);
//setcolor(BLACK);
    for(i=0;i<s/3-1;i++)
    {
       line(circularArray(sk,0),circularArray(sk,1),circularArray(sk+s/3,0),circularArray(sk+s/3,1));//delay(50);
        line(circularArray(sk+s/3,0),circularArray(sk+s/3,1),circularArray(sk+2*s/3,0),circularArray(sk+2*s/3,1));//delay(50);
         line(circularArray(sk+2*s/3,0),circularArray(sk+2*s/3,1),circularArray(sk+s,0),circularArray(sk+s,1));delay(50);
       sk+=15;
    }
    setcolor(WHITE);
    for(i=0;i<s/2;i++)
    {  r=rand()%300;
      /* switch(c)
       {
         case 1: r*=-1;c=2;break;
         case 2: c=1;break;
       }                                    */
       line(circularArray(sk,0)+r,circularArray(sk,1)+r,circularArray(sk+s/3,0)-r,circularArray(sk+s/3,1)+r);//delay(50);
        line(circularArray(sk+s/3,0)+r,circularArray(sk+s/3,1)-r,circularArray(sk+2*s/3,0)-r,circularArray(sk+2*s/3,1)-r);//delay(50);
         line(circularArray(sk+2*s/3,0)-r,circularArray(sk+2*s/3,1)-r,circularArray(sk+s,0)-r,circularArray(sk+s,1)-r);delay(50);
       sk+=15;
    }

    setcolor(BLACK);
    for(i=0;i<s*20;i++)
    {  r=rand()%1000;
      /* switch(c)
       {
         case 1: r*=-1;c=2;break;
         case 2: c=1;break;
       }                                    */
       line(circularArray(sk,0)+r,circularArray(sk,1)+r,circularArray(sk+s/3,0)-r,circularArray(sk+s/3,1)+r);//delay(50);
        line(circularArray(sk+s/3,0)+r,circularArray(sk+s/3,1)-r,circularArray(sk+2*s/3,0)-r,circularArray(sk+2*s/3,1)-r);//delay(50);
         line(circularArray(sk+2*s/3,0)-r,circularArray(sk+2*s/3,1)-r,circularArray(sk+s,0)-r,circularArray(sk+s,1)-r);
         if(i<s)delay(1);
       sk+=15;
    }
}

/* ****************************************************************************************************************************************************************
********************************************************** SCENE 9 ********************************************************************************************** */
void scene9()
{

//	HANDLE handle;
	int val,rx=200,ry=0,cas=1,r=250,i,d1,d2,d,sp,ep,w=50,c1,k=0;
	cleardevice();
///	rx=rand()%maxx;
	while(k<1000){

	cas=rand()%2;
	switch(cas+1)
	{
         case 1:
                ry=rand()%maxy;
                if(ry<=maxy/2-r || ry>=maxy/2+r)
                {
                    for(i=0;i<=maxx;i++)
                {putpixel(i,ry,WHITE);}}
            //    line(0,ry,200,ry);
                else
                {for(i=0;i<=maxx;i++)
                {d1=(maxx/2-i);
                d1*=d1;
                d2=(maxy/2-ry);
                d2*=d2;
                d=sqrt(d1+d2);
                if(d<=r)
                {
                    if(d==r && i<maxx/2)
                    {
                        sp=i;}
                        if(d==r && i>maxx/2)
                        {
                            ep=i;
                            c1=change;
                            change=10;
                            bezierCurve(sp,ry,maxx/2,maxy/2+w,ep,ry);
                            change=c1;}
                            continue;}
                            putpixel(i,ry,WHITE);
                        }}

          case 2:
                rx=rand()%maxx;
                if(rx<=maxx/2-r || rx>=maxx/2+r)
                {
                    for(i=0;i<=maxy;i++)
                {putpixel(rx,i,WHITE);}}
            //    line(0,ry,200,ry);
                else
                {for(i=0;i<=maxy;i++)
                {d1=(maxx/2-rx);
                d1*=d1;
                d2=(maxy/2-i);
                d2*=d2;
                d=sqrt(d1+d2);
                if(d<=r)
                {
                    if(d==r && i<maxy/2)
                    {
                        sp=i;}
                        if(d==r && i>maxy/2)
                        {
                            ep=i;
                            c1=change;
                            change=10;
                            bezierCurve(rx,sp,maxx/2+w,maxy/2,rx,ep);
                            change=c1;}
                            continue;}
                            putpixel(rx,i,WHITE);
                        }}  delay(30);}
k++;}delay(1000);cleardevice(); }


/* ****************************************************************************************************************************************************************
********************************************************** SCENE 10 ********************************************************************************************** */
void scene10()
{

	HANDLE handle;
	int val=10,val1=25,val2=50,val3=90,val4=70,val5=80,i;
	setfillstyle(1,WHITE);
    bar(0,0,maxx+10,maxy+10);//cleardevice();
    setfillstyle(1,BLACK);
//
    setcolor(BLACK);
//    handle = (HANDLE) _beginthread( scene10thread10,0,&val);
    handle = (HANDLE) _beginthread( scene10thread7,0,&val);
    handle = (HANDLE) _beginthread( scene10thread1,0,&val4);
    handle = (HANDLE) _beginthread( scene10thread2,0,&val1);
    handle = (HANDLE) _beginthread( scene10thread3,0,&val2);
    handle = (HANDLE) _beginthread( scene10thread4,0,&val3);
    handle = (HANDLE) _beginthread( scene10thread5,0,&val4);
    handle = (HANDLE) _beginthread( scene10thread6,0,&val5);
    handle = (HANDLE) _beginthread( scene10thread1,0,&val5);
    handle = (HANDLE) _beginthread( scene10thread2,0,&val4);
    handle = (HANDLE) _beginthread( scene10thread3,0,&val3);
    handle = (HANDLE) _beginthread( scene10thread4,0,&val2);
    handle = (HANDLE) _beginthread( scene10thread5,0,&val1);
    handle = (HANDLE) _beginthread( scene10thread6,0,&val);
    WaitForSingleObject(handle,INFINITE);
    for(i=0;i<250;i++){
    fillellipse(maxx/2,maxy/2,i,i);delay(10);}
    dl=100;
    handle = (HANDLE) _beginthread( scene10thread7,0,&val);
    for(i=0;i<5;i++)
    handle = (HANDLE) _beginthread( scene10thread8,0,&i);
     WaitForSingleObject(handle,INFINITE);
     delay(1000);
     cleardevice();
}
void scene10thread1(void *param1)  //****************************** THREAD 1 ********************************************************
{
	int h=*((int*)param1);
	int val,x=0,y=0,d,r=250,flag=0,limit=10000,i=0,cas,skip=15;
	//for(int j=0;j<h;j++)
//    {
    while(flag!=h)
	{
        x=rand()%maxx;
        y=rand()%maxy;
        d=dist(x,y);
        if(d<=r)
        continue;
        flag++;
    }//}
    while(i<limit)
    {
        cas=rand()%8;
        switch(cas)
        {
            case 2: d=dist(x+skip,y);
            if(d<=r || x+skip>maxx)
            continue;
            line(x,y,x+skip,y);
            i++;
            x+=skip;
            break;

            case 1: d=dist(x-skip,y);
            if(d<=r || x-skip<0)
            continue;
            line(x,y,x-skip,y);
            i++;
            x-=skip;
            break;

            case 8: d=dist(x,y+skip);
            if(d<=r || y+skip>maxy)
            continue;
            line(x,y,x,y+skip);
            i++;
            y+=skip;
            break;

            case 7: d=dist(x,y-skip);
            if(d<=r || y-skip<0)
            continue;
            line(x,y,x,y-skip);
            i++;
            y-=skip;
            break;

            case 6: d=dist(x+skip,y-skip);
            if(d<=r || x+skip>maxx || y-skip<0)
            continue;
            line(x,y,x+skip,y-skip);
            i++;
            x+=skip;
            y-=skip;
            break;

            case 5: d=dist(x+skip,y+skip);
            if(d<=r || x+skip>maxx || y+skip>maxy)
            continue;
            line(x,y,x+skip,y+skip);
            i++;
            x+=skip;
            y+=skip;
            break;

            case 4: d=dist(x-skip,y+skip);
            if(d<=r || x-skip<0 || y+skip>maxy)
            continue;
            line(x,y,x-skip,y+skip);
            i++;
            x-=skip;
            y+=skip;
            break;

            case 3: d=dist(x-skip,y-skip);
            if(d<=r || x-skip<0 || y-skip<0)
            continue;
            line(x,y,x-skip,y-skip);
            i++;
            x-=skip;
            y-=skip;
            break;
}delay(dl);
}}

void scene10thread2(void *param2)  //****************************** THREAD 2 ********************************************************
{
	int h=*((int*)param2);
	int val,x=0,y=0,d,r=250,flag=0,limit=10000,i=0,cas,skip=15;
	//for(int j=0;j<h;j++)
//    {
    while(flag!=h)
	{
        x=rand()%maxx;
        y=rand()%maxy;
        d=dist(x,y);
        if(d<=r)
        continue;
        flag++;
    }//}
    while(i<limit)
    {
        cas=rand()%8;
        switch(cas)
        {
            case 2: d=dist(x+skip,y);
            if(d<=r || x+skip>maxx)
            continue;
            line(x,y,x+skip,y);
            i++;
            x+=skip;
            break;

            case 1: d=dist(x-skip,y);
            if(d<=r || x-skip<0)
            continue;
            line(x,y,x-skip,y);
            i++;
            x-=skip;
            break;

            case 3: d=dist(x,y+skip);
            if(d<=r || y+skip>maxy)
            continue;
            line(x,y,x,y+skip);
            i++;
            y+=skip;
            break;

            case 4: d=dist(x,y-skip);
            if(d<=r || y-skip<0)
            continue;
            line(x,y,x,y-skip);
            i++;
            y-=skip;
            break;

            case 5: d=dist(x+skip,y-skip);
            if(d<=r || x+skip>maxx || y-skip<0)
            continue;
            line(x,y,x+skip,y-skip);
            i++;
            x+=skip;
            y-=skip;
            break;

            case 8: d=dist(x+skip,y+skip);
            if(d<=r || x+skip>maxx || y+skip>maxy)
            continue;
            line(x,y,x+skip,y+skip);
            i++;
            x+=skip;
            y+=skip;
            break;

            case 7: d=dist(x-skip,y+skip);
            if(d<=r || x-skip<0 || y+skip>maxy)
            continue;
            line(x,y,x-skip,y+skip);
            i++;
            x-=skip;
            y+=skip;
            break;

            case 6: d=dist(x-skip,y-skip);
            if(d<=r || x-skip<0 || y-skip<0)
            continue;
            line(x,y,x-skip,y-skip);
            i++;
            x-=skip;
            y-=skip;
            break;
}delay(dl);
}}

void scene10thread3(void *param3)  //****************************** THREAD 3 ********************************************************
{
	int h=*((int*)param3);
	int val,x=0,y=0,d,r=250,flag=0,limit=10000,i=0,cas,skip=15;
	//for(int j=0;j<h;j++)
//    {
    while(flag!=h)
	{
        x=rand()%maxx;
        y=rand()%maxy;
        d=dist(x,y);
        if(d<=r)
        continue;
        flag++;
    }//}
    while(i<limit)
    {
        cas=rand()%8;
        switch(cas)
        {
            case 2: d=dist(x+skip,y);
            if(d<=r || x+skip>maxx)
            continue;
            line(x,y,x+skip,y);
            i++;
            x+=skip;
            break;

            case 1: d=dist(x-skip,y);
            if(d<=r || x-skip<0)
            continue;
            line(x,y,x-skip,y);
            i++;
            x-=skip;
            break;

            case 3: d=dist(x,y+skip);
            if(d<=r || y+skip>maxy)
            continue;
            line(x,y,x,y+skip);
            i++;
            y+=skip;
            break;

            case 4: d=dist(x,y-skip);
            if(d<=r || y-skip<0)
            continue;
            line(x,y,x,y-skip);
            i++;
            y-=skip;
            break;

            case 5: d=dist(x+skip,y-skip);
            if(d<=r || x+skip>maxx || y-skip<0)
            continue;
            line(x,y,x+skip,y-skip);
            i++;
            x+=skip;
            y-=skip;
            break;

            case 7: d=dist(x+skip,y+skip);
            if(d<=r || x+skip>maxx || y+skip>maxy)
            continue;
            line(x,y,x+skip,y+skip);
            i++;
            x+=skip;
            y+=skip;
            break;

            case 6: d=dist(x-skip,y+skip);
            if(d<=r || x-skip<0 || y+skip>maxy)
            continue;
            line(x,y,x-skip,y+skip);
            i++;
            x-=skip;
            y+=skip;
            break;

            case 8: d=dist(x-skip,y-skip);
            if(d<=r || x-skip<0 || y-skip<0)
            continue;
            line(x,y,x-skip,y-skip);
            i++;
            x-=skip;
            y-=skip;
            break;
}delay(dl);
}}

void scene10thread4(void *param4)  //****************************** THREAD 4 ********************************************************
{
	int h=*((int*)param4);
	int val,x=0,y=0,d,r=250,flag=0,limit=10000,i=0,cas,skip=15;
	//for(int j=0;j<h;j++)
//    {
    while(flag!=h)
	{
        x=rand()%maxx;
        y=rand()%maxy;
        d=dist(x,y);
        if(d<=r)
        continue;
        flag++;
    }//}
    while(i<limit)
    {
        cas=rand()%8;
        switch(cas)
        {
            case 2: d=dist(x+skip,y);
            if(d<=r || x+skip>maxx)
            continue;
            line(x,y,x+skip,y);
            i++;
            x+=skip;
            break;

            case 1: d=dist(x-skip,y);
            if(d<=r || x-skip<0)
            continue;
            line(x,y,x-skip,y);
            i++;
            x-=skip;
            break;

            case 3: d=dist(x,y+skip);
            if(d<=r || y+skip>maxy)
            continue;
            line(x,y,x,y+skip);
            i++;
            y+=skip;
            break;

            case 4: d=dist(x,y-skip);
            if(d<=r || y-skip<0)
            continue;
            line(x,y,x,y-skip);
            i++;
            y-=skip;
            break;

            case 7: d=dist(x+skip,y-skip);
            if(d<=r || x+skip>maxx || y-skip<0)
            continue;
            line(x,y,x+skip,y-skip);
            i++;
            x+=skip;
            y-=skip;
            break;

            case 6: d=dist(x+skip,y+skip);
            if(d<=r || x+skip>maxx || y+skip>maxy)
            continue;
            line(x,y,x+skip,y+skip);
            i++;
            x+=skip;
            y+=skip;
            break;

            case 5: d=dist(x-skip,y+skip);
            if(d<=r || x-skip<0 || y+skip>maxy)
            continue;
            line(x,y,x-skip,y+skip);
            i++;
            x-=skip;
            y+=skip;
            break;

            case 8: d=dist(x-skip,y-skip);
            if(d<=r || x-skip<0 || y-skip<0)
            continue;
            line(x,y,x-skip,y-skip);
            i++;
            x-=skip;
            y-=skip;
            break;
}delay(dl);
}}

void scene10thread5(void *param5)  //****************************** THREAD 5 ********************************************************
{
	int h=*((int*)param5);
	int val,x=0,y=0,d,r=250,flag=0,limit=10000,i=0,cas,skip=15;
	//for(int j=0;j<h;j++)
//    {
    while(flag!=h)
	{
        x=rand()%maxx;
        y=rand()%maxy;
        d=dist(x,y);
        if(d<=r)
        continue;
        flag++;
    }//}
    while(i<limit)
    {
        cas=rand()%8;
        switch(cas)
        {
            case 2: d=dist(x+skip,y);
            if(d<=r || x+skip>maxx)
            continue;
            line(x,y,x+skip,y);
            i++;
            x+=skip;
            break;

            case 1: d=dist(x-skip,y);
            if(d<=r || x-skip<0)
            continue;
            line(x,y,x-skip,y);
            i++;
            x-=skip;
            break;

            case 3: d=dist(x,y+skip);
            if(d<=r || y+skip>maxy)
            continue;
            line(x,y,x,y+skip);
            i++;
            y+=skip;
            break;

            case 4: d=dist(x,y-skip);
            if(d<=r || y-skip<0)
            continue;
            line(x,y,x,y-skip);
            i++;
            y-=skip;
            break;

            case 8: d=dist(x+skip,y-skip);
            if(d<=r || x+skip>maxx || y-skip<0)
            continue;
            line(x,y,x+skip,y-skip);
            i++;
            x+=skip;
            y-=skip;
            break;

            case 5: d=dist(x+skip,y+skip);
            if(d<=r || x+skip>maxx || y+skip>maxy)
            continue;
            line(x,y,x+skip,y+skip);
            i++;
            x+=skip;
            y+=skip;
            break;

            case 6: d=dist(x-skip,y+skip);
            if(d<=r || x-skip<0 || y+skip>maxy)
            continue;
            line(x,y,x-skip,y+skip);
            i++;
            x-=skip;
            y+=skip;
            break;

            case 7: d=dist(x-skip,y-skip);
            if(d<=r || x-skip<0 || y-skip<0)
            continue;
            line(x,y,x-skip,y-skip);
            i++;
            x-=skip;
            y-=skip;
            break;
}delay(dl);
}}

void scene10thread6(void *param6)  //****************************** THREAD 6 ********************************************************
{
	int h=*((int*)param6);
	int val,x=0,y=0,d,r=250,flag=0,limit=10000,i=0,cas,skip=15;
	//for(int j=0;j<h;j++)
//    {
//    while(flag!=h)
//	{
        x=maxx-100;
        y=maxy-200;
//        d=dist(x,y);
//        if(d<=r)
 //       continue;
//        flag++;
//    }//}
    while(i<limit)
    {
        cas=rand()%8;
        switch(cas)
        {
            case 1: d=dist(x+skip,y);
            if(d<=r || x+skip>maxx)
            continue;
            line(x,y,x+skip,y);
            i++;
            x+=skip;
            break;

            case 2: d=dist(x-skip,y);
            if(d<=r || x-skip<0)
            continue;
            line(x,y,x-skip,y);
            i++;
            x-=skip;
            break;

            case 3: d=dist(x,y+skip);
            if(d<=r || y+skip>maxy)
            continue;
            line(x,y,x,y+skip);
            i++;
            y+=skip;
            break;

            case 4: d=dist(x,y-skip);
            if(d<=r || y-skip<0)
            continue;
            line(x,y,x,y-skip);
            i++;
            y-=skip;
            break;

            case 5: d=dist(x+skip,y-skip);
            if(d<=r || x+skip>maxx || y-skip<0)
            continue;
            line(x,y,x+skip,y-skip);
            i++;
            x+=skip;
            y-=skip;
            break;

            case 6: d=dist(x+skip,y+skip);
            if(d<=r || x+skip>maxx || y+skip>maxy)
            continue;
            line(x,y,x+skip,y+skip);
            i++;
            x+=skip;
            y+=skip;
            break;

            case 7: d=dist(x-skip,y+skip);
            if(d<=r || x-skip<0 || y+skip>maxy)
            continue;
            line(x,y,x-skip,y+skip);
            i++;
            x-=skip;
            y+=skip;
            break;

            case 8: d=dist(x-skip,y-skip);
            if(d<=r || x-skip<0 || y-skip<0)
            continue;
            line(x,y,x-skip,y-skip);
            i++;
            x-=skip;
            y-=skip;
            break;
}delay(dl);
}}

void scene10thread7(void *param7)  //****************************** THREAD 7 ********************************************************
{
	int h=*((int*)param7);
	delay(5000);
	dl=50;
	delay(5000);
	dl=20;
	delay(5000);
	dl=10;
	delay(5000);
	dl=0;
}

void scene10thread8(void *param8)  //****************************** THREAD 8 ********************************************************
{
	int h=*((int*)param8);
	int val,x=0,y=0,d,r=250,flag=0,limit=10000,i=0,cas,skip=15,ran;
	//for(int j=0;j<h;j++)
//    {
    setcolor(WHITE);
    while(flag!=h)
	{
        ran=rand()%s;
        x=a[ran][0];
        y=a[ran][1];
        d=dist(x,y);
        if(d>=r)
        continue;
        flag++;
    }//}
    while(i<limit)
    {
        cas=rand()%8;
        switch(cas)
        {
            case 8: d=dist(x+skip,y);
            if(d>=r)
            continue;
            line(x,y,x+skip,y);
            i++;
            x+=skip;
            break;

            case 2: d=dist(x-skip,y);
            if(d>=r)
            continue;
            line(x,y,x-skip,y);
            i++;
            x-=skip;
            break;

            case 4: d=dist(x,y+skip);
            if(d>=r)
            continue;
            line(x,y,x,y+skip);
            i++;
            y+=skip;
            break;

            case 3: d=dist(x,y-skip);
            if(d>=r)
            continue;
            line(x,y,x,y-skip);
            i++;
            y-=skip;
            break;

            case 7: d=dist(x+skip,y-skip);
            if(d>=r)
            continue;
            line(x,y,x+skip,y-skip);
            i++;
            x+=skip;
            y-=skip;
            break;

            case 6: d=dist(x+skip,y+skip);
            if(d>=r)
            continue;
            line(x,y,x+skip,y+skip);
            i++;
            x+=skip;
            y+=skip;
            break;

            case 5: d=dist(x-skip,y+skip);
            if(d>=r)
            continue;
            line(x,y,x-skip,y+skip);
            i++;
            x-=skip;
            y+=skip;
            break;

            case 1: d=dist(x-skip,y-skip);
            if(d>=r)
            continue;
            line(x,y,x-skip,y-skip);
            i++;
            x-=skip;
            y-=skip;
            break;
}delay(dl);
}}

void scene11() //******************************************** SCENE 11 *******************************************************************
{
    int val,val1,rv;
	HANDLE handle;
	for(int i=550;i>0;i-=2)
	{
        //cleardevice();
        setcolor(BLACK);
        setfillstyle(1,WHITE);
        fillellipse(maxx/2,maxy/2,250,250);
        setfillstyle(1,BLACK);
        fillellipse(maxx/2+i,maxy/2,300,300);
        delay(10);


    }
    delay(1000);
}

void scene12()         //***************************************** SCENE 12 ******************************************************************************
{ int j=0,next=0,w=0,x;
double decay=0;
    int i;
	int val,val1,innr=20;
	HANDLE handle;

		val =71;
		val1=100;
//		setfillstyle(1,WHITE);
//		bar(0,0,maxx+10,maxy+10);

  //FIRST ANIMATION STARTS:
color=4;
      for(x=s/4;x>j;x-=j)
{
//    putpixel(a[x][0],a[x][1],8-j);

 w=rand()%50;
decay+=1;
j=5;
next=x-j;
//if(x+2>568)

//color=7;
    Wiggle1(circularArray(x,0),circularArray(x,1),circularArray(next,0),circularArray(next,1),w-decay);
   delay(50);
}

//SECOND ANIMATION STARTS HERE:
color=2;
   for(x=s/4;x<s/2;x+=j)
{
//    putpixel(a[x][0],a[x][1],8-j);
//w=rand()%50;
decay=0;
    w=rand()%50;
decay+=1;
j=5;
next=x+j;
//if(x==3*s/8)


    Wiggle1(a[x%s][0],a[x%s][1],a[next%s][0],a[next%s][1],w-decay);
   delay(30);
}

//THIRD ANIMATION STARTS HERE:

//color=6;
handle = (HANDLE) _beginthread( scene12thread10,0,&innr);
	handle = (HANDLE) _beginthread( scene12thread1,0,&val); // create thread
	handle = (HANDLE) _beginthread( scene12thread2,0,&val1);
	WaitForSingleObject(handle,INFINITE);


	handle = (HANDLE) _beginthread( scene12thread3,0,&val1);

	handle = (HANDLE) _beginthread( scene12thread5,0,&innr);
	handle = (HANDLE) _beginthread( scene12thread6,0,&innr);
//	handle = (HANDLE) _beginthread( scene12thread9,0,&innr);



		handle = (HANDLE) _beginthread( scene12thread4,0,&val1);
		WaitForSingleObject(handle,INFINITE);

	handle = (HANDLE) _beginthread( scene12thread7,0,&innr);

	WaitForSingleObject(handle,INFINITE);

//	handle = (HANDLE) _beginthread( scene3thread8,0,&innr);
delay(1000);
}











//THREAD DEFENITIONS:

void scene12thread1(void *param1)  //****************************** THREAD 1 ********************************************************
{

	int h=*((int*)param1);
	int x=0,j=0,next=0,w;
for(x=3*s/8;x>=j;x-=j)
{
//    putpixel(a[x][0],a[x][1],8-j);
j=5;
next=x-j;
//if(x+2>568)

 w=rand()%50;
    Wiggle1(a[x%s][0],a[x%s][1],a[next%s][0],a[next%s][1],w);
   delay(50);
}
//setcolor(RED);
for(x=s/8;x<s/2+100;x+=j)
{
//    putpixel(a[x][0],a[x][1],8-j);
j=8;
next=x+j;
//if(x+2>568)

 w=rand()%100;
    Wiggle1(a[x%s][0],a[x%s][1],a[next%s][0],a[next%s][1],w);
   delay(20);
}
    }

	void scene12thread2(void *param2)  //******************************* THREAD 2 **********************************************
{


	int h=*((int*)param2);
    int x,j=0,next,w;
 for(x=s/4;x<s/2;x+=j)
{
//    putpixel(a[x][0],a[x][1],8-j);
j=8;
next=x+j;
//if(x+2>568)

 w=rand()%100;
    Wiggle1(a[x%s][0],a[x%s][1],a[next%s][0],a[next%s][1],w);
   delay(20);
}
j=5;
 for(x=s/4;;x-=j)
{

next=x-j;
w=rand()%80;
    Wiggle1(circularArray(x,0),circularArray(x,1),circularArray(next,0),circularArray(next,1),w);
   delay(20);
   if(next<=x/2-10)
   break;
}
    }

void scene12thread3(void *param3)  //******************************* THREAD 3 **********************************************
{
int h=*((int*)param3);
    int x,j=0,next,w;float k=0;
 for(x=0;x<s/2-10;x+=j)
{
//    putpixel(a[x][0],a[x][1],8-j);
j=10;
next=x+j;
//if(x+2>568)

 w=rand()%100;
    Wiggle1(a[x][0]-k,a[x][1],a[next][0]-k,a[next][1],w);
    k+=.4;
   delay(50);
}k=0;
 for(x=0;x<s/2-100;x+=j)
{
//    putpixel(a[x][0],a[x][1],8-j);
j=10;
next=x+j;
//if(x+2>568)

 w=rand()%200;
    Wiggle1(a[x][0]-k,a[x][1],a[next][0]-k,a[next][1],w);
    k+=1;
   delay(20);
}

k=0;
for(x=100;x<s/2;x+=j)
{
//    putpixel(a[x][0],a[x][1],8-j);
j=15;
next=x-j;
//if(x+2>568)

 w=rand()%40;
    Wiggle1(a[x][0]-k,a[x][1],a[next][0]-k,a[next][1],w);
    k++;
   delay(20);
}
boxer1(a[14][0],a[14][1]-10, 400, 250, 15, 1);
delay(100);
boxer1(a[800][0]+200,a[800][1]+10, 350, 100, 10, 2);
}

void scene12thread4(void *param4)  //******************************* THREAD 4 **********************************************
{
int h=*((int*)param4);
    int x,j=0,next,w;float k=0;
 for(x=s/4+200;x>j;x-=j)
{
//    putpixel(a[x][0],a[x][1],8-j);
j=6;
next=x-j;
//if(x+2>568)

 w=rand()%50;
    Wiggle1(circularArray(x,0)-k,circularArray(x,1),circularArray(next,0)-k,circularArray(next,1),w);
    k+=.4;
   delay(50);
}k=0;
 for(x=s/4;x>j;x-=j)
{
//    putpixel(a[x][0],a[x][1],8-j);
j=10;
next=x-j;
//if(x+2>568)

 w=rand()%200;
    Wiggle1(a[x][0]-k,a[x][1],a[next][0]-k,a[next][1],w);
    k+=.1;
   delay(20);
}

k=0;
for(x=s/4;x<s/2;x+=j)
{
//    putpixel(a[x][0],a[x][1],8-j);
j=5;
next=x+j;
//if(x+2>568)

 w=rand()%40;
    Wiggle1(a[x][0]-k,a[x][1],a[next][0]-k,a[next][1],w);
    k++;
   delay(20);
}j=0;

boxer1(a[14][0],a[14][1]-10, 400, 250, 15, 1);
boxer1(a[500][0],a[500][1]+200, 350, 150, 10, 4);

}
void scene12thread5(void *param5)  //******************************* THREAD 5 **********************************************
{
int incr=*((int*)param5);
    int x,j=0,next,w,l=0,m=0;float k=incr,shift=1;
    while(m<10)
    {
 for(x=1+l;x<=s/2-l;x+=j)
{
//    putpixel(a[x][0],a[x][1],8-j);
j=10;
next=x-j;
//if(x+2>568)

 w=rand()%100;
    Wiggle1(circularArray(x,0)-k-shift,circularArray(x,1),circularArray(next,0)-k-shift,circularArray(next,1),w);
    k+=.1;
if(circularArray(next,1)<=maxy/2&&circularArray(next,1)>=maxy/4)
shift+=2;
if(circularArray(next,1)>=maxy/2&&circularArray(next,1)<=3*maxy/4)
shift-=2;
  delay(30);//incr++;
}l+=17;j++;m++;}}

void scene12thread6(void *param6)  //******************************* THREAD 6 **********************************************
{
int incr=*((int*)param6);
    int x,j=0,next,w,l=0,m=0;float k=incr;
 //   delay(10000);
    while(m<10)
    {
 for(x=s/2-l;x>=l+j;x-=j)
{
//    putpixel(a[x][0],a[x][1],8-j);
j=10;
next=x-j;
//if(x+2>568)

 w=rand()%100;
    Wiggle1(circularArray(x,0)-k,circularArray(x,1),circularArray(next,0)-k,circularArray(next,1),w);
    k+=.1;

  delay(30);//incr++;
}l+=17;j--;m++;}}

void scene12thread7(void *param7)  //******************************* THREAD 7 **********************************************
{

int incr=*((int*)param7);int j=100,k=0,yoyo=0;
    while(yoyo<=50)
{
//boxer(a[177][0]+j,a[177][1]+j+100, 400, 800, 15, 3);
delay(100);
boxer1(a[531][0]+100-j,a[531][1]-100+j, 400, 150+j, 10, 4);
boxer1(a[14][0]-k*3,a[14][1]-10, 500, 450, 15, 1);
boxer1(a[500][0]+k,a[500][1]+200-k, 350, 350+k, 10, 4);
boxer1(a[531][0]-j,a[531][1]+100, 500, 150+j*2, 10, 4);
//boxer(circularArray(177,0)+2*j,circularArray(177,1)+k, 400, 250, 15, 4);
j+=5;k+=2;
//bgiout<<yoyo;
//outstreamxy(0,15);
yoyo++;
}
}

void scene12thread8(void *param8)  //******************************* THREAD 8 **********************************************
{

int incr=*((int*)param8);int j=0,k=0;
    while(!kbhit())
{
boxer1(a[708][0]-j,a[708][1], 100, 100, 15, 4);

//boxer(circularArray(177,0)+2*j,circularArray(177,1)+k, 400, 250, 15, 4);
j+=5;
}
}

void scene12thread9(void *param9)  //******************************* THREAD 9 **********************************************
{

int incr=*((int*)param9);int j=100,k=0,x,next,w,innr;
//HANDLE handle;
while(change!=2)
{     for(x=s/2;x<s/2+100*k&&change!=2;x+=j)
{
//    putpixel(a[x][0],a[x][1],8-j);
j=5;
next=x+j;
//if(x+2>568)

 w=rand()%50;
    Wiggle1(circularArray(x,0),circularArray(x,1),circularArray(next,0),circularArray(next,1),w);


  delay(70);//incr++;
}
for(x=s-1;x>s-100*k&&change!=2;x-=j)
{
//    putpixel(a[x][0],a[x][1],8-j);
j=5;
next=x-j;
//if(x+2>568)

 w=rand()%50;
    Wiggle1(circularArray(x,0),circularArray(x,1),circularArray(next,0),circularArray(next,1),w);


  delay(70);//incr++;
}   k++;}
//handle = (HANDLE) _beginthread( scene3thread8,0,&innr);
}

void scene12thread10(void *param10)  //******************************* THREAD 10 **********************************************
{

int incr=*((int*)param10);int i=0,rr;
while(ex!=1)
{rr=rand()%16;
color=rr;delay(100);
i++;
}}


/* ****************************************************************************************************************************************************************
********************************************************** SCENE 14 ********************************************************************************************** */
void scene14()
{

	HANDLE handle;
	int r,i,limit=26,val;//float val=0.097;
	char eclipse[26]={'Q','W','E','R','T','Y','U','I','O','P','A','S','D','F','G','H','J','K','L','Z','X','C','V','B','N','M'};
//	val=maxx
setcolor(WHITE);ex=0;

	settextstyle(2,4,20);
	for(i=0;i<limit;i++)
	{r=rand()%26;
	bgiout<<eclipse[r];
    outstreamxy(maxx/2+133,maxy/2);
    delay(50);
    cleardevice();
    }
    bgiout<<"E";
    outstreamxy(maxx/2+133,maxy/2);
    delay(10);

    for(i=0;i<limit;i++)
	{r=rand()%26;
	bgiout<<"E"<<" "<<eclipse[r];
    outstreamxy(maxx/2+133,maxy/2);
    delay(50);
    cleardevice();
    }
    bgiout<<"E"<<" "<<"C";
    outstreamxy(maxx/2+133,maxy/2);
    delay(10);

    for(i=0;i<limit;i++)
	{r=rand()%26;
	bgiout<<"E"<<" "<<"C"<<" "<<eclipse[r];
    outstreamxy(maxx/2+133,maxy/2);
    delay(50);
    cleardevice();
    }
    bgiout<<"E"<<" "<<"C"<<" "<<"L";
    outstreamxy(maxx/2+133,maxy/2);
    delay(10);

    for(i=0;i<limit;i++)
	{r=rand()%26;
	bgiout<<"E"<<" "<<"C"<<" "<<"L"<<" "<<eclipse[r];
    outstreamxy(maxx/2+133,maxy/2);
    delay(50);
    cleardevice();
    }
    bgiout<<"E"<<" "<<"C"<<" "<<"L"<<" "<<"I";
    outstreamxy(maxx/2+133,maxy/2);
    delay(10);

    for(i=0;i<limit;i++)
	{r=rand()%26;
	bgiout<<"E"<<" "<<"C"<<" "<<"L"<<" "<<"I"<<" "<<eclipse[r];
    outstreamxy(maxx/2+133,maxy/2);
    delay(50);
    cleardevice();
    }
    bgiout<<"E"<<" "<<"C"<<" "<<"L"<<" "<<"I"<<" "<<"P";
    outstreamxy(maxx/2+133,maxy/2);
    delay(10);

    for(i=0;i<limit;i++)
	{r=rand()%26;
	bgiout<<"E"<<" "<<"C"<<" "<<"L"<<" "<<"I"<<" "<<"P"<<" "<<eclipse[r];
    outstreamxy(maxx/2+133,maxy/2);
    delay(50);
    cleardevice();
    }
    bgiout<<"E"<<" "<<"C"<<" "<<"L"<<" "<<"I"<<" "<<"P"<<" "<<"S";
    outstreamxy(maxx/2+133,maxy/2);
    delay(10);

    for(i=0;i<limit;i++)
	{r=rand()%26;
	bgiout<<"E"<<" "<<"C"<<" "<<"L"<<" "<<"I"<<" "<<"P"<<" "<<"S"<<" "<<eclipse[r];
    outstreamxy(maxx/2+133,maxy/2);
    delay(50);
    cleardevice();
    } 	ex=1;
    bgiout<<"E"<<" "<<"C"<<" "<<"L"<<" "<<"I"<<" "<<"P"<<" "<<"S"<<" "<<"E";
    outstreamxy(maxx/2+133,maxy/2);
    settextstyle(7,4,2);
    delay(200);
    bgiout<<"Jubin Jose.. PixVfx";
    outstreamxy(maxx/2+200,maxy/2+20);
    handle = (HANDLE) _beginthread( scene10thread8,0,&val);
    handle = (HANDLE) _beginthread( scene10thread7,0,&val);
    delay(10);
//    line(maxx/2,0,maxx/2,maxy);
/*while(1)
{

int ry=rand()%30;
int rr=rand()%2;
if(rr==1)ry*=-1;
                for(i=0;i<=maxx;i+=100)
                {Wiggle(i,maxy/2+ry-57,i+100,maxy/2+ry-57,200);}
delay(100);
}*/
}





/********************************************************************************************************************************************
*************************************************************** COMMON FUNCTION DEFINITIONS *******************************************************************************************/

//******************************************************************DRAWING FUNCTIONS:  *********************************************
 void drawcCircle(int xc,int yc,int r)
{int j,x,k=0,y,p,w,next;

//initwindow( 640 , 480 , "WinBGIm" );




x=0;
y=r;


p=3-(2*r);

for(x=0;x<=y;x++)
{
if (p<0)
{
y=y;
p=(p+(4*x)+6);
}
else
{
y=y-1;

p=p+((4*(x-y)+10));
}


a[k][0]=xc+x;a[k][1]=yc-y;

a[1415-k][0]=xc-x;a[1415-k][1]=yc-y;

a[707-k][0]=xc+x;a[707-k][1]=yc+y;

a[708+k][0]=xc-x;a[708+k][1]=yc+y;

a[353-k][0]=xc+y;a[353-k][1]=yc-x;

a[1062+k][0]=xc-y;a[1062+k][1]=yc-x;

a[354+k][0]=xc+y;a[354+k][1]=yc+x;

a[1061-k][0]=xc-y;a[1061-k][1]=yc+x;


k++;
//bgiout <<k;
//	outstreamxy( 0 , 15 );

}
//color=8;
for( int i=0;i<2;i++)
{
for(x=0;x<=s+1;x++)
{   //setcolor(1);
    putpixel(circularArray(x,0),circularArray(x,1),color);

  delay(5);

}color=15;}
/* **********TO DRAW FULL WIGGLE CIRCLE*************

for(x=0;!kbhit();x+=j)
{
//    putpixel(a[x][0],a[x][1],8-j);
j=5;
next=x+j;
//if(x+2>568)

 w=rand()%100;
    Wiggle(a[x%568][0],a[x%568][1],a[next%568][0],a[next%568][1],w);
   delay(100);
} */

}





void Wiggle(int x1,int y1,int x2,int y2,double d)
{   double m,c,c1;
    int mx,my,p,q,p1,q1;
//	while( !kbhit() )
//    {
    //x1++;
    //x2++;
   // y1+=2;
   // y2-=2;
      if(y2-y1==0)
    m=x1-x2;
    else
   	m=(x1-x2)/(y2-y1);
	mx=int((x1+x2)/2);
	my=int((y1+y2)/2);
	c=d*d-mx*mx-m*m*mx*mx;
	c1=c/(1+m*m);
	p=int(sqrt(c1+mx*mx)+mx);
	p1=int(mx-sqrt(c1+mx*mx));
//	bgiout<<p<<"     "<<p1;
//	outstreamxy(100, 100);
	q=int(m*(p-mx)+my);
	q1=int(m*(p1-mx)+my);
	setcolor(WHITE);
/*	line(x1,y1,x2,y2);
	line(x1,y1,p,q);
	line(x2,y2,p,q);
	line(x1,y1,p1,q1);
	line(x2,y2,p1,q1); */
//	delay(50);
//	cleardevice();

switch(cas)
{   case 1:
	bezierCurve(x1,y1,p,q,x2,y2);cas=2;break;
	case 2:
	bezierCurve(x1,y1,p1,q1,x2,y2);cas=1;break;
}
}//}













    void bezierCurve(int p1x,int p1y,int p2x,int p2y,int p3x,int p3y)
    {
    int i,j,e,itr=30;
 //   int b[200];
    double a[100][2],mx,my,pax,pay,pbx,pby;
            a[0][0]=p1x;
            a[0][1]=p1y;
            a[1][0]=p2x;
            a[1][1]=p2y;
            a[2][0]=p3x;
            a[2][1]=p3y;

    for(i=0;i<=itr;i++)
    {

       pax=a[0][0];
       pay=a[0][1];

       for(j=0;j<=i+1;j++)
        {
            pbx=a[j+1][0];
            pby=a[j+1][1];
            mx=(pax+pbx)/2;
            my=(pay+pby)/2;
            a[j+1][0]=mx;
            a[j+1][1]=my;
            pax=pbx;
            pay=pby;

        }

       a[j+1][0]=pbx;
       a[j+1][1]=pby;

   }

   int k=0;
   e=itr+4;


  /* for(i=0;i<=e;i++)
   {
        for(j=0;j<2;j++)
        {
            b[k]=int(a[i][j]);
            k++;
        }
   }


/*      for(i=0;i<2*e;i++)
        {
//            bgiout <<b[i];
//            outstreamxy(100, 100);
            getch();cleardevice();
        }

*/

// drawpoly(e,b);
if(change==1)
setcolor(GREEN);
if(change==10)
setcolor(7);
else
setcolor(WHITE);
for(i=0;i<e-1;i++)

{line(int(a[i][0]),int(a[i][1]),int(a[i+1][0]),int(a[i+1][1]));
//if(change==11)
//delay(1);
}}




void boxer(int spx, int spy, int length, int breadth, int skip, int option)
{
    int l1=0,random,i=0,nsx=spx,nsy=spy,cas=1,k=0,fx,fy,sx,sy;
    long int dist1=0,dist2=0;

switch(option)
{
    /*************************************************** CASE 1 ************************************************************************/
    case 1:
   while(k<4)
    {
switch(cas)
{
    case 1: while(l1<=(3*length/4))
{
    random=rand()%3;
    switch(random+1)
    {
        case 1: ar[i][0]=nsx-skip;
                         nsx=nsx-skip;
//                         b1=b1-skip;
                ar[i][1]=nsy+skip;
                         break;
        case 3: ar[i][0]=nsx;
                ar[i][1]=nsy+skip;
                         break;
        case 2: ar[i][0]=nsx+skip;
                         nsx=nsx+skip;
//                         b1=b1+skip;
                ar[i][1]=nsy+skip;
                         break;
    }
i++;

//bgiout <<ar[i-1][0]<<"          "<<ar[i-1][1]<<"                          "<<random<<"                       "<<i ;
//	outstreamxy( 0 , 15 );delay(1000);
//cleardevice();
nsy=nsy+skip;
l1=l1+skip;
}
cas=2;
break;
case 2: while(l1<=length)
{
       random=rand()%3;
    switch(random+1)
    {
        case 1: ar[i][0]=nsx+skip;
                         nsx=nsx+skip;
//                         b1=b1-skip;
                ar[i][1]=nsy+skip;
                         break;
        case 3: ar[i][0]=nsx;
                ar[i][1]=nsy+skip;
                         break;
        case 2: ar[i][0]=nsx+skip;
                         nsx=nsx+skip;
//                         b1=b1+skip;
                ar[i][1]=nsy+skip;
                         break;
    }
i++;
nsy=nsy+skip;
l1=l1+skip;
}
cas=3;
break;
case 3:
 while(l1>length)
{
         random=rand()%2;
    switch(random+1)
    {
        case 3: ar[i][0]=nsx+skip;
                         nsx=nsx+skip;
//                         b1=b1-skip;
                ar[i][1]=nsy-skip;
                         break;
        case 1: ar[i][0]=nsx;
                ar[i][1]=nsy-skip;
                         break;
        case 2: ar[i][0]=nsx+skip;
                         nsx=nsx+skip;
//                         b1=b1+skip;
                ar[i][1]=nsy-skip;
                         break;
    }
i++;
nsy=nsy-skip;
l1=l1-skip;
}
cas=4;break;
case 4:
while(l1>=0)
{
      random=rand()%2;
    switch(random+1)
    {
        case 3: ar[i][0]=nsx-skip;
                         nsx=nsx-skip;
//                         b1=b1-skip;
                ar[i][1]=nsy-skip;
                         break;
        case 1: ar[i][0]=nsx;
                ar[i][1]=nsy-skip;
                         break;
        case 2: ar[i][0]=nsx+skip;
                         nsx=nsx+skip;
//                         b1=b1+skip;
                ar[i][1]=nsy-skip;
                         break;
    }
i++;
nsy=nsy-skip;
l1=l1-skip;
}break;
}k++;}
for(int j=0;j<i-1;j++)
{

 //   line(ar[j][0],ar[j][1],ar[j+1][0],ar[j+1][1]);
dist1=(maxx/2-ar[j+1][0])*(maxx/2-ar[j+1][0]);
dist2=(maxy/2-ar[j+1][1])*(maxy/2-ar[j+1][1]);
dist2=dist2+dist1;
//bgiout <<dist2;
dist1=sqrt(dist2);
//	outstreamxy( 0 , 15 );
if(dist1<250)
{
    Wiggle(ar[j][0],ar[j][1],ar[j+1][0],ar[j+1][1],10);
delay(1);}
}break;
/*************************************************** CASE 2 ************************************************************************/
case 2:
    while(k<4)
    {
switch(cas)
{
    case 1: while(l1<=(3*length/4))
{
    random=rand()%3;
    switch(random+1)
    {
        case 1: ar[i][0]=nsx-skip;
                         nsx=nsx-skip;
//                         b1=b1-skip;
                ar[i][1]=nsy-skip;
                         break;
        case 3: ar[i][0]=nsx;
                ar[i][1]=nsy-skip;
                         break;
        case 2: ar[i][0]=nsx+skip;
                         nsx=nsx+skip;
//                         b1=b1+skip;
                ar[i][1]=nsy-skip;
                         break;
    }
i++;

//bgiout <<ar[i-1][0]<<"          "<<ar[i-1][1]<<"                          "<<random<<"                       "<<i ;
//	outstreamxy( 0 , 15 );delay(1000);
//cleardevice();
nsy=nsy-skip;
l1=l1+skip;
}
cas=2;
break;
case 2: while(l1<=length)
{
       random=rand()%3;
    switch(random+1)
    {
        case 1: ar[i][0]=nsx+skip;
                         nsx=nsx+skip;
//                         b1=b1-skip;
                ar[i][1]=nsy-skip;
                         break;
        case 3: ar[i][0]=nsx;
                ar[i][1]=nsy-skip;
                         break;
        case 2: ar[i][0]=nsx+skip;
                         nsx=nsx+skip;
//                         b1=b1+skip;
                ar[i][1]=nsy-skip;
                         break;
    }
i++;
nsy=nsy-skip;
l1=l1+skip;
}
cas=3;
break;
case 3:
 while(l1>length)
{
         random=rand()%2;
    switch(random+1)
    {
        case 3: ar[i][0]=nsx+skip;
                         nsx=nsx+skip;
//                         b1=b1-skip;
                ar[i][1]=nsy+skip;
                         break;
        case 1: ar[i][0]=nsx;
                ar[i][1]=nsy+skip;
                         break;
        case 2: ar[i][0]=nsx+skip;
                         nsx=nsx+skip;
//                         b1=b1+skip;
                ar[i][1]=nsy+skip;
                         break;
    }
i++;
nsy=nsy+skip;
l1=l1-skip;
}
cas=4;break;
case 4:
while(l1>=0)
{
      random=rand()%2;
    switch(random+1)
    {
        case 3: ar[i][0]=nsx-skip;
                         nsx=nsx-skip;
//                         b1=b1-skip;
                ar[i][1]=nsy+skip;
                         break;
        case 1: ar[i][0]=nsx;
                ar[i][1]=nsy+skip;
                         break;
        case 2: ar[i][0]=nsx+skip;
                         nsx=nsx+skip;
//                         b1=b1+skip;
                ar[i][1]=nsy+skip;
                         break;
    }
i++;
nsy=nsy+skip;
l1=l1-skip;
}break;
}k++;}
for(int j=0;j<i-1;j++)
{

 //   line(ar[j][0],ar[j][1],ar[j+1][0],ar[j+1][1]);
dist1=(maxx/2-ar[j+1][0])*(maxx/2-ar[j+1][0]);
dist2=(maxy/2-ar[j+1][1])*(maxy/2-ar[j+1][1]);
dist2=dist2+dist1;
//bgiout <<dist2;
dist1=sqrt(dist2);
//	outstreamxy( 0 , 15 );
if(dist1<250)
{
    Wiggle(ar[j][0],ar[j][1],ar[j+1][0],ar[j+1][1],10);
delay(1);}
}break;
/*************************************************** CASE 3 ************************************************************************/
    case 3:
   while(k<4)
    {
switch(cas)
{
    case 1: while(l1<=(3*length/4))
{
    random=rand()%3;
    switch(random+1)
    {
        case 1: ar[i][0]=nsx+skip;
                         nsx=nsx+skip;
//                         b1=b1-skip;
                ar[i][1]=nsy+skip;
                         break;
        case 3: ar[i][0]=nsx;
                ar[i][1]=nsy+skip;
                         break;
        case 2: ar[i][0]=nsx-skip;
                         nsx=nsx-skip;
//                         b1=b1+skip;
                ar[i][1]=nsy+skip;
                         break;
    }
i++;

//bgiout <<ar[i-1][0]<<"          "<<ar[i-1][1]<<"                          "<<random<<"                       "<<i ;
//	outstreamxy( 0 , 15 );delay(1000);
//cleardevice();
nsy=nsy+skip;
l1=l1+skip;
}
cas=2;
break;
case 2: while(l1<=length)
{
       random=rand()%3;
    switch(random+1)
    {
        case 1: ar[i][0]=nsx-skip;
                         nsx=nsx-skip;
//                         b1=b1-skip;
                ar[i][1]=nsy+skip;
                         break;
        case 3: ar[i][0]=nsx;
                ar[i][1]=nsy+skip;
                         break;
        case 2: ar[i][0]=nsx-skip;
                         nsx=nsx-skip;
//                         b1=b1+skip;
                ar[i][1]=nsy+skip;
                         break;
    }
i++;
nsy=nsy+skip;
l1=l1+skip;
}
cas=3;
break;
case 3:
 while(l1>length)
{
         random=rand()%2;
    switch(random+1)
    {
        case 3: ar[i][0]=nsx-skip;
                         nsx=nsx-skip;
//                         b1=b1-skip;
                ar[i][1]=nsy-skip;
                         break;
        case 1: ar[i][0]=nsx;
                ar[i][1]=nsy-skip;
                         break;
        case 2: ar[i][0]=nsx-skip;
                         nsx=nsx-skip;
//                         b1=b1+skip;
                ar[i][1]=nsy-skip;
                         break;
    }
i++;
nsy=nsy-skip;
l1=l1-skip;
}
cas=4;break;
case 4:
while(l1>=0)
{
      random=rand()%2;
    switch(random+1)
    {
        case 3: ar[i][0]=nsx+skip;
                         nsx=nsx+skip;
//                         b1=b1-skip;
                ar[i][1]=nsy-skip;
                         break;
        case 1: ar[i][0]=nsx;
                ar[i][1]=nsy-skip;
                         break;
        case 2: ar[i][0]=nsx-skip;
                         nsx=nsx-skip;
//                         b1=b1+skip;
                ar[i][1]=nsy-skip;
                         break;
    }
i++;
nsy=nsy-skip;
l1=l1-skip;
}break;
}k++;}
for(int j=0;j<i-1;j++)
{

 //   line(ar[j][0],ar[j][1],ar[j+1][0],ar[j+1][1]);
dist1=(maxx/2-ar[j+1][0])*(maxx/2-ar[j+1][0]);
dist2=(maxy/2-ar[j+1][1])*(maxy/2-ar[j+1][1]);
dist2=dist2+dist1;
//bgiout <<dist2;
dist1=sqrt(dist2);
//	outstreamxy( 0 , 15 );
if(dist1<250)
{
    Wiggle(ar[j][0],ar[j][1],ar[j+1][0],ar[j+1][1],10);
delay(1);}
}break;
/*************************************************** CASE 4 ************************************************************************/
case 4:
    while(k<4)
    {
switch(cas)
{
    case 1: while(l1<=(3*length/4))
{
    random=rand()%3;
    switch(random+1)
    {
        case 1: ar[i][0]=nsx+skip;
                         nsx=nsx+skip;
//                         b1=b1-skip;
                ar[i][1]=nsy-skip;
                         break;
        case 3: ar[i][0]=nsx;
                ar[i][1]=nsy-skip;
                         break;
        case 2: ar[i][0]=nsx-skip;
                         nsx=nsx-skip;
//                         b1=b1+skip;
                ar[i][1]=nsy-skip;
                         break;
    }
i++;

//bgiout <<ar[i-1][0]<<"          "<<ar[i-1][1]<<"                          "<<random<<"                       "<<i ;
//	outstreamxy( 0 , 15 );delay(1000);
//cleardevice();
nsy=nsy-skip;
l1=l1+skip;
}
cas=2;
break;
case 2: while(l1<=length)
{
       random=rand()%3;
    switch(random+1)
    {
        case 1: ar[i][0]=nsx-skip;
                         nsx=nsx-skip;
//                         b1=b1-skip;
                ar[i][1]=nsy-skip;
                         break;
        case 3: ar[i][0]=nsx;
                ar[i][1]=nsy-skip;
                         break;
        case 2: ar[i][0]=nsx-skip;
                         nsx=nsx-skip;
//                         b1=b1+skip;
                ar[i][1]=nsy-skip;
                         break;
    }
i++;
nsy=nsy-skip;
l1=l1+skip;
}
cas=3;
break;
case 3:
 while(l1>length)
{
         random=rand()%2;
    switch(random+1)
    {
        case 3: ar[i][0]=nsx-skip;
                         nsx=nsx-skip;
//                         b1=b1-skip;
                ar[i][1]=nsy+skip;
                         break;
        case 1: ar[i][0]=nsx;
                ar[i][1]=nsy+skip;
                         break;
        case 2: ar[i][0]=nsx-skip;
                         nsx=nsx-skip;
//                         b1=b1+skip;
                ar[i][1]=nsy+skip;
                         break;
    }
i++;
nsy=nsy+skip;
l1=l1-skip;
}
cas=4;break;
case 4:
while(l1>=0)
{
      random=rand()%2;
    switch(random+1)
    {
        case 3: ar[i][0]=nsx-skip;
                         nsx=nsx-skip;
//                         b1=b1-skip;
                ar[i][1]=nsy+skip;
                         break;
        case 1: ar[i][0]=nsx;
                ar[i][1]=nsy+skip;
                         break;
        case 2: ar[i][0]=nsx-skip;
                         nsx=nsx-skip;
//                         b1=b1+skip;
                ar[i][1]=nsy+skip;
                         break;
    }
i++;
nsy=nsy+skip;
l1=l1-skip;
}break;
}k++;}
for(int j=0;j<i-1;j++)
{

 //   line(ar[j][0],ar[j][1],ar[j+1][0],ar[j+1][1]);
dist1=(maxx/2-ar[j+1][0])*(maxx/2-ar[j+1][0]);
dist2=(maxy/2-ar[j+1][1])*(maxy/2-ar[j+1][1]);
dist2=dist2+dist1;
//bgiout <<dist2;
dist1=sqrt(dist2);
//	outstreamxy( 0 , 15 );
if(dist1<250)
{
    Wiggle(ar[j][0],ar[j][1],ar[j+1][0],ar[j+1][1],10);
//delay(100);
}
}break;}
  }


void grains(int thickness) //****************************************************** GRAINS ***************************************************
{
    int i,px=0,py=0,r,r1=1,j,k=0,l=0;
while(l<3)
 {
//        setfillstyle(1,WHITE);
 //       floodfill(maxx/2,maxy/2,10);

 while(py<maxy)
 {

        r=rand()%20;

        for(i=0;i<maxx;i+=r+1+j)
        {   r1=rand()%5;
            for(j=0;j<r1+1;j++)
            {putpixel(px+i+j,py,WHITE);
            }
            //px+=j;
 //     delay(10);
        }py++;px=0;
 }px=0;py=0;k++;
 if(k==thickness){ cleardevice();k=0;l++;}
 }}


int dist(int a,int b)
{
    int d,d1,d2;
    d1=maxx/2-a;
    d1*=d1;
    d2=maxy/2-b;
    d2*=d2;
    d=sqrt(d1+d2);
    return d;
}


//************************************************************* REPEATING.. DonT CAre..*****************************************************************
void Wiggle1(int x1,int y1,int x2,int y2,double d)
{   double m,c,c1;
    int mx,my,p,q,p1,q1;
//	while( !kbhit() )
//    {
    //x1++;
    //x2++;
   // y1+=2;
   // y2-=2;
      if(y2-y1==0)
    m=x1-x2;
    else
   	m=(x1-x2)/(y2-y1);
	mx=int((x1+x2)/2);
	my=int((y1+y2)/2);
	c=d*d-mx*mx-m*m*mx*mx;
	c1=c/(1+m*m);
	p=int(sqrt(c1+mx*mx)+mx);
	p1=int(mx-sqrt(c1+mx*mx));
//	bgiout<<p<<"     "<<p1;
//	outstreamxy(100, 100);
	q=int(m*(p-mx)+my);
	q1=int(m*(p1-mx)+my);
	setcolor(WHITE);
/*	line(x1,y1,x2,y2);
	line(x1,y1,p,q);
	line(x2,y2,p,q);
	line(x1,y1,p1,q1);
	line(x2,y2,p1,q1); */
//	delay(50);
//	cleardevice();

switch(cas)
{   case 1:
	bezierCurve1(x1,y1,p,q,x2,y2);cas=2;break;
	case 2:
	bezierCurve1(x1,y1,p1,q1,x2,y2);cas=1;break;
}
}//}













    void bezierCurve1(int p1x,int p1y,int p2x,int p2y,int p3x,int p3y)
    {
    int i,j,e,itr=30;
 //   int b[200];
    double a[100][2],mx,my,pax,pay,pbx,pby;
            a[0][0]=p1x;
            a[0][1]=p1y;
            a[1][0]=p2x;
            a[1][1]=p2y;
            a[2][0]=p3x;
            a[2][1]=p3y;

    for(i=0;i<=itr;i++)
    {

       pax=a[0][0];
       pay=a[0][1];

       for(j=0;j<=i+1;j++)
        {
            pbx=a[j+1][0];
            pby=a[j+1][1];
            mx=(pax+pbx)/2;
            my=(pay+pby)/2;
            a[j+1][0]=mx;
            a[j+1][1]=my;
            pax=pbx;
            pay=pby;

        }

       a[j+1][0]=pbx;
       a[j+1][1]=pby;

   }

   int k=0;
   e=itr+4;


  /* for(i=0;i<=e;i++)
   {
        for(j=0;j<2;j++)
        {
            b[k]=int(a[i][j]);
            k++;
        }
   }


/*      for(i=0;i<2*e;i++)
        {
//            bgiout <<b[i];
//            outstreamxy(100, 100);
            getch();cleardevice();
        }

*/

// drawpoly(e,b);

setcolor(color);
for(i=0;i<e-1;i++)

{line(int(a[i][0]),int(a[i][1]),int(a[i+1][0]),int(a[i+1][1]));
//if(change==11)
//delay(1);
}}

int circularArray(int p1,int p2)
{
    int j;
 //   bgiout <<p1<<"   "<<p2;
//	outstreamxy( 0 , 15 );
    if(p1<0)
    {j=(s-(-1*p1)%s);
    return a[j][p2];}
    else
    {j=(p1%s)-1;
    return a[j][p2];}
}



void boxer1(int spx, int spy, int length, int breadth, int skip, int option)
{
    int l1=0,random,i=0,nsx=spx,nsy=spy,cas=1,k=0,fx,fy,sx,sy;
    long int dist1=0,dist2=0;

switch(option)
{
    /*************************************************** CASE 1 ************************************************************************/
    case 1:
   while(k<4)
    {
switch(cas)
{
    case 1: while(l1<=(3*length/4))
{
    random=rand()%3;
    switch(random+1)
    {
        case 1: ar[i][0]=nsx-skip;
                         nsx=nsx-skip;
//                         b1=b1-skip;
                ar[i][1]=nsy+skip;
                         break;
        case 3: ar[i][0]=nsx;
                ar[i][1]=nsy+skip;
                         break;
        case 2: ar[i][0]=nsx+skip;
                         nsx=nsx+skip;
//                         b1=b1+skip;
                ar[i][1]=nsy+skip;
                         break;
    }
i++;

//bgiout <<ar[i-1][0]<<"          "<<ar[i-1][1]<<"                          "<<random<<"                       "<<i ;
//	outstreamxy( 0 , 15 );delay(1000);
//cleardevice();
nsy=nsy+skip;
l1=l1+skip;
}
cas=2;
break;
case 2: while(l1<=length)
{
       random=rand()%3;
    switch(random+1)
    {
        case 1: ar[i][0]=nsx+skip;
                         nsx=nsx+skip;
//                         b1=b1-skip;
                ar[i][1]=nsy+skip;
                         break;
        case 3: ar[i][0]=nsx;
                ar[i][1]=nsy+skip;
                         break;
        case 2: ar[i][0]=nsx+skip;
                         nsx=nsx+skip;
//                         b1=b1+skip;
                ar[i][1]=nsy+skip;
                         break;
    }
i++;
nsy=nsy+skip;
l1=l1+skip;
}
cas=3;
break;
case 3:
 while(l1>length)
{
         random=rand()%2;
    switch(random+1)
    {
        case 3: ar[i][0]=nsx+skip;
                         nsx=nsx+skip;
//                         b1=b1-skip;
                ar[i][1]=nsy-skip;
                         break;
        case 1: ar[i][0]=nsx;
                ar[i][1]=nsy-skip;
                         break;
        case 2: ar[i][0]=nsx+skip;
                         nsx=nsx+skip;
//                         b1=b1+skip;
                ar[i][1]=nsy-skip;
                         break;
    }
i++;
nsy=nsy-skip;
l1=l1-skip;
}
cas=4;break;
case 4:
while(l1>=0)
{
      random=rand()%2;
    switch(random+1)
    {
        case 3: ar[i][0]=nsx-skip;
                         nsx=nsx-skip;
//                         b1=b1-skip;
                ar[i][1]=nsy-skip;
                         break;
        case 1: ar[i][0]=nsx;
                ar[i][1]=nsy-skip;
                         break;
        case 2: ar[i][0]=nsx+skip;
                         nsx=nsx+skip;
//                         b1=b1+skip;
                ar[i][1]=nsy-skip;
                         break;
    }
i++;
nsy=nsy-skip;
l1=l1-skip;
}break;
}k++;}
for(int j=0;j<i-1;j++)
{

 //   line(ar[j][0],ar[j][1],ar[j+1][0],ar[j+1][1]);
dist1=(maxx/2-ar[j+1][0])*(maxx/2-ar[j+1][0]);
dist2=(maxy/2-ar[j+1][1])*(maxy/2-ar[j+1][1]);
dist2=dist2+dist1;
//bgiout <<dist2;
dist1=sqrt(dist2);
//	outstreamxy( 0 , 15 );
if(dist1<250)
{
    Wiggle1(ar[j][0],ar[j][1],ar[j+1][0],ar[j+1][1],10);
delay(1);}
}break;
/*************************************************** CASE 2 ************************************************************************/
case 2:
    while(k<4)
    {
switch(cas)
{
    case 1: while(l1<=(3*length/4))
{
    random=rand()%3;
    switch(random+1)
    {
        case 1: ar[i][0]=nsx-skip;
                         nsx=nsx-skip;
//                         b1=b1-skip;
                ar[i][1]=nsy-skip;
                         break;
        case 3: ar[i][0]=nsx;
                ar[i][1]=nsy-skip;
                         break;
        case 2: ar[i][0]=nsx+skip;
                         nsx=nsx+skip;
//                         b1=b1+skip;
                ar[i][1]=nsy-skip;
                         break;
    }
i++;

//bgiout <<ar[i-1][0]<<"          "<<ar[i-1][1]<<"                          "<<random<<"                       "<<i ;
//	outstreamxy( 0 , 15 );delay(1000);
//cleardevice();
nsy=nsy-skip;
l1=l1+skip;
}
cas=2;
break;
case 2: while(l1<=length)
{
       random=rand()%3;
    switch(random+1)
    {
        case 1: ar[i][0]=nsx+skip;
                         nsx=nsx+skip;
//                         b1=b1-skip;
                ar[i][1]=nsy-skip;
                         break;
        case 3: ar[i][0]=nsx;
                ar[i][1]=nsy-skip;
                         break;
        case 2: ar[i][0]=nsx+skip;
                         nsx=nsx+skip;
//                         b1=b1+skip;
                ar[i][1]=nsy-skip;
                         break;
    }
i++;
nsy=nsy-skip;
l1=l1+skip;
}
cas=3;
break;
case 3:
 while(l1>length)
{
         random=rand()%2;
    switch(random+1)
    {
        case 3: ar[i][0]=nsx+skip;
                         nsx=nsx+skip;
//                         b1=b1-skip;
                ar[i][1]=nsy+skip;
                         break;
        case 1: ar[i][0]=nsx;
                ar[i][1]=nsy+skip;
                         break;
        case 2: ar[i][0]=nsx+skip;
                         nsx=nsx+skip;
//                         b1=b1+skip;
                ar[i][1]=nsy+skip;
                         break;
    }
i++;
nsy=nsy+skip;
l1=l1-skip;
}
cas=4;break;
case 4:
while(l1>=0)
{
      random=rand()%2;
    switch(random+1)
    {
        case 3: ar[i][0]=nsx-skip;
                         nsx=nsx-skip;
//                         b1=b1-skip;
                ar[i][1]=nsy+skip;
                         break;
        case 1: ar[i][0]=nsx;
                ar[i][1]=nsy+skip;
                         break;
        case 2: ar[i][0]=nsx+skip;
                         nsx=nsx+skip;
//                         b1=b1+skip;
                ar[i][1]=nsy+skip;
                         break;
    }
i++;
nsy=nsy+skip;
l1=l1-skip;
}break;
}k++;}
for(int j=0;j<i-1;j++)
{

 //   line(ar[j][0],ar[j][1],ar[j+1][0],ar[j+1][1]);
dist1=(maxx/2-ar[j+1][0])*(maxx/2-ar[j+1][0]);
dist2=(maxy/2-ar[j+1][1])*(maxy/2-ar[j+1][1]);
dist2=dist2+dist1;
//bgiout <<dist2;
dist1=sqrt(dist2);
//	outstreamxy( 0 , 15 );
if(dist1<250)
{
    Wiggle1(ar[j][0],ar[j][1],ar[j+1][0],ar[j+1][1],10);
delay(1);}
}break;
/*************************************************** CASE 3 ************************************************************************/
    case 3:
   while(k<4)
    {
switch(cas)
{
    case 1: while(l1<=(3*length/4))
{
    random=rand()%3;
    switch(random+1)
    {
        case 1: ar[i][0]=nsx+skip;
                         nsx=nsx+skip;
//                         b1=b1-skip;
                ar[i][1]=nsy+skip;
                         break;
        case 3: ar[i][0]=nsx;
                ar[i][1]=nsy+skip;
                         break;
        case 2: ar[i][0]=nsx-skip;
                         nsx=nsx-skip;
//                         b1=b1+skip;
                ar[i][1]=nsy+skip;
                         break;
    }
i++;

//bgiout <<ar[i-1][0]<<"          "<<ar[i-1][1]<<"                          "<<random<<"                       "<<i ;
//	outstreamxy( 0 , 15 );delay(1000);
//cleardevice();
nsy=nsy+skip;
l1=l1+skip;
}
cas=2;
break;
case 2: while(l1<=length)
{
       random=rand()%3;
    switch(random+1)
    {
        case 1: ar[i][0]=nsx-skip;
                         nsx=nsx-skip;
//                         b1=b1-skip;
                ar[i][1]=nsy+skip;
                         break;
        case 3: ar[i][0]=nsx;
                ar[i][1]=nsy+skip;
                         break;
        case 2: ar[i][0]=nsx-skip;
                         nsx=nsx-skip;
//                         b1=b1+skip;
                ar[i][1]=nsy+skip;
                         break;
    }
i++;
nsy=nsy+skip;
l1=l1+skip;
}
cas=3;
break;
case 3:
 while(l1>length)
{
         random=rand()%2;
    switch(random+1)
    {
        case 3: ar[i][0]=nsx-skip;
                         nsx=nsx-skip;
//                         b1=b1-skip;
                ar[i][1]=nsy-skip;
                         break;
        case 1: ar[i][0]=nsx;
                ar[i][1]=nsy-skip;
                         break;
        case 2: ar[i][0]=nsx-skip;
                         nsx=nsx-skip;
//                         b1=b1+skip;
                ar[i][1]=nsy-skip;
                         break;
    }
i++;
nsy=nsy-skip;
l1=l1-skip;
}
cas=4;break;
case 4:
while(l1>=0)
{
      random=rand()%2;
    switch(random+1)
    {
        case 3: ar[i][0]=nsx+skip;
                         nsx=nsx+skip;
//                         b1=b1-skip;
                ar[i][1]=nsy-skip;
                         break;
        case 1: ar[i][0]=nsx;
                ar[i][1]=nsy-skip;
                         break;
        case 2: ar[i][0]=nsx-skip;
                         nsx=nsx-skip;
//                         b1=b1+skip;
                ar[i][1]=nsy-skip;
                         break;
    }
i++;
nsy=nsy-skip;
l1=l1-skip;
}break;
}k++;}
for(int j=0;j<i-1;j++)
{

 //   line(ar[j][0],ar[j][1],ar[j+1][0],ar[j+1][1]);
dist1=(maxx/2-ar[j+1][0])*(maxx/2-ar[j+1][0]);
dist2=(maxy/2-ar[j+1][1])*(maxy/2-ar[j+1][1]);
dist2=dist2+dist1;
//bgiout <<dist2;
dist1=sqrt(dist2);
//	outstreamxy( 0 , 15 );
if(dist1<250)
{
    Wiggle1(ar[j][0],ar[j][1],ar[j+1][0],ar[j+1][1],10);
delay(1);}
}break;
/*************************************************** CASE 4 ************************************************************************/
case 4:
    while(k<4)
    {
switch(cas)
{
    case 1: while(l1<=(3*length/4))
{
    random=rand()%3;
    switch(random+1)
    {
        case 1: ar[i][0]=nsx+skip;
                         nsx=nsx+skip;
//                         b1=b1-skip;
                ar[i][1]=nsy-skip;
                         break;
        case 3: ar[i][0]=nsx;
                ar[i][1]=nsy-skip;
                         break;
        case 2: ar[i][0]=nsx-skip;
                         nsx=nsx-skip;
//                         b1=b1+skip;
                ar[i][1]=nsy-skip;
                         break;
    }
i++;

//bgiout <<ar[i-1][0]<<"          "<<ar[i-1][1]<<"                          "<<random<<"                       "<<i ;
//	outstreamxy( 0 , 15 );delay(1000);
//cleardevice();
nsy=nsy-skip;
l1=l1+skip;
}
cas=2;
break;
case 2: while(l1<=length)
{
       random=rand()%3;
    switch(random+1)
    {
        case 1: ar[i][0]=nsx-skip;
                         nsx=nsx-skip;
//                         b1=b1-skip;
                ar[i][1]=nsy-skip;
                         break;
        case 3: ar[i][0]=nsx;
                ar[i][1]=nsy-skip;
                         break;
        case 2: ar[i][0]=nsx-skip;
                         nsx=nsx-skip;
//                         b1=b1+skip;
                ar[i][1]=nsy-skip;
                         break;
    }
i++;
nsy=nsy-skip;
l1=l1+skip;
}
cas=3;
break;
case 3:
 while(l1>length)
{
         random=rand()%2;
    switch(random+1)
    {
        case 3: ar[i][0]=nsx-skip;
                         nsx=nsx-skip;
//                         b1=b1-skip;
                ar[i][1]=nsy+skip;
                         break;
        case 1: ar[i][0]=nsx;
                ar[i][1]=nsy+skip;
                         break;
        case 2: ar[i][0]=nsx-skip;
                         nsx=nsx-skip;
//                         b1=b1+skip;
                ar[i][1]=nsy+skip;
                         break;
    }
i++;
nsy=nsy+skip;
l1=l1-skip;
}
cas=4;break;
case 4:
while(l1>=0)
{
      random=rand()%2;
    switch(random+1)
    {
        case 3: ar[i][0]=nsx-skip;
                         nsx=nsx-skip;
//                         b1=b1-skip;
                ar[i][1]=nsy+skip;
                         break;
        case 1: ar[i][0]=nsx;
                ar[i][1]=nsy+skip;
                         break;
        case 2: ar[i][0]=nsx-skip;
                         nsx=nsx-skip;
//                         b1=b1+skip;
                ar[i][1]=nsy+skip;
                         break;
    }
i++;
nsy=nsy+skip;
l1=l1-skip;
}break;
}k++;}
for(int j=0;j<i-1;j++)
{

 //   line(ar[j][0],ar[j][1],ar[j+1][0],ar[j+1][1]);
dist1=(maxx/2-ar[j+1][0])*(maxx/2-ar[j+1][0]);
dist2=(maxy/2-ar[j+1][1])*(maxy/2-ar[j+1][1]);
dist2=dist2+dist1;
//bgiout <<dist2;
dist1=sqrt(dist2);
//	outstreamxy( 0 , 15 );
if(dist1<250)
{
    Wiggle1(ar[j][0],ar[j][1],ar[j+1][0],ar[j+1][1],10);
//delay(100);
}
}break;}
  }
