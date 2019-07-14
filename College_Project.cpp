//INCLUDING HEADER FILES
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
//DECLARATION OF FUNCTIONS
void boy(int p,int q);
void aeronspire(int p,int q);
void hello(int p,int q,char str[]);
void sutter();
void imagefall(char str[]);
void running_car(int);
void running_car();
void running_car2();
void car(int,int);
void runcar(int ,int );
void truncar(int ,int );
void road();
void board(int p,int q);
void board(int p,int q,int r);
void fillc();
void fillc(int);
void fillc(int,int);
void pak();
void traffic(int, int);
void carwithtraffic();
void stop_after_looking_police();
void jumptcar();
void car_without_police(int,int);
void car_without_me(int,int);
void running_police_car(int);
void running_police_car();
void police_with_me();
void woman(int,int);
void woman_accident();
void me_after_accident();
void surrender_myself();
void car_stunt();
void arriving_jbad();
void window(int,int );
void fence(int,int);
void emoji();
void house();
void ending();
void cse6();
// DECARATION OF GLOBAL VERIABLE
int x,y;
//DEFINING FUNCTIONS
void aeronspire(int p,int q)
{
    int i,j;
     j=15;
     for(i=0;i<400;i=i+4)
     {
         if(j==0)
            j=15;
             setcolor(j);
            setbkcolor(j-2);
         if(i%50==0)
        {
           j--;
        }
     //   cleardevice();

        setlinestyle(0,0,2);
        line(0,0,280,-80+i);
        line(x,0,1000,-80+i);
        line(0,0,280,0+i);
        line(x,0,1000,0+i);
        setlinestyle(0,0,5);
        setcolor(15-j);
        rectangle(280,-80+i,1000,0+i);
         settextstyle(8,0,7);
         outtextxy(300,-70+i,"GOVT.POLY.DHANBAD");
          cse6();
         delay(50);
     }
}
void cse6()
{

    settextstyle(10,0,4);
    setbkcolor(NULL);
    outtextxy(400,410,"Deepak Raj");
    setcolor(GREEN);
    outtextxy(400,440,"Richa Singh");
    outtextxy(400,470,"Mamta Marandi");
    outtextxy(400,500,"Laxmi Kora");
    outtextxy(400,530,"Maharush Perveen");
    outtextxy(400,560,"Rajiv Paul");
    outtextxy(400,590,"Md. Miraj");
    setlinestyle(0,0,2);
    line(230,650,350,400);
    line(1050,650,930,400);
    line(350,400,930,400);
}
void emoji()
{
    int x=570;
    int y=1;
    setlinestyle(0,0,5);
       delay(200);
  circle(300+x,350+y,50);
            delay(200);
            ellipse(280+x,340+y,0,0,10,5);
            delay(200);
             ellipse(320+x,340+y,0,0,10,5);
             delay(200);
             arc(300+x,355+y,210,330,30);
             settextstyle(8,0,4);
             setcolor(YELLOW);

}
void pak()
{

    settextstyle(10,0,1);
    setcolor(YELLOW);
    outtextxy(1200,650,"press any key");
     getch();
     // Beep(523,400);
}
void ending()
{
    int j=15;
     for(int i=0;i>=0;i=i+7)
     {
          delay(30);
         cleardevice();
         setlinestyle(0,0,5);
         setcolor(j);
         if(j==0)
            j=15;
         if(i%30==0)
        {  setcolor(j);
           j--;
        }
         rectangle(-770+i,40,20+i,120);
         settextstyle(8,0,7);
        // circle(200,200,40);
         outtextxy(-750+i,50,"GOVT. POLY. DHANBAD");
         setcolor(GREEN);

         if(i>=2160)
            i=0;
             settextstyle(10,0,7);
         setcolor(YELLOW);
         outtextxy(100,180,"Our Team:->");
          settextstyle(8,0,6);
         setcolor(9);
         outtextxy(550,190,"1.Deepak Kumar");
         outtextxy(550,250,"2.Richa Singh");
          outtextxy(550,310,"3.Mahrush perveen");
           outtextxy(550,370,"4.Mamta Marandi");
            outtextxy(550,430,"5.Laxmi kora ");
             outtextxy(550,490,"6.Rajeev paul");
            outtextxy(550,550,"7.Md Meraj ");
            settextstyle(1,0,3);
         setcolor(WHITE);
                    outtextxy(1010,205,"(Team Leader)");

     }
}
void hello(int p,int q,char str[])
{

    char str1[2];
    int i,j,len;
    len=strlen(str);
    settextstyle(10,0,7);
    for(i=0;i<len;i++)
    {
        str1[0]=str[i];
        printf("%s",str1);
        j=i%4;
        if(j==0)
        setcolor(GREEN);
        if(j==1)
        setcolor(YELLOW);
        if(j==2)
        setcolor(BLUE);
        if(j==3)
        setcolor(RED);
        outtextxy(p,q,str1);
        p=p+40;
        delay(100);

     }
}
void sutter()
{
    int i,j=1,k;
  k=y/5;
  setlinestyle(0,0,7);
      for(i=0;i<y/5;i++)
    {
        setcolor(GREEN);
        line(0,j+i,x,j+i);
        setcolor(BLUE);
        line(0,j+k+i,x,j+k+i);
        setcolor(YELLOW);
        line(0,j+2*k+i,x,j+2*k+i);
        setcolor(RED);
        line(0,j+3*k+i,x,j+3*k+i);
        setcolor(CYAN);
        line(0,j+4*k+i,x,j+4*k+i);
        delay(5);
    }
    delay(500);
    //pak();
    cleardevice();
}
void imagefall(char str[])
{
    for(int i=0;i<10;i++)
    {
        readimagefile(str,0,0,x,100+100*i);
    }
}
void road()
{
     setlinestyle(3,0,3);
     setcolor(WHITE);
     line(0,390,x,390);
}
void board(int p,int q)
{
    road();
     setlinestyle(0,0,2);
    setcolor(15);
    for(int i=q+50;i<=390;i++)
    {
        rectangle(p,q,p+150,q+50);
       line(p+70,q+50,p+70,i);
       line(p+75,q+50,p+75,i);
       delay(10);
    }

}
void board(int p,int q,int r)
{
     road();
     setlinestyle(0,0,2);
    setcolor(15);
   rectangle(p,q,p+150,q+50);
    line(p+70,q+50,p+70,390);
   line(p+75,q+50,p+75,390);
}
void boy(int p,int q)
{
    setlinestyle(0,0,1);
    setcolor(WHITE);
    circle(p+20,q-15,10);          //face
    ellipse(p+15,q-17,100,100,3,2);
    ellipse(p+25,q-17,100,100,3,2);
     ellipse(p+20,q-10,100,100,3,2);
     line(p+16,q-5,p+14,q);
     line(p+24,q-5,p+26,q);
}
void car(int i,int j)
{
    int l,k;
    setlinestyle(0,0,2);
    settextstyle(8,0,2);
setcolor(YELLOW);
outtextxy(150+i,340+j,"DEEPAK");
delay(100);
line(50+i,370+j,90+i,370+j);
delay(100);
arc(110+i,370+j,0,180,20);
delay(100);
line(130+i,370+j,220+i,370+j);
delay(100);
arc(240+i,370+j,0,180,20);
delay(100);
line(260+i,370+j,300+i,370+j);
delay(100);
line(300+i,370+j,300+i,350+j);
delay(100);
line(300+i,350+j,240+i,330+j);
delay(100);
line(240+i,330+j,200+i,300+j);
delay(100);
line(200+i,300+j,110+i,300+j);
delay(100);
line(110+i,300+j,80+i,330+j);
delay(100);
line(80+i,330+j,50+i,340+j);
delay(100);
line(50+i,340+j,50+i,370+j);
delay(100);
//CAR WINDOW
setcolor(13);
setlinestyle(0,0,1);
line(165+i,305+j,165+i,330+j);
delay(100);
line(165+i,330+j,230+i,330+j);
delay(100);
line(230+i,330+j,195+i,305+j);
delay(100);
line(195+i,305+j,165+i,305+j);
delay(100);
line(160+i,305+j,160+i,330+j);
delay(100);
line(160+i,330+j,100+i,330+j);
delay(100);
line(95+i,330+j,120+i,305+j);
delay(100);
line(120+i,305+j,160+i,305+j);
delay(100);
boy(170+i,330+j);
delay(100);
//wheels
setcolor(YELLOW);
setlinestyle(0,0,2);
l=i%16;
circle(110+i,370+j,17);
delay(100);
circle(110+i,370+j,16);
delay(100);
circle(110+i,370+j,15);
delay(100);
circle(110+i,370+j,14);
delay(100);
for(k=1;k<7;k++)
    circle(110+i,370+j,k);
    delay(100);
if(l<4)
   line(93+i,370+j,127+i,370+j);
    delay(100);
if(l>=4 && l<8)
    line(97+i,357+j,120+i,381+j);
    delay(100);
if(l>=8 && l<12)
    line(110+i,353+j,110+i,387+j);
    delay(100);
if(l>=12)
    line(120+i,357+j,97+i,381+j);
    delay(100);
circle(240+i,370+j,17);
delay(200);
circle(240+i,370+j,16);
delay(200);
circle(240+i,370+j,15);
delay(200);
circle(240+i,370+j,14);
delay(200);
for(k=1;k<7;k++)
    circle(240+i,370+j,k);
if(l<4)
    line(223+i,370+j,257+i,370+j);
if(l>=4 && l<8)
    line(227+i,357+j,250+i,381+j);
if(l>=8 && l<12)
    line(240+i,353+j,240+i,387+j);
if(l>=12)
    line(250+i,357+j,227+i,381+j);
}
void runcar(int i,int j)
{

   int l,k;
    setlinestyle(0,0,2);
    settextstyle(8,0,2);
setcolor(YELLOW);
outtextxy(150+i,340+j,"DEEPAK");

line(50+i,370+j,90+i,370+j);

arc(110+i,370+j,0,180,20);

line(130+i,370+j,220+i,370+j);

arc(240+i,370+j,0,180,20);

line(260+i,370+j,300+i,370+j);

line(300+i,370+j,300+i,350+j);

line(300+i,350+j,240+i,330+j);

line(240+i,330+j,200+i,300+j);

line(200+i,300+j,110+i,300+j);

line(110+i,300+j,80+i,330+j);

line(80+i,330+j,50+i,340+j);

line(50+i,340+j,50+i,370+j);

//CAR WINDOW
setcolor(13);
setlinestyle(0,0,1);
line(165+i,305+j,165+i,330+j);

line(165+i,330+j,230+i,330+j);

line(230+i,330+j,195+i,305+j);

line(195+i,305+j,165+i,305+j);

line(160+i,305+j,160+i,330+j);

line(160+i,330+j,100+i,330+j);

line(95+i,330+j,120+i,305+j);

line(120+i,305+j,160+i,305+j);

boy(170+i,330+j);

//wheels
setcolor(YELLOW);
setlinestyle(0,0,2);
l=i%16;
circle(110+i,370+j,17);

circle(110+i,370+j,16);

circle(110+i,370+j,15);

circle(110+i,370+j,14);

for(k=1;k<7;k++)
    circle(110+i,370+j,k);

if(l<4)
   line(93+i,370+j,127+i,370+j);

if(l>=4 && l<8)
    line(97+i,357+j,120+i,381+j);

if(l>=8 && l<12)
    line(110+i,353+j,110+i,387+j);

if(l>=12)
    line(120+i,357+j,97+i,381+j);

circle(240+i,370+j,17);

circle(240+i,370+j,16);

circle(240+i,370+j,15);

circle(240+i,370+j,14);

for(k=1;k<7;k++)
    circle(240+i,370+j,k);
if(l<4)
    line(223+i,370+j,257+i,370+j);
if(l>=4 && l<8)
    line(227+i,357+j,250+i,381+j);
if(l>=8 && l<12)
    line(240+i,353+j,240+i,387+j);
if(l>=12)
    line(250+i,357+j,227+i,381+j);
 road();

}
void car_without_me(int i,int j)
{


   int l,k;
    setlinestyle(0,0,2);
    settextstyle(8,0,2);
setcolor(YELLOW);
outtextxy(150+i,340+j,"DEEPAK");

line(50+i,370+j,90+i,370+j);

arc(110+i,370+j,0,180,20);

line(130+i,370+j,220+i,370+j);

arc(240+i,370+j,0,180,20);

line(260+i,370+j,300+i,370+j);

line(300+i,370+j,300+i,350+j);

line(300+i,350+j,240+i,330+j);

line(240+i,330+j,200+i,300+j);

line(200+i,300+j,110+i,300+j);

line(110+i,300+j,80+i,330+j);

line(80+i,330+j,50+i,340+j);

line(50+i,340+j,50+i,370+j);

//CAR WINDOW
setcolor(13);
setlinestyle(0,0,1);
line(165+i,305+j,165+i,330+j);

line(165+i,330+j,230+i,330+j);

line(230+i,330+j,195+i,305+j);

line(195+i,305+j,165+i,305+j);

line(160+i,305+j,160+i,330+j);

line(160+i,330+j,100+i,330+j);

line(95+i,330+j,120+i,305+j);

line(120+i,305+j,160+i,305+j);

//boy(170+i,330+j);

//wheels
setcolor(YELLOW);
setlinestyle(0,0,2);
l=i%16;
circle(110+i,370+j,17);

circle(110+i,370+j,16);

circle(110+i,370+j,15);

circle(110+i,370+j,14);

for(k=1;k<7;k++)
    circle(110+i,370+j,k);

if(l<4)
   line(93+i,370+j,127+i,370+j);

if(l>=4 && l<8)
    line(97+i,357+j,120+i,381+j);

if(l>=8 && l<12)
    line(110+i,353+j,110+i,387+j);

if(l>=12)
    line(120+i,357+j,97+i,381+j);

circle(240+i,370+j,17);

circle(240+i,370+j,16);

circle(240+i,370+j,15);

circle(240+i,370+j,14);

for(k=1;k<7;k++)
    circle(240+i,370+j,k);
if(l<4)
    line(223+i,370+j,257+i,370+j);
if(l>=4 && l<8)
    line(227+i,357+j,250+i,381+j);
if(l>=8 && l<12)
    line(240+i,353+j,240+i,387+j);
if(l>=12)
    line(250+i,357+j,227+i,381+j);
 road();
}
void truncar(int i,int j)
{

   int l,k;
    setlinestyle(0,0,2);
    settextstyle(9,0,2);
setcolor(9);
outtextxy(150+i,340+j,"police");
setcolor(GREEN);
line(50+i,370+j,90+i,370+j);

arc(110+i,370+j,0,180,20);

line(130+i,370+j,220+i,370+j);

arc(240+i,370+j,0,180,20);

line(260+i,370+j,300+i,370+j);

line(300+i,370+j,300+i,350+j);

line(300+i,350+j,240+i,330+j);

line(240+i,330+j,200+i,300+j);

line(200+i,300+j,110+i,300+j);

line(110+i,300+j,80+i,330+j);

line(80+i,330+j,50+i,340+j);

line(50+i,340+j,50+i,370+j);

//CAR WINDOW
setcolor(YELLOW);
setlinestyle(0,0,1);
line(165+i,305+j,165+i,330+j);

line(165+i,330+j,230+i,330+j);

line(230+i,330+j,195+i,305+j);

line(195+i,305+j,165+i,305+j);

line(160+i,305+j,160+i,330+j);

line(160+i,330+j,100+i,330+j);

line(95+i,330+j,120+i,305+j);

line(120+i,305+j,160+i,305+j);

boy(170+i,330+j);

//wheels
setcolor(WHITE);
setlinestyle(0,0,2);
l=i%16;
circle(110+i,370+j,17);

circle(110+i,370+j,16);

circle(110+i,370+j,15);

circle(110+i,370+j,14);

for(k=1;k<7;k++)
    circle(110+i,370+j,k);

if(l<4)
   line(93+i,370+j,127+i,370+j);

if(l>=4 && l<8)
    line(97+i,357+j,120+i,381+j);

if(l>=8 && l<12)
    line(110+i,353+j,110+i,387+j);

if(l>=12)
    line(120+i,357+j,97+i,381+j);

circle(240+i,370+j,17);

circle(240+i,370+j,16);

circle(240+i,370+j,15);

circle(240+i,370+j,14);

for(k=1;k<7;k++)
    circle(240+i,370+j,k);
if(l<4)
    line(223+i,370+j,257+i,370+j);
if(l>=4 && l<8)
    line(227+i,357+j,250+i,381+j);
if(l>=8 && l<12)
    line(240+i,353+j,240+i,387+j);
if(l>=12)
    line(250+i,357+j,227+i,381+j);
    //siren
    setcolor(BLUE);
   rectangle(153+i,288+j,164+i,293+j);
   rectangle(155+i,290+j,162+i,291+j);
       setcolor(WHITE);
    rectangle(165+i,288+j,175+i,293+j);
     rectangle(167+i,290+j,173+i,292+j);
    line(170+i,293+j,170+i,299+j);
        setcolor(RED);
     rectangle(176+i,288+j,188+i,293+j);
      rectangle(178+i,290+j,186+i,291+j);

 road();

}
void car_without_police(int i,int j)
{

   int l,k;
    setlinestyle(0,0,2);
    settextstyle(9,0,2);
setcolor(9);
outtextxy(150+i,340+j,"police");
setcolor(GREEN);
line(50+i,370+j,90+i,370+j);

arc(110+i,370+j,0,180,20);

line(130+i,370+j,220+i,370+j);

arc(240+i,370+j,0,180,20);

line(260+i,370+j,300+i,370+j);

line(300+i,370+j,300+i,350+j);

line(300+i,350+j,240+i,330+j);

line(240+i,330+j,200+i,300+j);

line(200+i,300+j,110+i,300+j);

line(110+i,300+j,80+i,330+j);

line(80+i,330+j,50+i,340+j);

line(50+i,340+j,50+i,370+j);

//CAR WINDOW
setcolor(YELLOW);
setlinestyle(0,0,1);
line(165+i,305+j,165+i,330+j);

line(165+i,330+j,230+i,330+j);

line(230+i,330+j,195+i,305+j);

line(195+i,305+j,165+i,305+j);

line(160+i,305+j,160+i,330+j);

line(160+i,330+j,100+i,330+j);

line(95+i,330+j,120+i,305+j);

line(120+i,305+j,160+i,305+j);

//boy(170+i,330+j);

//wheels
setcolor(WHITE);
setlinestyle(0,0,2);
l=i%16;
circle(110+i,370+j,17);

circle(110+i,370+j,16);

circle(110+i,370+j,15);

circle(110+i,370+j,14);

for(k=1;k<7;k++)
    circle(110+i,370+j,k);

if(l<4)
   line(93+i,370+j,127+i,370+j);

if(l>=4 && l<8)
    line(97+i,357+j,120+i,381+j);

if(l>=8 && l<12)
    line(110+i,353+j,110+i,387+j);

if(l>=12)
    line(120+i,357+j,97+i,381+j);

circle(240+i,370+j,17);

circle(240+i,370+j,16);

circle(240+i,370+j,15);

circle(240+i,370+j,14);

for(k=1;k<7;k++)
    circle(240+i,370+j,k);
if(l<4)
    line(223+i,370+j,257+i,370+j);
if(l>=4 && l<8)
    line(227+i,357+j,250+i,381+j);
if(l>=8 && l<12)
    line(240+i,353+j,240+i,387+j);
if(l>=12)
    line(250+i,357+j,227+i,381+j);
    //siren
    setcolor(BLUE);
   rectangle(153+i,288+j,164+i,293+j);
   rectangle(155+i,290+j,162+i,291+j);
       setcolor(WHITE);
    rectangle(165+i,288+j,175+i,293+j);
     rectangle(167+i,290+j,173+i,292+j);
    line(170+i,293+j,170+i,299+j);
        setcolor(RED);
     rectangle(176+i,288+j,188+i,293+j);
      rectangle(178+i,290+j,186+i,291+j);

 road();

}
void fillc()
{
     setlinestyle(0,0,1);
      setcolor(YELLOW);
    int i,j=15;
    for(i=1;i<100;i++)
    {  if(i%45==0)
        {  setcolor(YELLOW);
           j--;
        }
        circle(1250,100,i);
        delay(50);
    }
}
void fillc(int p)
{
      setcolor(YELLOW);
    int i,j=15;
    for(i=1;i<80;i++)
    {  if(i%45==0)
        {  setcolor(YELLOW);
           j--;
        }
        circle(500,50,i);
        delay(50);
    }
}
void fillc(int p,int q)
{
      setcolor(BLACK);
    int i,j=15;
    for(i=100;i>0;i--)
    {
        circle(1250,100,i);
        delay(50);
    }
}

void running_car(int m)
{
   int i,j=0;
   for(i=0;i<x;i=i+j)
   {
      if(i%100==0)
        j++;
      cleardevice();
      setcolor(15);
      outtextxy(40,120,"DHANBAD");
      board(10,100,1);
      setcolor(YELLOW);
      runcar(i,0);
      delay(7);

   }
}
void running_car()
{
    int i;
     setcolor(YELLOW);
    for(i=0;i<x;i=i+7)
   {
     cleardevice();
     road();
     runcar(i,0);
     delay(10);
  }
}
void trafic(int i,int j)
{
    road();
    setlinestyle(0,0,2);
    rectangle(700+i,200+j,710+i,390+j);
    rectangle(680+i,50+j,730+i,200+j);
  setfillstyle(1,BLACK);
    fillellipse(705+i,170+j,20,20);
    setfillstyle(1,BLACK);
    fillellipse(705+i,120+j,20,20);
    setfillstyle(1,RED);
    fillellipse(705+i,70+j,20,20);

}
void carwithtraffic()
{
    int i;
     setcolor(YELLOW);
    for(i=0;i<x;i=i+2)
   {
     cleardevice();
     if(i>800)
        i=i+5;
     trafic(500,0);
    if(i>50 && i<800)
    {
         ellipse(250+i,200,0,0,100,40);
   line(250+i,240,200+i,305);
    }
   settextstyle(3,0,2);
    if(i>50 && i<200)
    {
         outtextxy(220+i,165,"oh no..");
     outtextxy(200+i,190,"signal is red");
    }
    if(i>200 && i<350)
    {
        setcolor(YELLOW);
         outtextxy(220+i,165,"and i am");
     outtextxy(200+i,190,"getting late");
    }
     if(i>350 && i<500)
    {
        setcolor(WHITE);
         outtextxy(220+i,165,"should");
     outtextxy(170+i,190,"i stop right here ?");
    }
    if(i>500 && i<650)
    {
        setcolor(YELLOW);
         outtextxy(220+i,165,"NO..");
     outtextxy(170+i,190,"i will not stop the car");
    }
     if(i>650 && i<800)
    {
        setcolor(WHITE);
         outtextxy(220+i,165,"my");
     outtextxy(170+i,190,"family is waiting");
    }
    // outtextxy(150+i,190,"oh no.. traffic");
     runcar(i,0);
     delay(10);
  }
}
void stop_after_looking_police()
{


  for(int i=0;i<150;i=i+10)
    {
               cleardevice();
                runcar(-300+i,0);
        truncar(700,0);
        delay(10);

    }

    for(int i=0;i<5;i++)
    {

        cleardevice();

        runcar(-300+150,0);
    ellipse(100,200,0,0,100,40);
   line(100,240,50,305);


    if(i==0)
        truncar(700,0);
         settextstyle(3,0,1);
    if(i==0)
         {
          setcolor(WHITE);
             outtextxy(40,175,"Oh no...");
               outtextxy(35,195,"Police");
    pak();
         }

    if(i>0)
       {
           car_without_police(700,0);
            readimagefile("police2.jpg",600,150,740,385);
             ellipse(500,120,0,0,100,40);
            line(550,160,640,200);
       }
       settextstyle(3,0,1);
     if(i==1)
     {

          outtextxy(40,175,"Oh no...");
               outtextxy(35,195,"Police");
               setcolor(YELLOW);
         outtextxy(470,120,"yes i am");
       pak();
     }
    if(i==2)
     {
         setcolor(WHITE);
          outtextxy(40,175,"Oh no...");
               outtextxy(35,195,"Police");
               setcolor(13);
         outtextxy(445,100,"you bloody rascal.");
          outtextxy(450,120,"come come...");
          pak();
     }
     if(i==3)
     {
         setcolor(CYAN);
          outtextxy(60,175,"ok sir..");
               outtextxy(35,195,"i am coming..");
                setcolor(13);
         outtextxy(445,100,"you bloody rascal.");
          outtextxy(450,120,"come come...");
         pak();
     }
     if(i==4)
     {
         setcolor(CYAN);
          outtextxy(60,175,"ok sir..");
               outtextxy(35,195,"i am coming..");
               setcolor(YELLOW);
         outtextxy(445,100,"ok.i am waiting ");
          outtextxy(450,120,"for you in car");
        pak();
     }

    }

}
void jumptcar()
{
    int j=0,k=0,l=0;
    for(int i=0;i<x;i=i+3)
    {

        cleardevice();
     if(i<200)
        runcar(i,0);
    else if(i>200 && j<300)
        {

            runcar(i,-l);
          if(j<150)
            l=j;
          j=j+3;
        k=l;
        }
     else if(i>200 && i<x)
        {
            runcar(i,-k);
        if(k>0)
          k--;
        if(k==0)
            k=0;
        } delay(10);

     truncar(500,0);

    }
}
void running_police_car(int m)
{
     int i,j=0;
    for(i=700;i<=x;i=i+5)
   {
     cleardevice();
     road();
     if(i==x && j==0)
     {
         i=0;
         j=1;
     }
     truncar(i,0);
     if(i>=700 && i<x-50 && j==0)
    {
         ellipse(250+i,200,0,0,100,40);
   line(250+i,240,200+i,305);
    }
   settextstyle(3,0,2);
   if(i>700 && i<x  && j==0)
    {
         outtextxy(210+i,170,"you bloody...");
     outtextxy(200+i,195,"you cheated me");
    }
    if(i>0 && i<300  && j==1)
    {
        ellipse(250+i,200,0,0,100,40);
   line(250+i,240,200+i,305);
         outtextxy(220+i,165,"you will");
     outtextxy(170+i,190," have to pay for this");
    }

     delay(10);
  }

}
void running_police_car()
{
     int i;
    for(i=0;i<x;i=i+5)
   {
     cleardevice();
     road();
     truncar(i,0);
     delay(10);
  }

}
void police_with_me()
{
    int i,j;
    for(i=0,j=0;i<x+270;i=i+5)
    {
        road();
       runcar(i,0);
        delay(20);
        cleardevice();
        if(i>x/2)
          {
               truncar(j,0);

              j=j+7;
          }
    }
 //truncar(x+100,60);
}
void ghaghra(int p,int q,int j)
{
    int i;
    for(i=0;i<j;i++)
    {
        setcolor(i+1);
        if(i>14)
        setcolor(i%14);

        line(p,q,p+5,q+10);

        line(p+5,q+10,p+10,q);
        p=p+10;
    }
}
void woman(int p,int q)//130,40
{
    setcolor(GREEN);
    setlinestyle(0,0,1);
    circle(p,q,30);          //face
    line(p-10,q+30,p-10,q+50);
    line(p+10,q+30,p+10,q+50);
    line(p-50,q+50,p+50,q+50);
    line(p-50,q+50,p-50,q+140);
    line(p+50,q+50,p+50,q+140);
    line(p-50,q+130,p+50,q+130);
    line(p-50,q+132,p+50,q+132);
    ghaghra(p-50,q+130,10);   //belt
    line(p-50,q+138,p+50,q+138);
    line(p-50,q+140,p+50,q+140);
    line(p-50,q+140,p-110,q+250);
    line(p+50,q+140,p+110,q+250);
    ghaghra(p-110,q+250,22);
   ghaghra(p-100,q+230,20);
   ghaghra(p-85,q+210,17);
   ghaghra(p-75,q+190,15);
   ghaghra(p-65,q+170,13);
   ghaghra(p-55,q+150,11);
        //legs
   line(p-40,q+250,p-40,q+330);
   line(p-20,q+250,p-20,q+310);
   line(p+40,q+250,p+40,q+310);
   line(p+20,q+250,p+20,q+330);
   line(p-20,q+310,p-5,q+310);
   line(p-50,q+330,p+5,q+330);
   line(p-5,q+310,p+5,q+330);
   line(p+40,q+310,p+60,q+310);
   line(p+20,q+330,p+70,q+330);
   line(p+60,q+310,p+70,q+330);
   //button
   circle(p,q+95,4);
   circle(p,q+110,4);
   circle(p,q+125,4);
   rectangle(p-100,q+50,p-50,q+70);
   rectangle(p-120,q+10,p-100,q+70);
   //finger
   line(p-120,q+10,p-123,q);
   line(p-115,q+10,p-116,q-4);
   line(p-110,q+10,p-108,q-8);
   line(p-105,q+10,p-103,q-4);
   line(p-100,q+10,p-98,q);
   //arms
   line(p+50,q+50,p+120,q+70);
   line(p+50,q+70,p+90,q+80);
   line(p+120,q+70,p+50,q+130);
   line(p+90,q+80,p+50,q+110);
   setcolor(13);
   ellipse(p-15,q-5,100,100,5,3);
   ellipse(p+15,q-5,100,100,5,3);
ellipse(p,q+15,100,100,8,3);
ellipse(p,q+15,100,100,8,2);
ellipse(p,q+15,100,100,8,1);
//ellipse(130,55,100,100,8,3);
road();
}
void woman_accident()
{
     int j=0;
    for(int i=0;i<x+70;i=i+5)
    {


       road();
        woman(i,57);
         cleardevice();

       delay(2);
       if(i>800)
       {
           runcar(j,0);
           j=j+9;
            if(j>50 && j<900)
           {
                  ellipse(250+j,200,0,0,100,40);
                line(250+j,240,200+j,305);
            }
            settextstyle(3,0,2);
            if(j>50 && j<250)
          {
              outtextxy(220+j,165,"Side");
            outtextxy(200+j,190,"side please...");
        }
                    if(j>250 && j<450)
                {
                    setcolor(YELLOW);
            outtextxy(180+j,170,"Police is following me");
            outtextxy(200+j,190,"side please..");
                }
            if(j>450 && j<650)
            {
                setcolor(WHITE);
                outtextxy(200+j,165,"i don't want to kill");
                outtextxy(170+j,190,"a woman. please side..");
                }
                if(j>650 && j<900)
            {
                setcolor(YELLOW);
                outtextxy(200+j,165,"OK.......");
                outtextxy(170+j,190,"May God Help You");
                }
       }

      woman(i,57);
    }
   // runcar(1019,0);
          ellipse(1050,120,0,0,100,40);
            line(1100,160,1300,300);
          outtextxy(1000,100,"ohhh nooo..");
           outtextxy(1000,130,"accident");
           getch();
}
void me_after_accident()
{

    int i;
     setcolor(YELLOW);
    for(i=0;i<850;i=i+2)
   {


     cleardevice();
     road();
    if(i>50 && i<800)
    {
         ellipse(250+i,200,0,0,100,40);
   line(250+i,240,200+i,305);
    }
   settextstyle(3,0,2);
    if(i>50 && i<200)
    {
         outtextxy(220+i,165,"feeling");
     outtextxy(200+i,190,"very guilty");
    }
    if(i>200 && i<350)
    {
        setcolor(YELLOW);
         outtextxy(220+i,165,"A lady had an");
     outtextxy(200+i,190,"accident by me");
    }
     if(i>350 && i<500)
    {
        setcolor(WHITE);
         outtextxy(220+i,165,"should");
     outtextxy(170+i,190,"i surrender myself ?");
    }
    if(i>500 && i<650)
    {
        setcolor(YELLOW);
         outtextxy(220+i,165,"yes");
     outtextxy(170+i,190,"i stop here and wait ");
    }
     if(i>650 && i<800)
    {
        setcolor(WHITE);
         outtextxy(220+i,165,"till");
     outtextxy(170+i,190," police came ");
    }
    // outtextxy(150+i,190,"oh no.. traffic");
     runcar(i,0);
      road();
     delay(10);
  }
}
void surrender_myself()
{
    for(int i=0;i<500;i=i+5)
    {
        cleardevice();
        road();
        runcar(850,0);
        truncar(i,0);
        delay(10);
    }
   pak();
    cleardevice();
    car_without_police(100,0);
   readimagefile("police3.jpg",400,200,550,390);
    car_without_me(900,0);
     readimagefile("deepak.jpg",800,150,920,386);
     ellipse(500,100,0,0,100,40);
   line(520,140,480,210);
          settextstyle(3,0,1);
          setcolor(YELLOW);
   outtextxy(460,65,"Heyyy...");
    outtextxy(430,84,"why you stopped here?");
    outtextxy(440,104,"bloody rascal");
     pak();
    setcolor(WHITE);
   ellipse(800,100,0,0,100,40);
   line(770,140,830,190);
     settextstyle(3,0,1);
   outtextxy(760,65,"sorry sir...");
    outtextxy(725,84,"A lady had an accident by me");
    outtextxy(740,104,"felling very guilty");
     pak();
    cleardevice();
    car_without_police(100,0);
   readimagefile("police3.jpg",400,200,550,390);
    car_without_me(900,0);
     readimagefile("deepak.jpg",800,150,920,386);
       setcolor(YELLOW);
     ellipse(800,100,0,0,100,40);
   line(770,140,830,190);
   settextstyle(3,0,1);

   outtextxy(760,65,"that's why");
    outtextxy(725,84,"i want to surrender ");
    outtextxy(745,104,"myself");
     pak();
    setcolor(WHITE);
    ellipse(500,100,0,0,100,40);
   line(520,140,480,210);
     settextstyle(3,0,1);
    outtextxy(460,65,"ok");
    outtextxy(430,84,"i think you aren't a bad ");
    outtextxy(440,104,"boy that's why");
      pak();
    cleardevice();
    car_without_police(100,0);
   readimagefile("police3.jpg",400,200,550,390);
    car_without_me(900,0);
     readimagefile("deepak.jpg",800,150,920,386);
      setcolor(YELLOW);
      ellipse(500,100,0,0,100,40);
   line(520,140,480,210);
   settextstyle(3,0,1);
   outtextxy(460,65,"i am not");
    outtextxy(430,84,"going to take you in jail");
    outtextxy(460,104,"But");
     pak();
    cleardevice();
    car_without_police(100,0);
   readimagefile("police3.jpg",400,200,550,390);
    car_without_me(900,0);
     readimagefile("deepak.jpg",800,150,920,386);
     ellipse(500,100,0,0,100,40);
   line(520,140,480,210);
   settextstyle(3,0,1);
   outtextxy(460,65,"you have to");
    outtextxy(430,84,"pay the fine of");
    outtextxy(440,104,"Rs 2150");
      pak();
     ellipse(800,100,0,0,100,40);
   line(770,140,830,190);
   settextstyle(3,0,1);

   outtextxy(760,65,"Ok sir,i am");
    outtextxy(715,84,"paying through PAYTM");
    outtextxy(745,104,"here is screenshot");
     pak();
  readimagefile("payment.jpg",560,140,740,390);
   pak();
    cleardevice();
    car_without_police(100,0);
   readimagefile("police3.jpg",400,200,550,390);
    car_without_me(900,0);
     readimagefile("deepak.jpg",800,150,920,386);
     ellipse(800,100,0,0,100,40);
   line(770,140,830,190);
   settextstyle(3,0,1);

   outtextxy(750,65,"Ok sir,i am");
    outtextxy(715,84,"paying through PAYTM");
    outtextxy(745,104,"here is screenshot");
  readimagefile("payment.jpg",560,140,740,390);
   ellipse(500,100,0,0,100,40);
   line(520,140,480,210);
   settextstyle(3,0,1);
   setcolor(YELLOW);
   outtextxy(450,65,"Ok dude.Now you ");
    outtextxy(420,84,"can go and never do this");
    outtextxy(440,104,"type of mistake");


     pak();
    cleardevice();
    car_without_police(100,0);
   readimagefile("police3.jpg",400,200,550,390);
    car_without_me(900,0);
     readimagefile("deepak.jpg",800,150,920,386);
     ellipse(800,100,0,0,100,40);
   line(770,140,830,190);
   settextstyle(3,0,1);
    setcolor(13);
   outtextxy(770,65,"Ok ");
    outtextxy(715,84,"thank you officer");
    pak();
}
void car_stunt()
{
    int j=0,k=0,l=0;
    for(int i=0;i<x;i=i+3)
    {

        cleardevice();
        road();
     if(i<200)
        runcar(i,0);
    else if(i>200 && j<300)
        {

            runcar(i,-l);
          if(j<150)
            l=j;
          j=j+3;
        k=l;
        }
     else if(i>200 && i<x)
        {
            runcar(i,-k);
        if(k>0)
          k--;
        if(k==0)
            k=0;
        } delay(10);

    // truncar(500,0);

    }
}
void arriving_jbad()
{
    int i;

for(i=0;i<x-100;i=i+10)
{
    cleardevice();
    setcolor(15);
      outtextxy(x-140,60,"JEHANABAD");
    board(x-150,50,1);
    setcolor(YELLOW);
    runcar(i,0);
    delay(10);

}
pak();
}
void fence(int k,int l)
{

     line(k,l,k,l+100);
     delay(100);
    line(k-20,l,k-20,l+100);
    delay(100);
    line(k,l,k-10,l-20);
    delay(100);
    line(k-20,l,k-10,l-20);
    delay(100);
    circle(k-10,l+30,4);
    return;
}
void window(int p,int q)
{
    rectangle(p,q-30,p+40,q);

}
void house()
{
    int i,k,l;
    char ch;
    car(50,50);
     fillc();
     setlinestyle(0,0,1);
    setcolor(YELLOW);
    line(100,100,300,100);
    delay(100);
    line(100,100,70,160);
    delay(100);
    line(300,100,330,160);
    delay(100);
    line(70,160,330,160);
    delay(100);
    line(100,160,100,250);
    delay(100);
    line(300,160,300,250);
    delay(100);
    line(100,250,300,250);
    delay(100);
    rectangle(180,180,220,250);
    delay(100);
    rectangle(300,180,430,200);
    delay(100);
    k=410,l=160;
    for(i=0;i<4;i++)
    {
        fence(k,l);
        k=k-20;
    }
    delay(100);
    rectangle(2,180,100,200);
    k=30,l=160;
    for(i=0;i<3;i++)
    {
        fence(k,l);
        k=k+20;
    }
    line(280,100,280,70);
    delay(100);
    line(260,100,260,70);
    delay(100);
    ellipse(270,70,100,100,10,5);
    delay(100);
   // arc(290,70,0,180,30);
   line(180,250,190,243);
   delay(100);
    line(190,243,190,190);
    delay(100);
    line(190,190,180,180);
    delay(100);
    line(220,250,210,243);
    delay(100);
    line(210,243,210,190);
    delay(100);
    line(210,190,220,180);
    delay(100);
    window(240,210);
    delay(100);
    window(120,210);

     ghaghra(72,150,25);
     delay(100);
     ghaghra(80,140,24);
      delay(100);
    ghaghra(84,130,23);
 delay(100);
     ghaghra(90,120,22);
      delay(100);
    ghaghra(94,110,21);
     delay(100);
     ghaghra(98,100,20);
    delay(100);

  setcolor(WHITE);
settextstyle(3,0,2);
   // fillc(1);
    outtextxy(0,10,"I want to see you");
     outtextxy(0,40,"please press 9");
    ch=getch();
    if(ch==57)
    boy(240,210);
    ch=getch();
    if(ch==57)
    boy(120,210);
   // fillc();
  //  fillc(1,2);
}

main()
{
    int gd=0,gm;
    //INILIALING THE GRAPHICS WINDOW
    initwindow(1366,766,"Powered by Deepak Yadav",0,0,false,true);
    x=getmaxx();
    y=getmaxy();
   //CALLING OF FUNCTIONS
      imagefall("d1.jpeg");
    hello(200,600,"HELLO AND WELCOME TO");
   pak();
    sutter();
     aeronspire(0,0);
     pak();
     sutter();
     cleardevice();
     fillc();
     board(10,100);
     outtextxy(40,120,"DHANBAD");
     hello(100,200,"Source");
     pak();
     car(300,0);
     pak();
     fillc(1,1);
     sutter();
     cleardevice();
     board(1200,100);
     outtextxy(1220,120,"JEHANABAD");
     hello(600,200,"Destination");
     pak();
      sutter();
     hello(400,200,"Let's Go");
      pak();
      sutter();
      running_car(1);
      cleardevice();
      running_car();
      //traffic(0,0);
      carwithtraffic();
      cleardevice();
      running_car();
      truncar(300,0);
      stop_after_looking_police();
      jumptcar();
      running_police_car(1);
       police_with_me();
           woman_accident();
           me_after_accident();
           surrender_myself();
           cleardevice();
           car_stunt();
           cleardevice();
           arriving_jbad();
           sutter();
           hello(400,100,"WELCOME");
           hello(500,200,"TO");
           hello(400,300,"JEHANABAD");
              pak();
           sutter();
            hello(400,100,"Lets Go to Home");
            sutter();
            house();
            pak();
            fillc(1,1);
            sutter();
            cleardevice();
            readimagefile("family.jpg",0,0,500,y);
            hello(600,100,"Finally i met");
            hello(680,180," my family");
            emoji();
            pak();
            cleardevice();
            readimagefile("deepakraj.jpg",0,-10,250,y-10);
            hello(300,100,"But still i am unhappy");
            hello(380,180,"because A lady had an");
             hello(420,260,"accident by me");
             pak();
             cleardevice();
             settextstyle(10,0,10);
             setcolor(9);
             outtextxy(500,300,"SO");
             delay(1000);
             cleardevice();
             hello(50,200,"Always follow the traffic rule");
             hello(500,280,"AND");
             hello(60,360,"Never destroy other's family");
             hello(100,440," to save your family");
             pak();
             cleardevice();
             settextstyle(7,0,10);
             setcolor(9);
             outtextxy(-10,300,"Thanks for watching");
             pak();
             sutter();
             ending();
      getch();
     closegraph();
}
