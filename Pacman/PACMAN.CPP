					   /*Author:Sayan Das
					    Copyrighted (2013)
					  All Rights Reserved
			 No tech was harmed during making of this programme*/

#include <dos.h>
#include <string.h>
#include <stdio.h>
#include <iostream.h>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <fstream.h>
#define radius 10
#define delay_time 0

   int scrcrl1=0,scrcrl2=0,scrcrl3=0,scrcrl4=0,scrcrl5=0,scrcrl6=0;
   int scrcrl7=0,scrcrl8=0,scrcrl9=0,scrcrl10=0,scrcrl11=0,scrcrl12=0,scrcrl13=0;
   int scrcrl14=0,scrcrl15=0,scrcrl16=0,scrcrl17=0,scrcrl18=0,scrcrl19=0,scrcrl20=0;
   int scrcrl21=0,scrcrl22=0,scrcrl23=0,scrcrl24=0,scrcrl25=0,scrcrl26=0,scrcrl27=0;
   int scrcrl28=0,scrcrl29=0,scrcrl30=0,scrcrl31=0,scrcrl32=0,scrcrl33=0,scrcrl34=0;
   int scrcrl35=0,scrcrl36=0,scrcrl37=0,scrcrl38=0,scrcrl39=0,scrcrl40=0,scrcrl41=0;
   int scrcrl42=0,scrcrl43=0,scrcrl44=0,scrcrl45=0,scrcrl46=0,scrcrl47=0,scrcrl48=0;
   int scrcrl49=0,scrcrl50=0,scrcrl51=0,scrcrl52=0,scrcrl53=0,scrcrl54=0,scrcrl55=0;
   int scrcrl56=0,scrcrl57=0,scrcrl58=0,scrcrl59=0,scrcrl60=0,scrcrl61=0,scrcrl62=0;
   int scrcrl63=0,scrcrl64=0,scrcrl65=0,scrcrl66=0,scrcrl67=0,scrcrl68=0,scrcrl69=0;
   int scrcrl70=0,scrcrl71=0,scrcrl72=0,scrcrl73=0,scrcrl74=0,scrcrl75=0,scrcrl76=0;
   int scrcrl77=0,scrcrl78=0,scrcrl79=0,scrcrl80=0,scrcrl81=0,scrcrl82=0,scrcrl83=0;
   int tmrcrl1=0,tmrcrl2=0,tmrcrl3=0,tmrcrl4=0,tmrcrl5=0;
   int option_timer=30;
   int life=3;
   char tester[10]="[beta]\0";
   fstream file;                   //create io file

class person
{
  protected:
    char name[10];
    char stnd[5];
    char time_char[3];
    char score_char[3];
  public:
    void getData(int x2_lne,int x4_lne,int y1_lne,int y3_lne,int time,int score)
     {
	setcolor(WHITE);
	settextjustify(CENTER_TEXT, CENTER_TEXT);
	settextstyle(0, HORIZ_DIR, 1);
	outtextxy(315,465,"(C)DPS Ranipur productions");
       settextstyle(TRIPLEX_FONT,0,1);
       setcolor(RED);
       cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t";
       rectangle(x4_lne,y3_lne,x2_lne,y1_lne);
       setcolor(YELLOW);
       outtextxy((x2_lne+x4_lne)/2-100,(y1_lne+y3_lne)/2-10,"Name:");
       gets(name);

       settextstyle(TRIPLEX_FONT,0,1);
       setcolor(RED);
       cout<<"\t\t\t\t";
       rectangle(x4_lne,y3_lne,x2_lne,y1_lne);
       setcolor(YELLOW);
       outtextxy((x2_lne+x4_lne)/2-100,(y1_lne+y3_lne)/2+10,"Class:");
       gotoxy((x2_lne+x4_lne)/2-80,(y1_lne+y3_lne)/2+10);
       gets(stnd);

       sprintf(time_char,"%d",time);
       sprintf(score_char,"%d",score);

     }

   void showData(int midx,int midy)
     {
       settextstyle(SMALL_FONT,0,6);
       setcolor(RED);
       outtextxy(midx,midy,name);
       setcolor(CYAN);
       outtextxy(midx+200,midy,stnd);
       outtextxy(midx+300,midy,time_char);
       outtextxy(midx+400,midy,score_char);

     }
};


void map()
{
  setcolor(BLUE);

 rectangle(122,4,466,454);
 rectangle(124,6,464,452);

 line(124,70,164,70);
 line(124,72,164,72);

 line(464,70,424,70);
 line(464,72,424,72);

 line(164,39,254,39);
 line(164,41,254,41);

 line(204,39,204,70);
 line(206,39,206,70);

 line(244,70,324,70);
 line(244,72,324,72);

 line(324,39,424,39);
 line(324,41,424,41);

 line(364,39,364,70);
 line(366,39,366,70);

 line(284,39,284,70);
 line(286,39,286,70);

 rectangle(124,134,184,198);
 rectangle(124,136,182,196);

 line(204,102,264,102);
 line(204,104,264,104);

 line(224,134,224,198);
 line(226,134,226,198);

 line(264,134,344,134);
 line(264,136,344,136);

 line(304,102,304,134);
 line(306,102,306,134);

 line(264,166,344,166);
 line(264,168,344,168);

 line(264,166,264,262);
 line(266,166,266,262);

 line(264,262,284,262);
 line(264,264,284,264);

 line(324,262,344,262);
 line(324,264,344,264);

 line(344,166,344,262);
 line(346,166,346,262);

 line(384,102,384,134);
 line(386,102,386,134);

 line(384,134,424,134);
 line(384,136,424,136);

 line(384,166,384,262);
 line(386,166,386,262);

 line(424,166,424,262);
 line(426,166,426,262);

 line(424,166,464,166);
 line(424,168,464,168);

 line(424,262,464,262);
 line(424,260,464,260);

 line(124,230,184,230);
 line(124,232,184,232);

 line(184,134,184,198);
 line(182,134,182,198);

 line(124,294,184,294);
 line(124,292,184,292);

 line(164,358,184,358);
 line(164,360,184,360);

 rectangle(164,390,184,422);
 rectangle(166,392,182,420);

 line(224,230,224,358);
 line(226,230,226,358);

 line(224,294,264,294);
 line(224,296,264,296);

 line(264,358,344,358);
 line(264,356,344,356);

 line(304,294,304,358);
 line(306,294,306,358);

 rectangle(344,390,384,422);
 rectangle(346,392,382,420);

 line(304,390,304,454);
 line(306,390,306,454);

 rectangle(224,390,264,422);
 rectangle(226,392,262,420);

 line(344,294,384,294);
 line(344,296,384,296);

 line(384,294,384,358);
 line(382,294,382,358);

 setcolor(WHITE);
 settextjustify(CENTER_TEXT, CENTER_TEXT);
 settextstyle(0, HORIZ_DIR, 1);
 outtextxy(315,465,"(C)DPS Ranipur productions");

}



 welcome()
{

   int gdriver = DETECT, gmode, errorcode;
   int style, midx, midy,midx_pac_strt=0;
  // int size = 1;


   initgraph(&gdriver, &gmode, "");


   midx = getmaxx() / 2;
   midy = getmaxy() / 2;
   for(int i=0;i<5;i++)
    {
     for(int j=0;j<5;j++)
      {
       randomize();
       setcolor(random(1000));
       settextjustify(CENTER_TEXT, CENTER_TEXT);
       settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 5);
       outtextxy(midx, midy, "PACMAN V1.0");
       setcolor(RED);
       settextstyle(0, HORIZ_DIR, 1);
       outtextxy(475,227,tester);
       gotoxy(midx,midx+1);
	if(j==0)
	 {
	  setcolor(WHITE);
	  settextjustify(CENTER_TEXT, CENTER_TEXT);
	  settextstyle(style, HORIZ_DIR, 2);
	  outtextxy(midx,midy+30,"Loading.");
	 }
	if(j==1)
	 {
	  setcolor(WHITE);
	  settextjustify(CENTER_TEXT, CENTER_TEXT);
	  settextstyle(style, HORIZ_DIR, 2);
	  outtextxy(midx,midy+30,"Loading..");
	 }
	if(j==2)
	 {
	  setcolor(WHITE);
	  settextjustify(CENTER_TEXT, CENTER_TEXT);
	  settextstyle(style, HORIZ_DIR, 2);
	  outtextxy(midx,midy+30,"Loading...");
	 }
	if(j==3)
	 {
	  setcolor(WHITE);
	  settextjustify(CENTER_TEXT, CENTER_TEXT);
	  settextstyle(style, HORIZ_DIR, 2);
	  outtextxy(midx,midy+30,"Loading....");
	 }
	if(j==4)
	{
	  setcolor(WHITE);
	  settextjustify(CENTER_TEXT, CENTER_TEXT);
	  settextstyle(style, HORIZ_DIR, 2);
	  outtextxy(midx,midy+30,"Loading.....");
	 }

	setcolor(WHITE);
	settextjustify(CENTER_TEXT, CENTER_TEXT);
	settextstyle(style, HORIZ_DIR, 1);
	outtextxy(midx,midy+45,"(c)Sayan Das");

	setcolor(WHITE);
	settextjustify(CENTER_TEXT, CENTER_TEXT);
	settextstyle(0, HORIZ_DIR, 1);
	outtextxy(315,465,"(C)DPS Ranipur productions");

	if((i==4)&&(j==4))
	 {
	  for(int mov_x=0;mov_x<(getmaxy()/2)+85;mov_x=mov_x+20)
	  {
	   int  stangle_strt=0,endangle_strt=360;
	   midx_pac_strt=mov_x;

	     for(int i=1;i<=10;i++)

		{

		   setfillstyle(WIDE_DOT_FILL, getmaxcolor());
		   setcolor(YELLOW);
		   pieslice(midx_pac_strt, getmaxy()/2, stangle_strt, endangle_strt, 149);
		   setcolor(GREEN);
		   settextjustify(CENTER_TEXT, CENTER_TEXT);
		   settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 5);
		   outtextxy(midx, midy, "PACMAN V1.0");
		    setcolor(RED);
		    settextstyle(0, HORIZ_DIR, 1);
		    outtextxy(475,227,tester);
		   setcolor(WHITE);
		   settextjustify(CENTER_TEXT, CENTER_TEXT);
		   settextstyle(0, HORIZ_DIR, 1);
		   outtextxy(315,465,"(C)DPS Ranipur productions");
		   setcolor(WHITE);

		   gotoxy(midx,midx+1);

		   delay(45);

		  if(i<5)

		   {
		     cleardevice();
		     stangle_strt+=10;
		     endangle_strt-=10;
		   }

		  if(i==5)
		     cleardevice();

		  if(i>5)
		    {
		      stangle_strt-=10;
		      endangle_strt+=10;
		    }
		  }
		}

       }
     if((i==4)&&(j==4))
      {
	setcolor(WHITE);
	settextjustify(CENTER_TEXT, CENTER_TEXT);
	settextstyle(0, HORIZ_DIR, 1);
	outtextxy(315,268,"Just a key behind all the fun");
      getch();
      }
	delay(230);
	cleardevice();
      }
   }

   return(0);
}

void menu_text()
{
 setcolor(YELLOW);
 settextjustify(CENTER_TEXT, CENTER_TEXT);
 settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
 outtextxy(315, 45, "NEW GAME");
 setcolor(RED);
 settextstyle(0, HORIZ_DIR, 1);
 outtextxy(440,44,tester);

 setcolor(YELLOW);
 settextjustify(CENTER_TEXT, CENTER_TEXT);
 settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
 outtextxy(315, 120, "HIGHSCORE");
  setcolor(RED);
 settextstyle(0, HORIZ_DIR, 1);
 outtextxy(440,119,tester);

 setcolor(YELLOW);
 settextjustify(CENTER_TEXT, CENTER_TEXT);
 settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
 outtextxy(315, 195, "ABOUT");

 settextjustify(CENTER_TEXT, CENTER_TEXT);
 settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
 outtextxy(315, 270, "SET TIMER");

 settextjustify(CENTER_TEXT, CENTER_TEXT);
 settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
 outtextxy(315, 345, "QUITE");

 setcolor(BLUE);
 settextjustify(CENTER_TEXT, CENTER_TEXT);
 settextstyle(10, 5, 4);
 outtextxy(55,195,"PACMAN V1.0");

 setcolor(BLUE);
 settextjustify(CENTER_TEXT, CENTER_TEXT);
 settextstyle(10, 5, 4);
 outtextxy(555,195,"PACMAN V1.0");

 setcolor(RED);
 settextjustify(CENTER_TEXT, CENTER_TEXT);
 settextstyle(0, HORIZ_DIR, 1);
 outtextxy(315,445,"['w' to move up, 's' to move down, 'f' to select]");

 setcolor(WHITE);
 settextjustify(CENTER_TEXT, CENTER_TEXT);
 settextstyle(0, HORIZ_DIR, 1);
 outtextxy(315,465,"(C)DPS Ranipur productions");
}

 int menu()
{
 char move_menu;
 char counter_char[4];
 int counter=1;
 int option_menu;
 int hscr_x=120,hscr_y=140;
 person pers;

 cleardevice();
 menu_text();

 int x1=185,y1=25,x2=450,y2=75;
 for(int i=1;move_menu!='f';)
  {
    setcolor(RED);
    rectangle(x1,y1,x2,y2);
    move_menu=getche();
    if(move_menu=='f')
    {
     option_menu=i;
     break;
    }

    if(i==1)
     {
      if(move_menu=='s')
       {
	  cleardevice();
	  i++;
	  setcolor(RED);
	  rectangle(x1,y1+=75,x2,y2+=75);
	  menu_text();
       }
     }
    else
    if(i==2)
     {
	 if(move_menu=='s')
       {
	  cleardevice();
	  i++;
	  setcolor(RED);
	  rectangle(x1,y1+=75,x2,y2+=75);
	  menu_text();
       }
     else
      if(move_menu=='w')
       {
	  cleardevice();
	  i--;
	  setcolor(RED);
	  rectangle(x1,y1-=75,x2,y2-=75);
	  menu_text();
       }
     }
    else
    if(i==3)
     {
	 if(move_menu=='s')
       {
	  cleardevice();
	  i++;
	  setcolor(RED);
	  rectangle(x1,y1+=75,x2,y2+=75);
	  menu_text();
       }
     else
      if(move_menu=='w')
       {
	  cleardevice();
	  i--;
	  setcolor(RED);
	  rectangle(x1,y1-=75,x2,y2-=75);
	  menu_text();
       }
     }
    else
    if(i==4)
     {
      if(move_menu=='s')
       {
	  cleardevice();
	  i++;
	  setcolor(RED);
	  rectangle(x1,y1+=75,x2,y2+=75);
	  menu_text();
       }
       else
      if(move_menu=='w')
       {
	  cleardevice();
	  i--;
	  setcolor(RED);
	  rectangle(x1,y1-=75,x2,y2-=75);
	  menu_text();
       }
     }
 if(i==5)
     {
      if(move_menu=='w')
       {
	  cleardevice();
	  i--;
	  setcolor(RED);
	  rectangle(x1,y1-=75,x2,y2-=75);
	  menu_text();
       }
     }
  }
 cleardevice();


 if(i==2)
  {
    int x_table=280;
    setcolor(DARKGRAY);
    rectangle(10,105,600,430);
    line(10,130,600,130);
    line(50,105,50,430);
    for(int i=1;i<=3;i++,x_table+=90)
     {
       line(x_table,105,x_table,430);
     }

   // setcolor(LIGHTGREEN);
    settextjustify(CENTER_TEXT, CENTER_TEXT);
    settextstyle(6, HORIZ_DIR,1 );
    outtextxy(30,117,"S.No.");
    outtextxy(120,117,"Name");
    outtextxy(320,117,"Class");
    outtextxy(420,117,"Time");
    outtextxy(520,117,"Score");

    setcolor(WHITE);
    settextjustify(CENTER_TEXT, CENTER_TEXT);
    settextstyle(0, HORIZ_DIR, 1);
    outtextxy(315,465,"(C)DPS Ranipur productions");

    setcolor(RED);
    outtextxy(315,450,"Press any key to continue.");

    setcolor(GREEN);
    outtextxy(315,440,"NOTE:If data superimposes delete person.dat from tc/bin.");//*/

    setcolor(YELLOW);
    settextjustify(CENTER_TEXT, CENTER_TEXT);
    settextstyle(GOTHIC_FONT, HORIZ_DIR, 6);
    outtextxy(315,35,"Highscore");

    file.open("PERSON.TXT",ios::app|ios::out|ios::in);  //data from user to file
    file.seekg(0);                                      //reset to start of file
    file.read((char*)&pers,sizeof(pers));
    for(;!file.eof();hscr_y+=20,counter++)
     {
       sprintf(counter_char,"%d",counter);
       setcolor(WHITE);
       settextjustify(CENTER_TEXT, CENTER_TEXT);
       settextstyle(SMALL_FONT, HORIZ_DIR, 5);
       outtextxy(30,hscr_y,counter_char);
       pers.showData(hscr_x,hscr_y);
       file.read((char*)&pers,sizeof(pers));             //read another person
     }
    file.close();

    getch();
    menu();
  }

 if(i==5)
  exit(0);

 if(i==4)
 {
   void set_timer();
   set_timer();
 }

 if(i==3)
  {
   void help();
   help();
  }
  return(0);
}


menu_timer()
{

 setcolor(YELLOW);
 settextjustify(CENTER_TEXT, CENTER_TEXT);
 settextstyle(GOTHIC_FONT, HORIZ_DIR, 6);
 outtextxy(315,35,"Select Timer");

 setcolor(WHITE);
 settextjustify(CENTER_TEXT, CENTER_TEXT);
 settextstyle(3, HORIZ_DIR, 3);
 outtextxy(315, 120, "15 seconds");

 settextjustify(CENTER_TEXT, CENTER_TEXT);
 settextstyle(3, HORIZ_DIR, 3);
 outtextxy(315, 195, "30 seconds");

 settextjustify(CENTER_TEXT, CENTER_TEXT);
 settextstyle(3, HORIZ_DIR, 3);
 outtextxy(315, 275, "45 seconds");

 setcolor(RED);
 settextjustify(CENTER_TEXT, CENTER_TEXT);
 settextstyle(0, HORIZ_DIR, 1);
 outtextxy(315,445,"['w' to move up, 's' to move down, 'f' to select, 'm' to main menu]");

 setcolor(WHITE);
 settextjustify(CENTER_TEXT, CENTER_TEXT);
 settextstyle(0, HORIZ_DIR, 1);
 outtextxy(315,465,"(C)DPS Ranipur productions");

 return(0);
}

void set_timer()
{
 void main();
 char move_menu;
 int x1=185,y1=100,x2=450,y2=150;

 cleardevice();

 menu_timer();
 setcolor(RED);
 rectangle(x1,y1,x2,y2);
 move_menu='s';

 for(int i=1;move_menu!='f';)
  {
 x: move_menu=getch();
    if(move_menu=='f')
    {
     if(i==1)
       option_timer=15;

     if(i==2)
       option_timer=30;

     if(i==3)
       option_timer=45;
     break;
    }

  if(move_menu=='m')
   {
    cleardevice();
    main();
   }

    if(i==1)
     {
      if(move_menu=='s')
       {
	  cleardevice();
	  i++;
	  setcolor(RED);
	  rectangle(x1,y1+=75,x2,y2+=75);
	  menu_timer();
	  goto x;

       }
     }

    if(i==2)
     {
	 if(move_menu=='s')
       {
	  cleardevice();
	  i++;
	  setcolor(RED);
	  rectangle(x1,y1+=75,x2,y2+=75);
	  menu_timer();
	  goto x;
       }
     else
      if(move_menu=='w')
       {
	  cleardevice();
	  i--;
	  setcolor(RED);
	  rectangle(x1,y1-=75,x2,y2-=75);
	  menu_timer();
	  goto x;

       }
     }

    if(i==3)
     {
	 if(move_menu=='w')
       {
	  cleardevice();
	  i--;
	  setcolor(RED);
	  rectangle(x1,y1-=75,x2,y2-=75);
	  menu_timer();
	  goto x;

       }
    }
  }
  menu();
}


int score_check(int midx,int midy,int score)
{
  map();
     if(scrcrl1==0&&(midx==280)&&(midy==245))
    {
       score++;
       scrcrl1++;
    }
   else
   if(scrcrl1!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(280,245,3);
   }

   if(scrcrl2==0&&(midx==280)&&(midy==190))
   {
     score++;
     scrcrl2++;
   }
   else
   if(scrcrl2!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(280,190,3);
   }

      if(scrcrl3==0&&(midx==330)&&(midy==190))
   {
     score++;
     scrcrl3++;
   }
   else
   if(scrcrl3!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(330,190,3);
   }

      if(scrcrl4==0&&(midx==330)&&(midy==245))
   {
     score++;
     scrcrl4++;
   }
   else
   if(scrcrl4!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(330,245,3);
   }

	 if(scrcrl5==0&&(midx==330)&&(midy==280))
   {
     score++;
     scrcrl5++;
   }
   else
   if(scrcrl5!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(330,280,3);
   }

   if(scrcrl6==0&&(midx==285)&&(midy==280))
   {
     score++;
     scrcrl6++;
   }
   else
   if(scrcrl6!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(285,280,3);
   }

   if(scrcrl7==0&&(midx==245)&&(midy==280))
   {
     score++;
     scrcrl7++;
   }
   else
   if(scrcrl7!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(245,280,3);
   }

   if(scrcrl8==0&&(midx==365)&&(midy==280))
   {
     score++;
     scrcrl8++;
   }
   else
   if(scrcrl8!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(365,280,3);
   }

   if(scrcrl9==0&&(midx==205)&&(midy==280))
   {
     score++;
     scrcrl9++;
   }
   else
   if(scrcrl9!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(205,280,3);
   }

   if(scrcrl10==0&&(midx==160)&&(midy==280))
   {
     score++;
     scrcrl10++;
   }
   else
   if(scrcrl10!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(160,280,3);
   }

   if(scrcrl11==0&&(midx==160)&&(midy==250))
   {
     score++;
     scrcrl11++;
   }
   else
   if(scrcrl11!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(160,250,3);
   }

   if(scrcrl12==0&&(midx==205)&&(midy==250))
   {
     score++;
     scrcrl12++;
   }
   else
   if(scrcrl12!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(205,250,3);
   }

   if(scrcrl13==0&&(midx==245)&&(midy==250))
   {
     score++;
     scrcrl13++;
   }
   else
   if(scrcrl13!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(245,250,3);
   }

   if(scrcrl14==0&&(midx==365)&&(midy==245))
   {
     score++;
     scrcrl14++;
   }
   else
   if(scrcrl14!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(365,245,3);
   }

   if(scrcrl15==0&&(midx==405)&&(midy==245))
   {
     score++;
     scrcrl15++;
   }
   else
   if(scrcrl15!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(405,245,3);
   }

   if(scrcrl16==0&&(midx==405)&&(midy==280))
   {
     score++;
     scrcrl16++;
   }
   else
   if(scrcrl16!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(405,280,3);
   }

   if(scrcrl17==0&&(midx==445)&&(midy==280))
   {
     score++;
     scrcrl17++;
   }
   else
   if(scrcrl17!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(445,280,3);
   }

   if(scrcrl18==0&&(midx==365)&&(midy==315))
   {
     score++;
     scrcrl18++;
   }
   else
   if(scrcrl18!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(365,315,3);
   }

   if(scrcrl19==0&&(midx==365)&&(midy==350))
   {
     score++;
     scrcrl19++;
   }
   else
   if(scrcrl19!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(365,350,3);
   }

   if(scrcrl20==0&&(midx==320)&&(midy==315))
   {
     score++;
     scrcrl20++;
   }
   else
   if(scrcrl20!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(330,315,3);
   }

   if(scrcrl21==0&&(midx==285)&&(midy==315))
   {
     score++;
     scrcrl21++;
   }
   else
   if(scrcrl21!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(285,315,3);
   }

   if(scrcrl22==0&&(midx==245)&&(midy==315))
   {
     score++;
     scrcrl22++;
   }
   else
   if(scrcrl22!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(245,315,3);
   }

      if(scrcrl23==0&&(midx==245)&&(midy==350))
   {
     score++;
     scrcrl23++;
   }
   else
   if(scrcrl23!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(245,350,3);
   }

      if(scrcrl24==0&&(midx==245)&&(midy==375))
   {
     score++;
     scrcrl24++;
   }
   else
   if(scrcrl24!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(245,375,3);
   }

      if(scrcrl25==0&&(midx==205)&&(midy==375))
   {
     score++;
     scrcrl25++;
   }
   else
   if(scrcrl25!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(205,375,3);
   }

      if(scrcrl26==0&&(midx==165)&&(midy==375))
   {
     score++;
     scrcrl26++;
   }
   else
   if(scrcrl26!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(165,375,3);
   }

   if(scrcrl27==0&&(midx==285)&&(midy==375))
   {
     score++;
     scrcrl27++;
   }
   else
   if(scrcrl27!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(285,375,3);
   }

   if(scrcrl28==0&&(midx==330)&&(midy==375))
   {
     score++;
     scrcrl28++;
   }
   else
   if(scrcrl28!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(330,375,3);
   }

   if(scrcrl29==0&&(midx==365)&&(midy==375))
   {
     score++;
     scrcrl29++;
   }
   else
   if(scrcrl29!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(365,375,3);
   }

   if(scrcrl30==0&&(midx==405)&&(midy==375))
   {
     score++;
     scrcrl30++;
   }
   else
   if(scrcrl30!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(405,375,3);
   }

   if(scrcrl31==0&&(midx==445)&&(midy==375))
   {
     score++;
     scrcrl31++;
   }
   else
   if(scrcrl31!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(445,375,3);
   }

   if(scrcrl32==0&&(midx==445)&&(midy==350))
   {
     score++;
     scrcrl32++;
   }
   else
   if(scrcrl32!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(445,350,3);
   }

   if(scrcrl33==0&&(midx==445)&&(midy==315))
   {
     score++;
     scrcrl33++;
   }
   else
   if(scrcrl33!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(445,315,3);
   }

  if(scrcrl34==0&&(midx==405)&&(midy==315))
   {
     score++;
     scrcrl34++;
   }
   else
   if(scrcrl34!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(405,315,3);
   }

   if(scrcrl35==0&&(midx==405)&&(midy==350))
   {
     score++;
     scrcrl35++;
   }
   else
   if(scrcrl35!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(405,350,3);
   }

      if(scrcrl36==0&&(midx==405)&&(midy==400))
   {
     score++;
     scrcrl36++;
   }
   else
   if(scrcrl36!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(405,400,3);
   }

      if(scrcrl37==0&&(midx==405)&&(midy==420))
   {
     score++;
     scrcrl37++;
   }
   else
   if(scrcrl37!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(405,420,3);
   }

      if(scrcrl38==0&&(midx==445)&&(midy==420))
   {
     score++;
     scrcrl38++;
   }
   else
   if(scrcrl38!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(445,420,3);
   }

      if(scrcrl39==0&&(midx==445)&&(midy==400))
   {
     score++;
     scrcrl39++;
   }
   else
   if(scrcrl39!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(445,400,3);
   }

      if(scrcrl40==0&&(midx==330)&&(midy==400))
   {
     score++;
     scrcrl40++;
   }
   else
   if(scrcrl40!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(330,400,3);
   }

      if(scrcrl41==0&&(midx==330)&&(midy==420))
   {
     score++;
     scrcrl41++;
   }
   else
   if(scrcrl41!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(330,420,3);
   }

      if(scrcrl42==0&&(midx==285)&&(midy==420))
   {
     score++;
     scrcrl42++;
   }
   else
   if(scrcrl42!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(285,420,3);
   }

      if(scrcrl43==0&&(midx==285)&&(midy==400))
   {
     score++;
     scrcrl43++;
   }
   else
   if(scrcrl43!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(285,400,3);
   }

      if(scrcrl44==0&&(midx==205)&&(midy==400))
   {
     score++;
     scrcrl44++;
   }
   else
   if(scrcrl44!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(205,400,3);
   }

      if(scrcrl45==0&&(midx==205)&&(midy==420))
   {
     score++;
     scrcrl45++;
   }
   else
   if(scrcrl45!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(205,420,3);
   }

      if(scrcrl46==0&&(midx==145)&&(midy==420))
   {
     score++;
     scrcrl46++;
   }
   else
   if(scrcrl46!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(145,420,3);
   }

	 if(scrcrl47==0&&(midx==145)&&(midy==400))
   {
     score++;
     scrcrl47++;
   }
   else
   if(scrcrl47!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(145,400,3);
   }

   if(scrcrl48==0&&(midx==145)&&(midy==375))
   {
     score++;
     scrcrl48++;
   }
   else
   if(scrcrl48!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(145,375,3);
   }

   if(scrcrl49==0&&(midx==145)&&(midy==345))
   {
     score++;
     scrcrl49++;
   }
   else
   if(scrcrl49!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(145,345,3);
   }

   if(scrcrl50==0&&(midx==145)&&(midy==310))
   {
     score++;
     scrcrl50++;
   }
   else
   if(scrcrl50!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(145,310,3);
   }

   if(scrcrl51==0&&(midx==205)&&(midy==310))
   {
     score++;
     scrcrl51++;
   }
   else
   if(scrcrl51!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(205,310,3);
   }

   if(scrcrl51==0&&(midx==205)&&(midy==345))
   {
     score++;
     scrcrl51++;
   }
   else
   if(scrcrl51!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(205,345,3);
   }

      if(scrcrl52==0&&(midx==205)&&(midy==215))
   {
     score++;
     scrcrl52++;
   }
   else
   if(scrcrl52!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(205,215,3);
   }

      if(scrcrl53==0&&(midx==160)&&(midy==215))
   {
     score++;
     scrcrl53++;
   }
   else
   if(scrcrl53!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(160,215,3);
   }

      if(scrcrl54==0&&(midx==160)&&(midy==115))
   {
     score++;
     scrcrl54++;
   }
   else
   if(scrcrl54!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(160,115,3);
   }

   if(scrcrl55==0&&(midx==160)&&(midy==85))
   {
     score++;
     scrcrl55++;
   }
   else
   if(scrcrl55!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(160,85,3);
   }

   if(scrcrl56==0&&(midx==200)&&(midy==85))
   {
     score++;
     scrcrl56++;
   }
   else
   if(scrcrl56!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(200,85,3);
   }

   if(scrcrl57==0&&(midx==200)&&(midy==115))
   {
     score++;
     scrcrl57++;
   }
   else
   if(scrcrl57!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(200,115,3);
   }

   if(scrcrl58==0&&(midx==240)&&(midy==115))
   {
     score++;
     scrcrl58++;
   }
   else
   if(scrcrl58!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(240,115,3);
   }

   if(scrcrl59==0&&(midx==240)&&(midy==85))
   {
     score++;
     scrcrl59++;
   }
   else
   if(scrcrl59!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(240,85,3);
   }

   if(scrcrl60==0&&(midx==280)&&(midy==85))
   {
     score++;
     scrcrl60++;
   }
   else
   if(scrcrl60!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(280,85,3);
   }

   if(scrcrl61==0&&(midx==280)&&(midy==115))
   {
     score++;
     scrcrl61++;
   }
   else
   if(scrcrl61!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(280,115,3);
   }

   if(scrcrl62==0&&(midx==320)&&(midy==115))
   {
     score++;
     scrcrl62++;
   }
   else
   if(scrcrl62!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(320,115,3);
   }

   if(scrcrl63==0&&(midx==320)&&(midy==85))
   {
     score++;
     scrcrl63++;
   }
   else
   if(scrcrl63!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(320,85,3);
   }

   if(scrcrl64==0&&(midx==350)&&(midy==85))
   {
     score++;
     scrcrl64++;
   }
   else
   if(scrcrl64!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(350,85,3);
   }

   if(scrcrl65==0&&(midx==350)&&(midy==115))
   {
     score++;
     scrcrl65++;
   }
   else
   if(scrcrl65!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(350,115,3);
   }

   if(scrcrl66==0&&(midx==410)&&(midy==115))
   {
     score++;
     scrcrl66++;
   }
   else
   if(scrcrl66!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(410,115,3);
   }

   if(scrcrl67==0&&(midx==410)&&(midy==85))
   {
     score++;
     scrcrl67++;
   }
   else
   if(scrcrl67!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(410,85,3);
   }

   if(scrcrl68==0&&(midx==440)&&(midy==150))
   {
     score++;
     scrcrl68++;
   }
   else
   if(scrcrl68!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(440,150,3);
   }

   if(scrcrl69==0&&(midx==410)&&(midy==150))
   {
     score++;
     scrcrl69++;
   }
   else
   if(scrcrl69!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(410,150,3);
   }

   if(scrcrl70==0&&(midx==350)&&(midy==150))
   {
     score++;
     scrcrl70++;
   }
   else
   if(scrcrl70!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(350,150,3);
   }

   if(scrcrl71==0&&(midx==320)&&(midy==150))
   {
     score++;
     scrcrl71++;
   }
   else
   if(scrcrl71!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(320,150,3);
   }

   if(scrcrl72==0&&(midx==280)&&(midy==150))
   {
     score++;
     scrcrl72++;
   }
   else
   if(scrcrl72!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(280,150,3);
   }

   if(scrcrl73==0&&(midx==240)&&(midy==150))
   {
     score++;
     scrcrl73++;
   }
   else
   if(scrcrl73!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(240,150,3);
   }

   if(scrcrl74==0&&(midx==200)&&(midy==150))
   {
     score++;
     scrcrl74++;
   }
   else
   if(scrcrl74!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(200,150,3);
   }

   if(scrcrl75==0&&(midx==200)&&(midy==180))
   {
     score++;
     scrcrl75++;
   }
   else
   if(scrcrl75!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(200,180,3);
   }

   if(scrcrl76==0&&(midx==240)&&(midy==180))
   {
     score++;
     scrcrl76++;
   }
   else
   if(scrcrl76!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(240,180,3);
   }

   if(scrcrl77==0&&(midx==365)&&(midy==180))
   {
     score++;
     scrcrl77++;
   }
   else
   if(scrcrl77!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(365,180,3);
   }

      if(scrcrl78==0&&(midx==365)&&(midy==215))
   {
     score++;
     scrcrl78++;
   }
   else
   if(scrcrl78!=1)
   {
    setcolor(RED);
    setfillstyle(SOLID_FILL,GREEN);
    circle(365,215,3);
   }

      if(tmrcrl1==0&&(midx==445)&&(midy==420))
   {
     option_timer=+5;
     tmrcrl1++;
   }
   else
   if(tmrcrl1!=1)
   {
    setcolor(CYAN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(445,420,5);
   }

      if(tmrcrl2==0&&(midx==160)&&(midy==215))
   {
     option_timer=+5;
     tmrcrl2++;
   }
   else
   if(tmrcrl2!=1)
   {
    setcolor(CYAN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(160,215,5);
   }

      if(tmrcrl3==0&&(midx==160)&&(midy==85))
   {
     option_timer=+5;
     tmrcrl3++;
   }
   else
   if(tmrcrl3!=1)
   {
    setcolor(CYAN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(160,85,5);
   }

      if(tmrcrl4==0&&(midx==440)&&(midy==150))
   {
     option_timer=+5;
     tmrcrl4++;
   }
   else
   if(tmrcrl4!=1)
   {
    setcolor(CYAN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(440,150,5);
   }

      if(tmrcrl5==0&&(midx==145)&&(midy==420))
   {
     option_timer=+5;
     tmrcrl5++;
   }
   else
   if(tmrcrl5!=1)
   {
    setcolor(CYAN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(145,420,5);
   }
   return(score);
}

void help()
{
 cleardevice();

 setcolor(YELLOW);
 settextjustify(CENTER_TEXT, CENTER_TEXT);
 settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
 outtextxy(315,35,"ABOUT");

 setcolor(WHITE);
 settextjustify(CENTER_TEXT, CENTER_TEXT);
 settextstyle(2, HORIZ_DIR, 5);
 outtextxy(323,100,"Designed by Sayan Das at DPS, Haridwar (INDIA) with Borland Turbo C compiler V 0.74");
 outtextxy(323,110,"Collect as many point as you can in minimus time.");
 outtextxy(323,120,"Collect bonus coins to extend you time.");

 setcolor(RED);
 settextjustify(CENTER_TEXT, CENTER_TEXT);
 settextstyle(2, HORIZ_DIR, 7);
 outtextxy(315,150,"REQUIREMENT");

 setcolor(WHITE);
 settextjustify(CENTER_TEXT, CENTER_TEXT);
 settextstyle(2, HORIZ_DIR, 5);
 outtextxy(315,170,"Cycles - Auto");

 setcolor(WHITE);
 settextjustify(CENTER_TEXT, CENTER_TEXT);
 settextstyle(2, HORIZ_DIR, 5);
 outtextxy(315,190,"Cycle up - 10");

 setcolor(WHITE);
 settextjustify(CENTER_TEXT, CENTER_TEXT);
 settextstyle(2, HORIZ_DIR, 5);
 outtextxy(315,210,"Cycle down - 20");


 setcolor(RED);
 settextjustify(CENTER_TEXT, CENTER_TEXT);
 settextstyle(2, HORIZ_DIR, 7);
 outtextxy(315,260,"CONTROLS");

 setcolor(WHITE);
 settextjustify(CENTER_TEXT, CENTER_TEXT);
 settextstyle(2, HORIZ_DIR, 5);
 outtextxy(315,280,"'w' - Up");

 setcolor(WHITE);
 settextjustify(CENTER_TEXT, CENTER_TEXT);
 settextstyle(2, HORIZ_DIR, 5);
 outtextxy(315,300,"'a' - Left");

 setcolor(WHITE);
 settextjustify(CENTER_TEXT, CENTER_TEXT);
 settextstyle(2, HORIZ_DIR, 5);
 outtextxy(315,320,"'s' - Down");

 setcolor(WHITE);
 settextjustify(CENTER_TEXT, CENTER_TEXT);
 settextstyle(2, HORIZ_DIR, 5);
 outtextxy(315,340,"'d' - Right");

 setcolor(WHITE);
 settextjustify(CENTER_TEXT, CENTER_TEXT);
 settextstyle(2, HORIZ_DIR, 5);
 outtextxy(315,360,"'e' - Exit");

 setcolor(RED);
 settextjustify(CENTER_TEXT, CENTER_TEXT);
 settextstyle(2, HORIZ_DIR, 5);
 outtextxy(100,400,"NOTE:");

 setcolor(YELLOW);
 settextjustify(CENTER_TEXT, CENTER_TEXT);
 settextstyle(2, HORIZ_DIR, 5);
 outtextxy(315,400,"NO TECHNOLOGY WAS HARMED DURING MAKING OF THIS APPLICATION.");

 setcolor(RED);
 settextjustify(CENTER_TEXT, CENTER_TEXT);
 settextstyle(2, HORIZ_DIR, 5);
 outtextxy(315,450,"Press any key to move to main menu");

 setcolor(WHITE);
 settextjustify(CENTER_TEXT, CENTER_TEXT);
 settextstyle(0, HORIZ_DIR, 1);
 outtextxy(315,465,"(C)DPS Ranipur productions");

 getch();
 menu();
}

int obstruct(int midx,int midy,char move)
{
 int flag=0;

 if(move=='d')
  {

    if(((midx==265-radius))&&((midy+radius>166)&&(midy-radius<262)))
      flag=1;

    if((midx==345-radius)&&((midy+radius>166)&&(midy-radius<262)))
      flag=1;

    if((midx==385-radius)&&((midy+radius>166)&&(midy-radius<262)))
      flag=1;

    if((midx==225-radius)&&((midy+radius>135)&&(midy-radius<200)))
      flag=1;

    if((midx==22-radius)&&((midy+radius>135)&&(midy-radius<200)))
      flag=1;

    if((midx==305-radius)&&((midy+radius>295)&&(midy-radius<355)))
      flag=1;

    if((midx==380-radius)&&((midy+radius>295)&&(midy-radius<358)))
      flag=1;

    if((midx==225-radius)&&((midy+radius>230)&&(midy-radius<358)))
      flag=1;

    if((midx==225-radius)&&((midy+radius>345)&&(midy-radius<420)))
      flag=1;

    if((midx==345-radius)&&((midy+radius>390)&&(midy-radius<422)))
      flag=1;

    if((midx==165-radius)&&((midy+radius>390)&&(midy-radius<422)))
       flag=1;

    if((midx==205-radius)&&((midy+radius>39)&&(midy-radius<70)))
       flag=1;

    if((midx==305-radius)&&((midy+radius>390)&&(midy-radius<454)))
       flag=1;

    if((midx==465-radius)&&((midy+radius>6)&&(midy-radius<450)))
       flag=1;

    if((midx==425-radius)&&((midy+radius>166)&&(midy-radius<262)))
       flag=1;

    if((midx==385-radius)&&((midy+radius>102)&&(midy-radius<134)))
       flag=1;

    if((midx==365-radius)&&((midy+radius>39)&&(midy-radius<70)))
       flag=1;

    if((midx==305-radius)&&((midy+radius>102)&&(midy-radius<134)))
       flag=1;

   if((midx==285-radius)&&((midy+radius>39)&&(midy-radius<70)))
       flag=1;

  }

  if(move=='a')
   {

      if(((midx==265+radius))&&((midy+radius>166)&&(midy-radius<262)))
	flag=1;

      if((midx==345+radius)&&((midy+radius>166)&&(midy-radius<262)))
	flag=1;

      if((midx==385+radius)&&((midy+radius>166)&&(midy-radius<262)))
	flag=1;

     if((midx==225+radius)&&((midy+radius>135)&&(midy-radius<200)))
	flag=1;

     if((midx==305+radius)&&((midy+radius>295)&&(midy-radius<355)))
	flag=1;

     if((midx==380+radius)&&((midy+radius>295)&&(midy-radius<358)))
	flag=1;

     if((midx==225+radius)&&((midy+radius>230)&&(midy-radius<358)))
	flag=1;

     if((midx==125+radius)&&((midy+radius>6)&&(midy-radius<422)))
	flag=1;

     if((midx==185+radius)&&((midy+radius>134)&&(midy-radius<198)))
	flag=1;

     if((midx==265+radius)&&((midy+radius>390)&&(midy-radius<422)))
	flag=1;

     if((midx==385+radius)&&((midy+radius>342)&&(midy-radius<422)))
	flag=1;

     if((midx==185+radius)&&((midy+radius>390)&&(midy-radius<422)))
       flag=1;

     if((midx==205+radius)&&((midy+radius>39)&&(midy-radius<70)))
       flag=1;

     if((midx==305+radius)&&((midy+radius>390)&&(midy-radius<454)))
       flag=1;

     if((midx==125+radius)&&((midy+radius>6)&&(midy-radius<450)))
       flag=1;

     if((midx==385+radius)&&((midy+radius>102)&&(midy-radius<134)))
       flag=1;

     if((midx==365+radius)&&((midy+radius>39)&&(midy-radius<70)))
       flag=1;

    if((midx==305+radius)&&((midy+radius>102)&&(midy-radius<134)))
       flag=1;

   if((midx==285+radius)&&((midy+radius>39)&&(midy-radius<70)))
       flag=1;
   }

   if(move=='s')
   {

      if((midy==260-radius)&&((midx+radius>265)&&(midx-radius<285)))
       flag=1;

      if(((midx-radius>250)&&(midx+radius<360))&&(midy==155))
	flag=1;

      if(((midx+radius>324)&&(midx-radius<344))&&(midy+radius==260))
	flag=1;

      if((midy==355-radius)&&((midx+radius>265)&&(midx-radius<345)))
	flag=1;

      if((midy==295-radius)&&((midx+radius>344)&&(midx-radius<384)))
	flag=1;

      if((midy==295-radius)&&((midx+radius>224)&&(midx-radius<264)))
	flag=1;

      if((midy==135-radius)&&((midx+radius>124)&&(midx-radius<184)))
	flag=1;

      if((midy==390-radius)&&((midx+radius>225)&&(midx-radius<264)))
	flag=1;

      if((midy==390-radius)&&((midx+radius>344)&&(midx-radius<384)))
	flag=1;

      if((midy==360-radius)&&((midx+radius>164)&&(midx-radius<184)))
       flag=1;

      if((midy==390-radius)&&((midx+radius>164)&&(midx-radius<184)))
       flag=1;

      if((midy==295-radius)&&((midx+radius>124)&&(midx-radius<184)))
       flag=1;

      if((midy==235-radius)&&((midx+radius>124)&&(midx-radius<184)))
       flag=1;

      if((midy==105-radius)&&((midx+radius>204)&&(midx-radius<264)))
       flag=1;

      if((midy==75-radius)&&((midx+radius>124)&&(midx-radius<164)))
       flag=1;

      if((midy==40-radius)&&((midx+radius>164)&&(midx-radius<254)))
       flag=1;

      if((midy==450-radius)&&((midx+radius>125)&&(midx-radius<464)))
       flag=1;

      if((midy==165-radius)&&((midx+radius>424)&&(midx-radius<464)))
       flag=1;

      if((midy==135-radius)&&((midx+radius>384)&&(midx-radius<424)))
       flag=1;

      if((midy==70-radius)&&((midx+radius>424)&&(midx-radius<464)))
       flag=1;

      if((midy==40-radius)&&((midx+radius>324)&&(midx-radius<424)))
       flag=1;

     if((midy==135-radius)&&((midx+radius>264)&&(midx-radius<344)))
       flag=1;

     if((midy==70-radius)&&((midx+radius>244)&&(midx-radius<324)))
       flag=1;

   }

   if(move=='w')
   {


     if(((midx-radius>264)&&(midx+radius<344))&&(midy-radius==170))
       flag=1;

     if((midy==265+radius)&&((midx+radius>265)&&(midx-radius<285)))
       flag=1;

     if(((midx+radius>324)&&(midx-radius<344))&&(midy-radius==260))
       flag=1;

     if((midy==295+radius)&&((midx+radius>344)&&(midx-radius<384)))
       flag=1;

     if((midy==295+radius)&&((midx+radius>224)&&(midx-radius<264)))
       flag=1;

     if((midy==195+radius)&&((midx+radius>124)&&(midx-radius<184)))
       flag=1;

     if((midy==425+radius)&&((midx+radius>225)&&(midx-radius<260)))
       flag=1;

     if((midy==355+radius)&&((midx+radius>265)&&(midx-radius<345)))
       flag=1;

     if((midy==420+radius)&&((midx+radius>344)&&(midx-radius<384)))
       flag=1;

     if((midy==360+radius)&&((midx+radius>164)&&(midx-radius<184)))
       flag=1;

     if((midy==420+radius)&&((midx+radius>164)&&(midx-radius<184)))
       flag=1;

     if((midy==295+radius)&&((midx+radius>124)&&(midx-radius<184)))
       flag=1;

     if((midy==235+radius)&&((midx+radius>124)&&(midx-radius<184)))
       flag=1;

     if((midy==105+radius)&&((midx+radius>204)&&(midx-radius<264)))
       flag=1;

     if((midy==75+radius)&&((midx+radius>124)&&(midx-radius<164)))
       flag=1;

     if((midy==40+radius)&&((midx+radius>164)&&(midx-radius<254)))
       flag=1;

     if((midy==5+radius)&&((midx+radius>124)&&(midx-radius<464)))
       flag=1;

     if((midy==260+radius)&&((midx+radius>425)&&(midx-radius<464)))
       flag=1;

     if((midy==135+radius)&&((midx+radius>384)&&(midx-radius<424)))
       flag=1;

     if((midy==40+radius)&&((midx+radius>324)&&(midx-radius<424)))
       flag=1;

     if((midy==135+radius)&&((midx+radius>264)&&(midx-radius<344)))
       flag=1;

     if((midy==70+radius)&&((midx+radius>244)&&(midx-radius<324)))
       flag=1;

   }

  return(flag);

}

int eObstruct(int midx,int midy,char move)
{
 int flag=0;

 if(move=='d')
  {

    if(((midx==265-radius))&&((midy+radius>166)&&(midy-radius<262)))
      flag=1;

    if((midx==345-radius)&&((midy+radius>166)&&(midy-radius<262)))
      flag=1;

    if((midx==385-radius)&&((midy+radius>166)&&(midy-radius<262)))
      flag=1;

    if((midx==225-radius)&&((midy+radius>135)&&(midy-radius<200)))
      flag=1;

    if((midx==22-radius)&&((midy+radius>135)&&(midy-radius<200)))
      flag=1;

    if((midx==305-radius)&&((midy+radius>295)&&(midy-radius<355)))
      flag=1;

    if((midx==380-radius)&&((midy+radius>295)&&(midy-radius<358)))
      flag=1;

    if((midx==225-radius)&&((midy+radius>230)&&(midy-radius<358)))
      flag=1;

    if((midx==225-radius)&&((midy+radius>345)&&(midy-radius<420)))
      flag=1;

    if((midx==345-radius)&&((midy+radius>390)&&(midy-radius<422)))
      flag=1;

    if((midx==165-radius)&&((midy+radius>390)&&(midy-radius<422)))
       flag=1;

    if((midx==205-radius)&&((midy+radius>39)&&(midy-radius<70)))
       flag=1;

    if((midx==305-radius)&&((midy+radius>390)&&(midy-radius<454)))
       flag=1;

    if((midx==465-radius)&&((midy+radius>6)&&(midy-radius<450)))
       flag=1;

    if((midx==425-radius)&&((midy+radius>166)&&(midy-radius<262)))
       flag=1;

    if((midx==385-radius)&&((midy+radius>102)&&(midy-radius<134)))
       flag=1;

    if((midx==365-radius)&&((midy+radius>39)&&(midy-radius<70)))
       flag=1;

    if((midx==305-radius)&&((midy+radius>102)&&(midy-radius<134)))
       flag=1;

   if((midx==285-radius)&&((midy+radius>39)&&(midy-radius<70)))
       flag=1;

  }

  if(move=='a')
   {

      if(((midx==265+radius))&&((midy+radius>166)&&(midy-radius<262)))
	flag=2;

      if((midx==345+radius)&&((midy+radius>166)&&(midy-radius<262)))
	flag=2;

      if((midx==385+radius)&&((midy+radius>166)&&(midy-radius<262)))
	flag=2;

     if((midx==225+radius)&&((midy+radius>135)&&(midy-radius<200)))
	flag=2;

     if((midx==305+radius)&&((midy+radius>295)&&(midy-radius<355)))
	flag=2;

     if((midx==380+radius)&&((midy+radius>295)&&(midy-radius<358)))
	flag=2;

     if((midx==225+radius)&&((midy+radius>230)&&(midy-radius<358)))
	flag=2;

     if((midx==125+radius)&&((midy+radius>6)&&(midy-radius<422)))
	flag=2;

     if((midx==185+radius)&&((midy+radius>134)&&(midy-radius<198)))
	flag=2;

     if((midx==265+radius)&&((midy+radius>390)&&(midy-radius<422)))
	flag=2;

     if((midx==385+radius)&&((midy+radius>342)&&(midy-radius<422)))
	flag=2;

     if((midx==185+radius)&&((midy+radius>390)&&(midy-radius<422)))
       flag=2;

     if((midx==205+radius)&&((midy+radius>39)&&(midy-radius<70)))
       flag=2;

     if((midx==305+radius)&&((midy+radius>390)&&(midy-radius<454)))
       flag=2;

     if((midx==125+radius)&&((midy+radius>6)&&(midy-radius<450)))
       flag=2;

     if((midx==385+radius)&&((midy+radius>102)&&(midy-radius<134)))
       flag=2;

     if((midx==365+radius)&&((midy+radius>39)&&(midy-radius<70)))
       flag=2;

    if((midx==305+radius)&&((midy+radius>102)&&(midy-radius<134)))
       flag=2;

   if((midx==285+radius)&&((midy+radius>39)&&(midy-radius<70)))
       flag=2;
   }

   if(move=='s')
   {

      if((midy==260-radius)&&((midx+radius>265)&&(midx-radius<285)))
       flag=3;

      if(((midx-radius>250)&&(midx+radius<360))&&(midy==155))
	flag=3;

      if(((midx+radius>324)&&(midx-radius<344))&&(midy+radius==260))
	flag=3;

      if((midy==355-radius)&&((midx+radius>265)&&(midx-radius<345)))
	flag=3;

      if((midy==295-radius)&&((midx+radius>344)&&(midx-radius<384)))
	flag=3;

      if((midy==295-radius)&&((midx+radius>224)&&(midx-radius<264)))
	flag=3;

      if((midy==135-radius)&&((midx+radius>124)&&(midx-radius<184)))
	flag=3;

      if((midy==390-radius)&&((midx+radius>225)&&(midx-radius<264)))
	flag=3;

      if((midy==390-radius)&&((midx+radius>344)&&(midx-radius<384)))
	flag=3;

      if((midy==360-radius)&&((midx+radius>164)&&(midx-radius<184)))
       flag=3;

      if((midy==390-radius)&&((midx+radius>164)&&(midx-radius<184)))
       flag=3;

      if((midy==295-radius)&&((midx+radius>124)&&(midx-radius<184)))
       flag=3;

      if((midy==235-radius)&&((midx+radius>124)&&(midx-radius<184)))
       flag=3;

      if((midy==105-radius)&&((midx+radius>204)&&(midx-radius<264)))
       flag=3;

      if((midy==75-radius)&&((midx+radius>124)&&(midx-radius<164)))
       flag=3;

      if((midy==40-radius)&&((midx+radius>164)&&(midx-radius<254)))
       flag=3;

      if((midy==450-radius)&&((midx+radius>125)&&(midx-radius<464)))
       flag=3;

      if((midy==165-radius)&&((midx+radius>424)&&(midx-radius<464)))
       flag=3;

      if((midy==135-radius)&&((midx+radius>384)&&(midx-radius<424)))
       flag=3;

      if((midy==70-radius)&&((midx+radius>424)&&(midx-radius<464)))
       flag=3;

      if((midy==40-radius)&&((midx+radius>324)&&(midx-radius<424)))
       flag=3;

     if((midy==135-radius)&&((midx+radius>264)&&(midx-radius<344)))
       flag=3;

     if((midy==70-radius)&&((midx+radius>244)&&(midx-radius<324)))
       flag=3;

   }

   if(move=='w')
   {


     if(((midx-radius>264)&&(midx+radius<344))&&(midy-radius==170))
       flag=4;

     if((midy==265+radius)&&((midx+radius>265)&&(midx-radius<285)))
       flag=4;

     if(((midx+radius>324)&&(midx-radius<344))&&(midy-radius==260))
       flag=4;

     if((midy==295+radius)&&((midx+radius>344)&&(midx-radius<384)))
       flag=4;

     if((midy==295+radius)&&((midx+radius>224)&&(midx-radius<264)))
       flag=4;

     if((midy==195+radius)&&((midx+radius>124)&&(midx-radius<184)))
       flag=4;

     if((midy==425+radius)&&((midx+radius>225)&&(midx-radius<260)))
       flag=4;

     if((midy==355+radius)&&((midx+radius>265)&&(midx-radius<345)))
       flag=4;

     if((midy==420+radius)&&((midx+radius>344)&&(midx-radius<384)))
       flag=4;

     if((midy==360+radius)&&((midx+radius>164)&&(midx-radius<184)))
       flag=4;

     if((midy==420+radius)&&((midx+radius>164)&&(midx-radius<184)))
       flag=4;

     if((midy==295+radius)&&((midx+radius>124)&&(midx-radius<184)))
       flag=4;

     if((midy==235+radius)&&((midx+radius>124)&&(midx-radius<184)))
       flag=4;

     if((midy==105+radius)&&((midx+radius>204)&&(midx-radius<264)))
       flag=4;

     if((midy==75+radius)&&((midx+radius>124)&&(midx-radius<164)))
       flag=4;

     if((midy==40+radius)&&((midx+radius>164)&&(midx-radius<254)))
       flag=4;

     if((midy==5+radius)&&((midx+radius>124)&&(midx-radius<464)))
       flag=4;

     if((midy==260+radius)&&((midx+radius>425)&&(midx-radius<464)))
       flag=4;

     if((midy==135+radius)&&((midx+radius>384)&&(midx-radius<424)))
       flag=4;

     if((midy==40+radius)&&((midx+radius>324)&&(midx-radius<424)))
       flag=4;

     if((midy==135+radius)&&((midx+radius>264)&&(midx-radius<344)))
       flag=4;

     if((midy==70+radius)&&((midx+radius>244)&&(midx-radius<324)))
       flag=4;

   }

  return(flag);

}


game_over(int score,int time_final)
{
  int x1,x2,x3,x4,x5,x6,x7,x8,x9,x10;
  int y1,y2,y3,y4,y5,y6,y7,y8,y9,y10;
  int rad1,rad2,rad3,rad4,rad5,rad6,rad7,rad8,rad9,rad10;
  int col1,col2,col3,col4,col5,col6,col7,col8,col9,col10;
  int x1_rec=150,y1_rec=170,x2_rec=450,y2_rec=270;
  int y1_lne=170,x2_lne=150,y3_lne=270,x4_lne=450;
  person pers;

  randomize();
  cleardevice();
  for(int i=0;i<5;i++)
   {

     setcolor(col1=random(900));
     circle(x1=random(500),y1=random(500),rad1=random(40));

     setcolor(col2=random(900));
     circle(x2=random(500),y2=random(500),rad2=random(40));

     setcolor(col3=random(900));
     circle(x3=random(500),y3=random(500),rad3=random(40));

     setcolor(col4=random(900));
     circle(x4=random(500),y4=random(500),rad4=random(40));


     setcolor(col5=random(900));
     circle(x5=random(500),y5=random(500),rad5=random(40));

     setcolor(col6=random(900));
     circle(x6=random(500),y6=random(500),rad6=random(40));

     setcolor(col7=random(900));
     circle(x7=random(500),y7=random(500),rad7=random(40));

     setcolor(col8=random(900));
     circle(x8=random(500),y8=random(500),rad8=random(40));

     setcolor(col9=random(900));
     circle(x9=random(500),y9=random(500),rad9=random(40));

     setcolor(col10=random(900));
     circle(x10=random(500),y10=random(500),rad10=random(40));
    for(int j=0;j<5;j++)
     {
       cleardevice();

       setcolor(col1);
       circle(x1,y1,rad1++);

       setcolor(col2);
       circle(x2,y2,rad1++);

       setcolor(col3);
       circle(x3,y3,rad3++);

       setcolor(col4);
       circle(x4,y4,rad4++);

       setcolor(col5);
       circle(x5,y5,rad5++);

       setcolor(col6);
       circle(x6,y6,rad6++);

       setcolor(col7);
       circle(x7,y7,rad7++);

       setcolor(col8);
       circle(x8,y8,rad8++);

       setcolor(col9);
       circle(x9,y9,rad9++);

       setcolor(col10);
       circle(x10,y10,rad10++);

       setcolor(WHITE);
       rectangle(x1_rec,y1_rec,x2_rec,y2_rec);
       rectangle(x1_rec+2,y1_rec+2,x2_rec-2,y2_rec-2);
       settextstyle(GOTHIC_FONT,0,5);
       setcolor(RED);
       outtextxy((x1_rec+x2_rec)/2,(y1_rec+y2_rec)/2,"GAME OVER");
	setcolor(WHITE);
	settextjustify(CENTER_TEXT, CENTER_TEXT);
	settextstyle(0, HORIZ_DIR, 1);
	outtextxy(315,465,"(C)DPS Ranipur productions");
       char move;
       if(move==kbhit()!=0)
	 break;

       delay(80);
     }
  }
  cleardevice();
  for(i=0;i<70;i++)
   {
       cleardevice();
       setcolor(WHITE);
       rectangle(x1_rec,y1_rec-=2,x2_rec,y2_rec-=2);
       rectangle(x1_rec+2,y1_rec+2,x2_rec-2,y2_rec-2);
       settextstyle(GOTHIC_FONT,0,5);
       setcolor(RED);
       outtextxy((x1_rec+x2_rec)/2,(y1_rec+y2_rec)/2,"GAME OVER");
	setcolor(WHITE);
	settextjustify(CENTER_TEXT, CENTER_TEXT);
	settextstyle(0, HORIZ_DIR, 1);
       outtextxy(315,465,"(C)DPS Ranipur productions");
       delay(20);
   }

  for(i=0;i<400;i++)
   {
     if(y1_lne!=270)
      {
       setcolor(WHITE);
       rectangle(x1_rec,y1_rec,x2_rec,y2_rec);
       rectangle(x1_rec+2,y1_rec+2,x2_rec-2,y2_rec-2);
       settextstyle(GOTHIC_FONT,0,5);
       setcolor(RED);
       outtextxy((x1_rec+x2_rec)/2,(y1_rec+y2_rec)/2,"GAME OVER");
       setcolor(WHITE);
       settextjustify(CENTER_TEXT, CENTER_TEXT);
       settextstyle(0, HORIZ_DIR, 1);
       outtextxy(315,465,"(C)DPS Ranipur productions");

       line(150,170,150,y1_lne+=2);
       delay(5);
      }
     if((y1_lne==270)&&(x2_lne!=450))
      {
       setcolor(WHITE);
       rectangle(x1_rec,y1_rec,x2_rec,y2_rec);
       rectangle(x1_rec+2,y1_rec+2,x2_rec-2,y2_rec-2);
       settextstyle(GOTHIC_FONT,0,5);
       setcolor(RED);
       outtextxy((x1_rec+x2_rec)/2,(y1_rec+y2_rec)/2,"GAME OVER");
       setcolor(WHITE);
       settextjustify(CENTER_TEXT, CENTER_TEXT);
       settextstyle(0, HORIZ_DIR, 1);
       outtextxy(315,465,"(C)DPS Ranipur productions");

	line(150,170,150,y1_lne);
	line(150,270,x2_lne+=2,270);
	delay(5);
      }
     if((y1_lne==270)&&(x2_lne==450)&&(y3_lne!=170))
      {
       setcolor(WHITE);
       rectangle(x1_rec,y1_rec,x2_rec,y2_rec);
       rectangle(x1_rec+2,y1_rec+2,x2_rec-2,y2_rec-2);
       settextstyle(GOTHIC_FONT,0,5);
       setcolor(RED);
       outtextxy((x1_rec+x2_rec)/2,(y1_rec+y2_rec)/2,"GAME OVER");
       setcolor(WHITE);
       settextjustify(CENTER_TEXT, CENTER_TEXT);
       settextstyle(0, HORIZ_DIR, 1);
       outtextxy(315,465,"(C)DPS Ranipur productions");

	line(150,170,150,y1_lne);
	line(150,270,x2_lne,270);
	line(450,270,450,y3_lne-=2);
	delay(5);
      }
     if((y1_lne==270)&&(x2_lne==450)&&(y3_lne==170)&&(x4_lne!=150))
      {
       setcolor(WHITE);
       rectangle(x1_rec,y1_rec,x2_rec,y2_rec);
       rectangle(x1_rec+2,y1_rec+2,x2_rec-2,y2_rec-2);
       settextstyle(GOTHIC_FONT,0,5);
       setcolor(RED);
       outtextxy((x1_rec+x2_rec)/2,(y1_rec+y2_rec)/2,"GAME OVER");
	setcolor(WHITE);
	settextjustify(CENTER_TEXT, CENTER_TEXT);
	settextstyle(0, HORIZ_DIR, 1);
	outtextxy(315,465,"(C)DPS Ranipur productions");

	line(150,170,150,y1_lne);
	line(150,270,x2_lne,270);
	line(450,270,450,y3_lne);
	line(450,170,x4_lne-=2,170);
	delay(5);
      }

   }

   file.open("PERSON.TXT",ios::app|ios::out|ios::in);
   pers.getData(x2_lne,x4_lne,y1_lne,y3_lne,time_final,score);
   file.write((char*)&pers,sizeof(pers));
   file.seekg(0);
   file.close();

   cleardevice();
   setcolor(WHITE);
   settextjustify(CENTER_TEXT, CENTER_TEXT);
   settextstyle(0, HORIZ_DIR, 1);
   outtextxy(315,465,"(C)DPS Ranipur productions");
   settextstyle(3,HORIZ_DIR,6);
   outtextxy(getmaxx()/2,getmaxy()/2,"Thank You For Playing:)");
   delay(1500);

   exit(0);
   return(0);
}

class question
{
   char charac,ques[500],ans[1],ans_user[1],ques_opt[100],ques_fact[500];

   public:
   void level1()
   {
      cleardevice();
      closegraph();
      int ques_int[5]={1,160,324,468,619};
      int i=0,j=0,k=0,l=0,counter=0;
      int gdriver = DETECT, gmode, errorcode;

      ifstream level1;
      level1.open("source/level1.pcm",ios::in);

      randomize();
      initgraph(&gdriver, &gmode, "");
      int ques_no=ques_int[random(sizeof(ques_int)/sizeof(int))];
      level1.seekg(ques_no);
      while(level1)
       {
	level1.get(charac);
	ques[i]=charac;
	i++;
	if(charac=='?')
	  break;
       }

      ques[i]='\0';
      level1.seekg(ques_no+i);
      level1.get(charac);
      ans[0]=charac;
      level1.seekg(ques_no+i+3);
      while(level1)
      {
	level1.get(charac);
	if(charac=='#')
	  break;
	ques_opt[j]=charac;
	j++;
      }
     ques_opt[j]='\0';
      setcolor(RED);
      settextjustify(CENTER_TEXT, CENTER_TEXT);
      settextstyle(GOTHIC_FONT, HORIZ_DIR, 5);
      outtextxy(getmaxx()/2,25,"Level I");
      setcolor(YELLOW);
      settextstyle(10, HORIZ_DIR, 1);
      outtextxy(getmaxx()/2,55,"General Knowledge");
       setcolor(WHITE);
       settextjustify(CENTER_TEXT, CENTER_TEXT);
       settextstyle(0, HORIZ_DIR, 1);
       outtextxy(315,465,"(C)DPS Ranipur productions");
      setcolor(310);
	 rectangle(473,10,637,90);
	 if(life==3)
	  {
	   setcolor(YELLOW);
	   setfillstyle(SOLID_FILL,RED);

	   circle(510,50,6);
	   circle(552,50,6);
	   circle(594,50,6);
	  }

	 if(life==2)
	 {
	   setcolor(YELLOW);
	   setfillstyle(SOLID_FILL,RED);

	   circle(510,50,6);
	   circle(552,50,6);
	 }

	 if(life==1)
	 {
	   setcolor(YELLOW);
	   setfillstyle(SOLID_FILL,RED);

	   circle(510,50,6);
	 }
      setcolor(DARKGRAY);
      settextstyle(3, HORIZ_DIR,1);
      outtextxy(getmaxx()/2, getmaxy()/2-30, ques);
      setcolor(GREEN);
      outtextxy(getmaxx()/2, getmaxy()/2, ques_opt);
      cin>>ans_user[0];
      ans_user[1]='\0';
      cout<<ans_user[0]<<'\n'<<ans[0];
      cleardevice();
      settextstyle(GOTHIC_FONT, HORIZ_DIR, 5);
      setcolor(RED);
      outtextxy(getmaxx()/2,25,"Level I");
      setcolor(YELLOW);
      settextstyle(10, HORIZ_DIR, 1);
      outtextxy(getmaxx()/2,55,"General Knowledge");
       setcolor(WHITE);
      settextjustify(CENTER_TEXT, CENTER_TEXT);
      settextstyle(0, HORIZ_DIR, 1);
      outtextxy(315,465,"(C)DPS Ranipur productions");
      setcolor(310);
	 rectangle(473,10,637,90);
	 if(life==3)
	  {
	   setcolor(YELLOW);
	   setfillstyle(SOLID_FILL,RED);

	   circle(510,50,6);
	   circle(552,50,6);
	   circle(594,50,6);
	  }

	 if(life==2)
	 {
	   setcolor(YELLOW);
	   setfillstyle(SOLID_FILL,RED);

	   circle(510,50,6);
	   circle(552,50,6);
	 }

	 if(life==1)
	 {
	   setcolor(YELLOW);
	   setfillstyle(SOLID_FILL,RED);

	   circle(510,50,6);
	 }
      setcolor(BLUE);
      settextstyle(7, HORIZ_DIR, 5);
      if(ans_user[0]==ans[0])
       {
	 outtextxy(getmaxx()/2, getmaxy()/2,"Great Job!!!");
       }
       else
       {
	outtextxy(getmaxx()/2, getmaxy()/2,"Better luck next time");
	life--;
       }
      level1.seekg(ques_no+i+j+5);
      while(level1)
      {
	level1.get(charac);
	if(charac=='#')
	 break;
	ques_fact[k]=charac;
	k++;
      }
     ques_fact[k]='\0';
      setcolor(GREEN);
     rectangle(10,270,630,340);
     settextstyle(3, HORIZ_DIR, 1);
     setcolor(YELLOW);
     outtextxy(getmaxx()/2, getmaxy()/2+45,"Do You Know?");
     setcolor(RED);
     outtextxy(getmaxx()/2, getmaxy()/2+65,ques_fact);
     getch();

   }
      void level2()
   {
	 cleardevice();
	 closegraph();
      int ques_int[5]={1,155,313,476,646};
      int i=0,j=0,k=0,l=0,counter=0;
      int gdriver = DETECT, gmode, errorcode;

      ifstream level2;
      level2.open("source/level2.pcm",ios::in);


      randomize();
      initgraph(&gdriver, &gmode, "");
      int ques_no=ques_int[random(sizeof(ques_int)/sizeof(int))];
      level2.seekg(ques_no);
      while(level2)
       {
	level2.get(charac);
	ques[i]=charac;
	i++;
	if(charac=='?')
	  break;
       }

      ques[i]='\0';
      level2.seekg(ques_no+i);
      level2.get(charac);
      ans[0]=charac;
      level2.seekg(ques_no+i+3);
      while(level2)
      {
	level2.get(charac);
	if(charac=='#')
	  break;
	ques_opt[j]=charac;
	j++;
      }
     ques_opt[j]='\0';
      setcolor(RED);
      settextjustify(CENTER_TEXT, CENTER_TEXT);
      settextstyle(GOTHIC_FONT, HORIZ_DIR, 5);
      outtextxy(getmaxx()/2,25,"Level II");
      setcolor(YELLOW);
      settextstyle(10, HORIZ_DIR, 1);
      outtextxy(getmaxx()/2,55,"IT Sector");
       setcolor(WHITE);
       settextjustify(CENTER_TEXT, CENTER_TEXT);
       settextstyle(0, HORIZ_DIR, 1);
       outtextxy(315,465,"(C)DPS Ranipur productions");
      setcolor(310);
	 rectangle(473,10,637,90);
	 if(life==3)
	  {
	   setcolor(YELLOW);
	   setfillstyle(SOLID_FILL,RED);

	   circle(510,50,6);
	   circle(552,50,6);
	   circle(594,50,6);
	  }

	 if(life==2)
	 {
	   setcolor(YELLOW);
	   setfillstyle(SOLID_FILL,RED);

	   circle(510,50,6);
	   circle(552,50,6);
	 }

	 if(life==1)
	 {
	   setcolor(YELLOW);
	   setfillstyle(SOLID_FILL,RED);

	   circle(510,50,6);
	 }
      setcolor(DARKGRAY);
      settextstyle(3, HORIZ_DIR,1);
      outtextxy(getmaxx()/2, getmaxy()/2-30, ques);
      setcolor(GREEN);
      outtextxy(getmaxx()/2, getmaxy()/2, ques_opt);
      cin>>ans_user[0];
      ans_user[1]='\0';
      cout<<ans_user[0]<<'\n'<<ans[0];
      cleardevice();
      settextstyle(GOTHIC_FONT, HORIZ_DIR, 5);
      setcolor(RED);
      outtextxy(getmaxx()/2,25,"Level II");
      setcolor(YELLOW);
      settextstyle(10, HORIZ_DIR, 1);
      outtextxy(getmaxx()/2,55,"IT Sector");
       setcolor(WHITE);
      settextjustify(CENTER_TEXT, CENTER_TEXT);
      settextstyle(0, HORIZ_DIR, 1);
      outtextxy(315,465,"(C)DPS Ranipur productions");
      setcolor(310);
	 rectangle(473,10,637,90);
	 if(life==3)
	  {
	   setcolor(YELLOW);
	   setfillstyle(SOLID_FILL,RED);

	   circle(510,50,6);
	   circle(552,50,6);
	   circle(594,50,6);
	  }

	 if(life==2)
	 {
	   setcolor(YELLOW);
	   setfillstyle(SOLID_FILL,RED);

	   circle(510,50,6);
	   circle(552,50,6);
	 }

	 if(life==1)
	 {
	   setcolor(YELLOW);
	   setfillstyle(SOLID_FILL,RED);

	   circle(510,50,6);
	 }
      setcolor(BLUE);
      settextstyle(7, HORIZ_DIR, 5);
      if(ans_user[0]==ans[0])
       {
	 outtextxy(getmaxx()/2, getmaxy()/2,"Great Job!!!");
       }
       else
       {
	outtextxy(getmaxx()/2, getmaxy()/2,"Better luck next time");
	life--;
       }
      level2.seekg(ques_no+i+j+5);
      while(level2)
      {
	level2.get(charac);
	if(charac=='#')
	 break;
	ques_fact[k]=charac;
	k++;
      }
     ques_fact[k]='\0';
     setcolor(GREEN);
     rectangle(10,270,630,340);
     settextstyle(3, HORIZ_DIR, 1);
     setcolor(YELLOW);
     outtextxy(getmaxx()/2, getmaxy()/2+45,"Do You Know?");
     setcolor(RED);
     outtextxy(getmaxx()/2, getmaxy()/2+65,ques_fact);
     getch();

   }

    void level3()
   {
	 cleardevice();
	 closegraph();
      int ques_int[5]={1,168,342,521,695};
      int i=0,j=0,k=0,l=0,counter=0;
      int gdriver = DETECT, gmode, errorcode;

      ifstream level3;
      level3.open("source/level3.pcm",ios::in);


      randomize();
      initgraph(&gdriver, &gmode, "");
      int ques_no=ques_int[random(sizeof(ques_int)/sizeof(int))];
      level3.seekg(ques_no);
      while(level3)
       {
	level3.get(charac);
	ques[i]=charac;
	i++;
	if(charac=='?')
	  break;
       }

      ques[i]='\0';
      level3.seekg(ques_no+i);
      level3.get(charac);
      ans[0]=charac;
      level3.seekg(ques_no+i+3);
      while(level3)
      {
	level3.get(charac);
	if(charac=='#')
	  break;
	ques_opt[j]=charac;
	j++;
      }
     ques_opt[j]='\0';
      setcolor(RED);
      settextjustify(CENTER_TEXT, CENTER_TEXT);
      settextstyle(GOTHIC_FONT, HORIZ_DIR, 5);
      outtextxy(getmaxx()/2,25,"Level III");
      setcolor(YELLOW);
      settextstyle(10, HORIZ_DIR, 1);
      outtextxy(getmaxx()/2,55,"History");
       setcolor(WHITE);
       settextjustify(CENTER_TEXT, CENTER_TEXT);
       settextstyle(0, HORIZ_DIR, 1);
       outtextxy(315,465,"(C)DPS Ranipur productions");
      setcolor(310);
	 rectangle(473,10,637,90);
	 if(life==3)
	  {
	   setcolor(YELLOW);
	   setfillstyle(SOLID_FILL,RED);

	   circle(510,50,6);
	   circle(552,50,6);
	   circle(594,50,6);
	  }

	 if(life==2)
	 {
	   setcolor(YELLOW);
	   setfillstyle(SOLID_FILL,RED);

	   circle(510,50,6);
	   circle(552,50,6);
	 }

	 if(life==1)
	 {
	   setcolor(YELLOW);
	   setfillstyle(SOLID_FILL,RED);

	   circle(510,50,6);
	 }
      setcolor(DARKGRAY);
      settextstyle(3, HORIZ_DIR,1);
      outtextxy(getmaxx()/2, getmaxy()/2-30, ques);
      setcolor(GREEN);
      outtextxy(getmaxx()/2, getmaxy()/2, ques_opt);
      cin>>ans_user[0];
      ans_user[1]='\0';
      cout<<ans_user[0]<<'\n'<<ans[0];
      cleardevice();
      settextstyle(GOTHIC_FONT, HORIZ_DIR, 5);
      setcolor(RED);
      outtextxy(getmaxx()/2,25,"Level III");
      setcolor(YELLOW);
      settextstyle(10, HORIZ_DIR, 1);
      outtextxy(getmaxx()/2,55,"History");
       setcolor(WHITE);
      settextjustify(CENTER_TEXT, CENTER_TEXT);
      settextstyle(0, HORIZ_DIR, 1);
      outtextxy(315,465,"(C)DPS Ranipur productions");
      setcolor(310);
	 rectangle(473,10,637,90);
	 if(life==3)
	  {
	   setcolor(YELLOW);
	   setfillstyle(SOLID_FILL,RED);

	   circle(510,50,6);
	   circle(552,50,6);
	   circle(594,50,6);
	  }

	 if(life==2)
	 {
	   setcolor(YELLOW);
	   setfillstyle(SOLID_FILL,RED);

	   circle(510,50,6);
	   circle(552,50,6);
	 }

	 if(life==1)
	 {
	   setcolor(YELLOW);
	   setfillstyle(SOLID_FILL,RED);

	   circle(510,50,6);
	 }
      setcolor(BLUE);
      settextstyle(7, HORIZ_DIR, 5);
      if(ans_user[0]==ans[0])
       {
	 outtextxy(getmaxx()/2, getmaxy()/2,"Great Job!!!");
       }
       else
       {
	outtextxy(getmaxx()/2, getmaxy()/2,"Better luck next time");
	life--;
       }
      level3.seekg(ques_no+i+j+5);
      while(level3)
      {
	level3.get(charac);
	if(charac=='#')
	 break;
	ques_fact[k]=charac;
	k++;
      }
     ques_fact[k]='\0';
     setcolor(GREEN);
     rectangle(10,270,630,340);
     settextstyle(3, HORIZ_DIR, 1);
     setcolor(YELLOW);
     outtextxy(getmaxx()/2, getmaxy()/2+45,"Do You Know?");
     setcolor(RED);
     outtextxy(getmaxx()/2, getmaxy()/2+65,ques_fact);
     getch();

   }
      void level4()
   {
	 cleardevice();
	 closegraph();
      int ques_int[5]={0,207,386,564,723};
      int i=0,j=0,k=0,l=0,counter=0;
      int gdriver = DETECT, gmode, errorcode;

      ifstream level4;
      level4.open("source/level4.pcm",ios::in);


      randomize();
      initgraph(&gdriver, &gmode, "");
      int ques_no=ques_int[random(sizeof(ques_int)/sizeof(int))];
      level4.seekg(ques_no);
      while(level4)
       {
	level4.get(charac);
	ques[i]=charac;
	i++;
	if(charac=='?')
	  break;
       }

      ques[i]='\0';
      level4.seekg(ques_no+i);
      level4.get(charac);
      ans[0]=charac;
      level4.seekg(ques_no+i+3);
      while(level4)
      {
	level4.get(charac);
	if(charac=='#')
	  break;
	ques_opt[j]=charac;
	j++;
      }
     ques_opt[j]='\0';
      setcolor(RED);
      settextjustify(CENTER_TEXT, CENTER_TEXT);
      settextstyle(GOTHIC_FONT, HORIZ_DIR, 5);
      outtextxy(getmaxx()/2,25,"Level IV");
      setcolor(YELLOW);
      settextstyle(10, HORIZ_DIR, 1);
      outtextxy(getmaxx()/2,55,"Physics");
       setcolor(WHITE);
       settextjustify(CENTER_TEXT, CENTER_TEXT);
       settextstyle(0, HORIZ_DIR, 1);
       outtextxy(315,465,"(C)DPS Ranipur productions");
      setcolor(310);
	 rectangle(473,10,637,90);
	 if(life==3)
	  {
	   setcolor(YELLOW);
	   setfillstyle(SOLID_FILL,RED);

	   circle(510,50,6);
	   circle(552,50,6);
	   circle(594,50,6);
	  }

	 if(life==2)
	 {
	   setcolor(YELLOW);
	   setfillstyle(SOLID_FILL,RED);

	   circle(510,50,6);
	   circle(552,50,6);
	 }

	 if(life==1)
	 {
	   setcolor(YELLOW);
	   setfillstyle(SOLID_FILL,RED);

	   circle(510,50,6);
	 }
      setcolor(DARKGRAY);
      settextstyle(3, HORIZ_DIR,1);
      outtextxy(getmaxx()/2, getmaxy()/2-30, ques);
      setcolor(GREEN);
      outtextxy(getmaxx()/2, getmaxy()/2, ques_opt);
      cin>>ans_user[0];
      ans_user[1]='\0';
      cout<<ans_user[0]<<'\n'<<ans[0];
      cleardevice();
      settextstyle(GOTHIC_FONT, HORIZ_DIR, 5);
      setcolor(RED);
      outtextxy(getmaxx()/2,25,"Level IV");
      setcolor(YELLOW);
      settextstyle(10, HORIZ_DIR, 1);
      outtextxy(getmaxx()/2,55,"Physics");
       setcolor(WHITE);
      settextjustify(CENTER_TEXT, CENTER_TEXT);
      settextstyle(0, HORIZ_DIR, 1);
      outtextxy(315,465,"(C)DPS Ranipur productions");
      setcolor(310);
	 rectangle(473,10,637,90);
	 if(life==3)
	  {
	   setcolor(YELLOW);
	   setfillstyle(SOLID_FILL,RED);

	   circle(510,50,6);
	   circle(552,50,6);
	   circle(594,50,6);
	  }

	 if(life==2)
	 {
	   setcolor(YELLOW);
	   setfillstyle(SOLID_FILL,RED);

	   circle(510,50,6);
	   circle(552,50,6);
	 }

	 if(life==1)
	 {
	   setcolor(YELLOW);
	   setfillstyle(SOLID_FILL,RED);

	   circle(510,50,6);
	 }
      setcolor(BLUE);
      settextstyle(7, HORIZ_DIR, 5);
      if(ans_user[0]==ans[0])
       {
	 outtextxy(getmaxx()/2, getmaxy()/2,"Great Job!!!");
       }
       else
       {
	outtextxy(getmaxx()/2, getmaxy()/2,"Better luck next time");
	life--;
       }
      level4.seekg(ques_no+i+j+5);
      while(level4)
      {
	level4.get(charac);
	if(charac=='#')
	 break;
	ques_fact[k]=charac;
	k++;
      }
     ques_fact[k]='\0';
     setcolor(GREEN);
     rectangle(10,270,630,340);
     settextstyle(3, HORIZ_DIR, 1);
     setcolor(YELLOW);
     outtextxy(getmaxx()/2, getmaxy()/2+45,"Do You Know?");
     setcolor(RED);
     outtextxy(getmaxx()/2, getmaxy()/2+65,ques_fact);
     getch();

   }
    void level5()
   {
	 cleardevice();
	 closegraph();
      int ques_int[5]={1,158,314,425,564};
      int i=0,j=0,k=0,l=0,counter=0;
      int gdriver = DETECT, gmode, errorcode;

      ifstream level5;
      level5.open("source/level5.pcm",ios::in);


      randomize();
      initgraph(&gdriver, &gmode, "");
      int ques_no=ques_int[random(sizeof(ques_int)/sizeof(int))];
      level5.seekg(ques_no);
      while(level5)
       {
	level5.get(charac);
	ques[i]=charac;
	i++;
	if(charac=='?')
	  break;
       }

      ques[i]='\0';
      level5.seekg(ques_no+i);
      level5.get(charac);
      ans[0]=charac;
      level5.seekg(ques_no+i+3);
      while(level5)
      {
	level5.get(charac);
	if(charac=='#')
	  break;
	ques_opt[j]=charac;
	j++;
      }
     ques_opt[j]='\0';
      setcolor(RED);
      settextjustify(CENTER_TEXT, CENTER_TEXT);
      settextstyle(GOTHIC_FONT, HORIZ_DIR, 5);
      outtextxy(getmaxx()/2,25,"Level V");
      setcolor(YELLOW);
      settextstyle(10, HORIZ_DIR, 1);
      outtextxy(getmaxx()/2,55,"Chemistry");
       setcolor(WHITE);
       settextjustify(CENTER_TEXT, CENTER_TEXT);
       settextstyle(0, HORIZ_DIR, 1);
       outtextxy(315,465,"(C)DPS Ranipur productions");
      setcolor(310);
	 rectangle(473,10,637,90);
	 if(life==3)
	  {
	   setcolor(YELLOW);
	   setfillstyle(SOLID_FILL,RED);

	   circle(510,50,6);
	   circle(552,50,6);
	   circle(594,50,6);
	  }

	 if(life==2)
	 {
	   setcolor(YELLOW);
	   setfillstyle(SOLID_FILL,RED);

	   circle(510,50,6);
	   circle(552,50,6);
	 }

	 if(life==1)
	 {
	   setcolor(YELLOW);
	   setfillstyle(SOLID_FILL,RED);

	   circle(510,50,6);
	 }
      setcolor(DARKGRAY);
      settextstyle(3, HORIZ_DIR,1);
      outtextxy(getmaxx()/2, getmaxy()/2-30, ques);
      setcolor(GREEN);
      outtextxy(getmaxx()/2, getmaxy()/2, ques_opt);
      cin>>ans_user[0];
      ans_user[1]='\0';
      cout<<ans_user[0]<<'\n'<<ans[0];
      cleardevice();
      settextstyle(GOTHIC_FONT, HORIZ_DIR, 5);
      setcolor(RED);
      outtextxy(getmaxx()/2,25,"Level V");
      setcolor(YELLOW);
      settextstyle(10, HORIZ_DIR, 1);
      outtextxy(getmaxx()/2,55,"Chemistry");
       setcolor(WHITE);
      settextjustify(CENTER_TEXT, CENTER_TEXT);
      settextstyle(0, HORIZ_DIR, 1);
      outtextxy(315,465,"(C)DPS Ranipur productions");
      setcolor(310);
	 rectangle(473,10,637,90);
	 if(life==3)
	  {
	   setcolor(YELLOW);
	   setfillstyle(SOLID_FILL,RED);

	   circle(510,50,6);
	   circle(552,50,6);
	   circle(594,50,6);
	  }

	 if(life==2)
	 {
	   setcolor(YELLOW);
	   setfillstyle(SOLID_FILL,RED);

	   circle(510,50,6);
	   circle(552,50,6);
	 }

	 if(life==1)
	 {
	   setcolor(YELLOW);
	   setfillstyle(SOLID_FILL,RED);

	   circle(510,50,6);
	 }
      setcolor(BLUE);
      settextstyle(7, HORIZ_DIR, 5);
      if(ans_user[0]==ans[0])
       {
	 outtextxy(getmaxx()/2, getmaxy()/2,"Great Job!!!");
       }
       else
       {
	outtextxy(getmaxx()/2, getmaxy()/2,"Better luck next time");
	life--;
       }
      level5.seekg(ques_no+i+j+5);
      while(level5)
      {
	level5.get(charac);
	if(charac=='#')
	 break;
	ques_fact[k]=charac;
	k++;
      }
     ques_fact[k]='\0';
     setcolor(GREEN);
     rectangle(10,270,630,340);
     settextstyle(3, HORIZ_DIR, 1);
     setcolor(YELLOW);
     outtextxy(getmaxx()/2, getmaxy()/2+45,"Do You Know?");
     setcolor(RED);
     outtextxy(getmaxx()/2, getmaxy()/2+65,ques_fact);
     getch();

   }
}   ;


void age_text()
{
 setcolor(RED);
 settextjustify(CENTER_TEXT, CENTER_TEXT);
 settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
 outtextxy(315, 45, "Your Age Range");
 setcolor(RED);
 settextstyle(0, HORIZ_DIR, 1);
 outtextxy(440,44,tester);

 setcolor(YELLOW);
 settextjustify(CENTER_TEXT, CENTER_TEXT);
 settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
 outtextxy(315, 120, "9-11 Years");


 setcolor(YELLOW);
 settextjustify(CENTER_TEXT, CENTER_TEXT);
 settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
 outtextxy(315, 195, "11-14 Years");

 settextjustify(CENTER_TEXT, CENTER_TEXT);
 settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
 outtextxy(315, 270, "15-18 Years");

 settextjustify(CENTER_TEXT, CENTER_TEXT);
 settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
 outtextxy(315, 345, "18-20 Years");

 setcolor(RED);
 settextjustify(CENTER_TEXT, CENTER_TEXT);
 settextstyle(0, HORIZ_DIR, 1);
 outtextxy(315,440,"[!!!UNDER CONTRUCTION!!!]");
 //outtextxy(315,445,"

 setcolor(WHITE);
 settextjustify(CENTER_TEXT, CENTER_TEXT);
 settextstyle(0, HORIZ_DIR, 1);
 outtextxy(315,465,"(C)DPS Ranipur productions");
}


void main()
{
  init_main: char move,eMove_1='d',eMove_2='a',eMove_3='a',eMove_4='d';
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy;
   int eMidx_1=160,eMidy_1=115,eMidx_2=445,eMidy_2=110;
   int eMidx_3=445,eMidy_3=375,eMidx_4=145,eMidy_4=375;
   int eStangle_1,eEndangle_1,eStangle_2,eEndangle_2;
   int eStangle_3,eEndangle_3,eStangle_4,eEndangle_4;
   int stangle, endangle;
   int score=0;
   int flag=0,flag_1=0;
   int menu_opt;
   int final_time;
   int level_up=0;
   int font_size=1;
   int x1=185,y1=100,x2=450,y2=150;
   int age;
   char move_menu;
   time_t time_int,time_fin;
   question lvl;

   initgraph(&gdriver, &gmode, "");

  //if(menu_opt!=3)
  // welcome();

   menu_opt=1;
   menu();

   midx = 305;
   midy = 215;

   if(menu_opt==1)
   {
    for(int i=1;move_menu!='f';)
  {
    age_text();
    setcolor(RED);
    rectangle(x1,y1,x2,y2);
    move_menu=getche();
    if(move_menu=='f')
    {
     age=i;
     break;
    }

    if(i==1)
     {
      if(move_menu=='s')
       {
	  cleardevice();
	  i++;
	  setcolor(RED);
	  rectangle(x1,y1+=75,x2,y2+=75);
	  age_text();
       }
     }
    else
    if(i==2)
     {
	 if(move_menu=='s')
       {
	  cleardevice();
	  i++;
	  setcolor(RED);
	  rectangle(x1,y1+=75,x2,y2+=75);
	  age_text();
       }
     else
      if(move_menu=='w')
       {
	  cleardevice();
	  i--;
	  setcolor(RED);
	  rectangle(x1,y1-=75,x2,y2-=75);
	  age_text();
       }
     }
    else
    if(i==3)
     {
	 if(move_menu=='s')
       {
	  cleardevice();
	  i++;
	  setcolor(RED);
	  rectangle(x1,y1+=75,x2,y2+=75);
	  age_text();
       }
     else
      if(move_menu=='w')
       {
	  cleardevice();
	  i--;
	  setcolor(RED);
	  rectangle(x1,y1-=75,x2,y2-=75);
	  age_text();
       }
     }
    else
    if(i==4)
     {
      if(move_menu=='w')
       {
	  cleardevice();
	  i--;
	  setcolor(RED);
	  rectangle(x1,y1-=75,x2,y2-=75);
	  age_text();
       }
     }
  }
   /*  settextjustify(CENTER_TEXT, CENTER_TEXT);
     setcolor(RED);
     for(font_size=1;font_size<30;font_size++)
     {
       cleardevice();
       settextstyle(10, 0, font_size);
       outtextxy(getmaxx()/2,getmaxy()/2,"3");
       delay(65);
     }
     setcolor(YELLOW);
     for(font_size=1;font_size<30;font_size++)
     {
       cleardevice();
       settextstyle(10, 0, font_size);
       outtextxy(getmaxx()/2,getmaxy()/2,"2");
       delay(65);
     }
     setcolor(GREEN);
     for(font_size=1;font_size<30;font_size++)
     {
       cleardevice();
       settextstyle(10, 0, font_size);
       outtextxy(getmaxx()/2,getmaxy()/2,"1");
       delay(65);
     }
     setcolor(RED);
     cleardevice();
     settextstyle(10, 0, font_size);
     outtextxy(getmaxx()/2,getmaxy()/2,"GO!!!");
     delay(1000);
     */
     final_time=option_timer;
     time_int=time(NULL);
     goto start;
   }

start: for(int k=1;k<400;k++)
{
  if((final_time-difftime(time_fin,time_int))==0)
   {
    if(level_up==0)
    {
     lvl.level1();
     level_up++;
    }
   else
    if(level_up==1)
    {
     lvl.level2();
     level_up++;
    }
    else
    if(level_up==2)
    {
     lvl.level3();
     level_up++;
    }
   else
    if(level_up==3)
    {
     lvl.level4();
     level_up++;
    }
     else
    if(level_up==4)
    {
     lvl.level5();
     level_up++;
    }
    time_int=time(NULL);
   }

  map();
  score=score_check(midx,midy,score);



  if(kbhit()!=0)
  {
   move=getche();
   flag=1;                                      //ARTIFICIAL ENEMY 1
    setcolor(GREEN);
   circle(eMidx_1, eMidy_1, radius);

   if(eObstruct(eMidx_1,eMidy_1,eMove_1)==1)   //not 2
    {
     if(random(3)==1)
     {
       for(int i=0;i<=10;i++)
	{
	 if(eObstruct(eMidx_1,eMidy_1+i,'s')!=3)
	  {
		eMove_1='s';
		break;
	  }

	 else
	 if(eObstruct(eMidx_1,eMidy_1-i,'w')!=4)
	  {
	       eMove_1='w';
		break;
	  }
       }
     }
     else
      {
       for(int i=0;i<=10;i++)
	{
	 if(eObstruct(eMidx_1,eMidy_1-i,'w')!=4)
	  {
		eMove_1='w';
		break;
	  }
	 else
	 if(eObstruct(eMidx_1,eMidy_1+i,'s')!=3)
	  {
		eMove_1='s';
		break;
	  }
	}
      }
    }


  else
   if(eObstruct(eMidx_1,eMidy_1,eMove_1)==2)  //not 1
    {
     if(random(3)==1)
     {

       for(int i=0;i<=10;i++)
	{
	 if((eObstruct(eMidx_1,eMidy_1+i,'s')!=3))
	   {
	     eMove_1='s';
	     break;
	    }
	  else
	 if((eObstruct(eMidx_1,eMidy_1-i,'w')!=4))
	  {
	    eMove_1='w';
	    break;
	  }
       }
     }
     else
     {
       for(int i=0;i<=10;i++)
	{
	 if((eObstruct(eMidx_1,eMidy_1-i,'w')!=4))
	  {
	    eMove_1='w';
	    break;
	  }
	 else
	 if((eObstruct(eMidx_1,eMidy_1+i,'s')!=3))
	   {
	     eMove_1='s';
	     break;
	    }
	}
      }
    }


   else
   if(eObstruct(eMidx_1,eMidy_1,eMove_1)==3)   //not 4
    {
     if(random(3)==1)
      {
       for(int i=0;i<=10;i++)
	{
	 if(eObstruct(eMidx_1-i,eMidy_1,'a')!=2)
	   {
	     eMove_1='a';
	     break;
	   }
	  else
	  if(eObstruct(eMidx_1+i,eMidy_1,'d')!=1)
	   {
	     eMove_1='d';
	     break;
	   }
	}
      }
     else
     {
      for(int i=0;i<=10;i++)
	{

	  if(eObstruct(eMidx_1+i,eMidy_1,'d')!=1)
	   {
	     eMove_1='d';
	     break;
	   }
	 else
	 if(eObstruct(eMidx_1-i,eMidy_1,'a')!=2)
	   {
	     eMove_1='a';
	     break;
	   }

	}
     }
    }


   else
   if(eObstruct(eMidx_1,eMidy_1,eMove_1)==4)
    {
     if(random(3)==1)
     {
       for(int i=0;i<=10;i++)
	{
	 if(eObstruct(eMidx_1-i,eMidy_1,'a')!=2)
	  {
	    eMove_1='a';
	    break;
	  }
	 else
	 if(eObstruct(eMidx_1+i,eMidy_1,'d')!=1)
	  {
	       eMove_1='d';
	       break;
	  }
       }
     }
     else
     {
      for(int i=0;i<=10;i++)
	{

	 if(eObstruct(eMidx_1+i,eMidy_1,'d')!=1)
	  {
	       eMove_1='d';
	       break;
	  }
	 else
	 if(eObstruct(eMidx_1-i,eMidy_1,'a')!=2)
	  {
	    eMove_1='a';
	    break;
	  }

       }
     }
    }

    if(eMove_1=='d')

    {

     eStangle_1=0,eEndangle_1=360;
     eMidx_1+=5;

	setcolor(GREEN);
	setfillstyle(WIDE_DOT_FILL, YELLOW);

	 pieslice(eMidx_1-5, eMidy_1, eStangle_1+50, eEndangle_1-50, radius);
   }
  else
  if(eMove_1=='a')
   {
     eStangle_1=180,eEndangle_1=180;
     eMidx_1-=5;

	setcolor(GREEN);
	setfillstyle(WIDE_DOT_FILL, YELLOW);

	 pieslice(eMidx_1+5, eMidy_1, eStangle_1+50, eEndangle_1-50, radius);

   }
   else
   if(eMove_1=='s')
    {
      eStangle_1=270,eEndangle_1=270;
     eMidy_1+=5;

	setcolor(GREEN);
	setfillstyle(WIDE_DOT_FILL, YELLOW);

	 pieslice(eMidx_1, eMidy_1-5, eStangle_1+50, eEndangle_1-50, radius);

    }
   else
   if(eMove_1=='w')
    {
      eStangle_1=90,eEndangle_1=90;
      eMidy_1-=5;

	setcolor(GREEN);
	setfillstyle(WIDE_DOT_FILL, YELLOW);

	 pieslice(eMidx_1, eMidy_1+5, eStangle_1+50, eEndangle_1-50, radius);
    }

     setcolor(GREEN);                                   //ARTIFICIAL ENEMY 2
   circle(eMidx_2, eMidy_2, radius);

   if(eObstruct(eMidx_2,eMidy_2,eMove_2)==1)   //not 2
    {
     if(random(3)==1)
     {
       for(int i=0;i<=10;i++)
	{
	 if(eObstruct(eMidx_2,eMidy_2+i,'s')!=3)
	  {
		eMove_2='s';
		break;
	  }

	 else
	 if(eObstruct(eMidx_2,eMidy_2-i,'w')!=4)
	  {
	       eMove_2='w';
		break;
	  }
       }
     }
     else
      {
       for(int i=0;i<=10;i++)
	{
	 if(eObstruct(eMidx_2,eMidy_2-i,'w')!=4)
	  {
		eMove_2='w';
		break;
	  }
	 else
	 if(eObstruct(eMidx_2,eMidy_2+i,'s')!=3)
	  {
		eMove_2='s';
		break;
	  }
	}
      }
    }


  else
   if(eObstruct(eMidx_2,eMidy_2,eMove_2)==2)  //not 1
    {
     if(random(3)==1)
     {

       for(int i=0;i<=10;i++)
	{
	 if((eObstruct(eMidx_2,eMidy_2+i,'s')!=3))
	   {
	     eMove_2='s';
	     break;
	    }
	  else
	 if((eObstruct(eMidx_2,eMidy_2-i,'w')!=4))
	  {
	    eMove_2='w';
	    break;
	  }
       }
     }
     else
     {
       for(int i=0;i<=10;i++)
	{
	 if((eObstruct(eMidx_2,eMidy_2-i,'w')!=4))
	  {
	    eMove_2='w';
	    break;
	  }
	 else
	 if((eObstruct(eMidx_2,eMidy_2+i,'s')!=3))
	   {
	     eMove_2='s';
	     break;
	    }
	}
      }
    }


   else
   if(eObstruct(eMidx_2,eMidy_2,eMove_2)==3)   //not 4
    {
     if(random(3)==1)
      {
       for(int i=0;i<=10;i++)
	{
	 if(eObstruct(eMidx_2-i,eMidy_2,'a')!=2)
	   {
	     eMove_2='a';
	     break;
	   }
	  else
	  if(eObstruct(eMidx_2+i,eMidy_2,'d')!=1)
	   {
	     eMove_2='d';
	     break;
	   }
	}
      }
     else
     {
      for(int i=0;i<=10;i++)
	{

	  if(eObstruct(eMidx_2+i,eMidy_2,'d')!=1)
	   {
	     eMove_2='d';
	     break;
	   }
	 else
	 if(eObstruct(eMidx_2-i,eMidy_2,'a')!=2)
	   {
	     eMove_2='a';
	     break;
	   }

	}
     }
    }


   else
   if(eObstruct(eMidx_2,eMidy_2,eMove_2)==4)
    {
     if(random(3)==1)
     {
       for(int i=0;i<=10;i++)
	{
	 if(eObstruct(eMidx_2-i,eMidy_2,'a')!=2)
	  {
	    eMove_2='a';
	    break;
	  }
	 else
	 if(eObstruct(eMidx_2+i,eMidy_2,'d')!=1)
	  {
	       eMove_2='d';
	       break;
	  }
       }
     }
     else
     {
      for(int i=0;i<=10;i++)
	{

	 if(eObstruct(eMidx_2+i,eMidy_2,'d')!=1)
	  {
	       eMove_2='d';
	       break;
	  }
	 else
	 if(eObstruct(eMidx_2-i,eMidy_2,'a')!=2)
	  {
	    eMove_2='a';
	    break;
	  }

       }
     }
    }

    if(eMove_2=='d')

    {

     eStangle_2=30,eEndangle_2=330;
     eMidx_2+=5;

	setcolor(GREEN);
	setfillstyle(WIDE_DOT_FILL, GREEN);

	 pieslice(eMidx_2-5, eMidy_2, eStangle_2, eEndangle_2, radius);
   }
  else
  if(eMove_2=='a')
   {
     eStangle_2=150,eEndangle_2=220;
     eMidx_2-=5;

	setcolor(GREEN);
	setfillstyle(WIDE_DOT_FILL, GREEN);

	 pieslice(eMidx_2+5, eMidy_2, eStangle_2, eEndangle_2, radius);

   }
   else
   if(eMove_2=='s')
    {
      eStangle_2=240,eEndangle_2=300;
     eMidy_2+=5;

	setcolor(GREEN);
	setfillstyle(WIDE_DOT_FILL, GREEN);

	 pieslice(eMidx_2, eMidy_2-5, eStangle_2, eEndangle_2, radius);

    }
   else
   if(eMove_2=='w')
    {
      eStangle_2=60,eEndangle_2=120;
      eMidy_2-=5;

	setcolor(GREEN);
	setfillstyle(WIDE_DOT_FILL, GREEN);

	 pieslice(eMidx_2, eMidy_2+5, eStangle_2, eEndangle_2, radius);
    }

     setcolor(GREEN);                             //ARTIFICIAL ENEMY 3
   circle(eMidx_3, eMidy_3, radius);

   if(eObstruct(eMidx_3,eMidy_3,eMove_3)==1)   //not 2
    {
     if(random(3)==1)
     {
       for(int i=0;i<=10;i++)
	{
	 if(eObstruct(eMidx_3,eMidy_3+i,'s')!=3)
	  {
		eMove_3='s';
		break;
	  }

	 else
	 if(eObstruct(eMidx_3,eMidy_3-i,'w')!=4)
	  {
	       eMove_3='w';
		break;
	  }
       }
     }
     else
      {
       for(int i=0;i<=10;i++)
	{
	 if(eObstruct(eMidx_3,eMidy_3-i,'w')!=4)
	  {
		eMove_3='w';
		break;
	  }
	 else
	 if(eObstruct(eMidx_3,eMidy_3+i,'s')!=3)
	  {
		eMove_3='s';
		break;
	  }
	}
      }
    }


  else
   if(eObstruct(eMidx_3,eMidy_3,eMove_3)==2)  //not 1
    {
     if(random(3)==1)
     {

       for(int i=0;i<=10;i++)
	{
	 if((eObstruct(eMidx_3,eMidy_3+i,'s')!=3))
	   {
	     eMove_3='s';
	     break;
	    }
	  else
	 if((eObstruct(eMidx_3,eMidy_3-i,'w')!=4))
	  {
	    eMove_3='w';
	    break;
	  }
       }
     }
     else
     {
       for(int i=0;i<=10;i++)
	{
	 if((eObstruct(eMidx_3,eMidy_3-i,'w')!=4))
	  {
	    eMove_3='w';
	    break;
	  }
	 else
	 if((eObstruct(eMidx_3,eMidy_3+i,'s')!=3))
	   {
	     eMove_3='s';
	     break;
	    }
	}
      }
    }


   else
   if(eObstruct(eMidx_3,eMidy_3,eMove_3)==3)   //not 4
    {
     if(random(3)==1)
      {
       for(int i=0;i<=10;i++)
	{
	 if(eObstruct(eMidx_3-i,eMidy_3,'a')!=2)
	   {
	     eMove_3='a';
	     break;
	   }
	  else
	  if(eObstruct(eMidx_3+i,eMidy_3,'d')!=1)
	   {
	     eMove_3='d';
	     break;
	   }
	}
      }
     else
     {
      for(int i=0;i<=10;i++)
	{

	  if(eObstruct(eMidx_3+i,eMidy_3,'d')!=1)
	   {
	     eMove_3='d';
	     break;
	   }
	 else
	 if(eObstruct(eMidx_3-i,eMidy_3,'a')!=2)
	   {
	     eMove_3='a';
	     break;
	   }

	}
     }
    }


   else
   if(eObstruct(eMidx_3,eMidy_3,eMove_3)==4)
    {
     if(random(3)==1)
     {
       for(int i=0;i<=10;i++)
	{
	 if(eObstruct(eMidx_3-i,eMidy_3,'a')!=2)
	  {
	    eMove_3='a';
	    break;
	  }
	 else
	 if(eObstruct(eMidx_3+i,eMidy_3,'d')!=1)
	  {
	       eMove_3='d';
	       break;
	  }
       }
     }
     else
     {
      for(int i=0;i<=10;i++)
	{

	 if(eObstruct(eMidx_3+i,eMidy_3,'d')!=1)
	  {
	       eMove_3='d';
	       break;
	  }
	 else
	 if(eObstruct(eMidx_3-i,eMidy_3,'a')!=2)
	  {
	    eMove_3='a';
	    break;
	  }

       }
     }
    }

    if(eMove_3=='d')

    {

     eStangle_3=30,eEndangle_3=330;
     eMidx_3+=5;

	setcolor(GREEN);
	setfillstyle(WIDE_DOT_FILL, GREEN);

	 pieslice(eMidx_3-5, eMidy_3, eStangle_3, eEndangle_3, radius);
   }
  else
  if(eMove_3=='a')
   {
     eStangle_3=150,eEndangle_3=220;
     eMidx_3-=5;

	setcolor(GREEN);
	setfillstyle(WIDE_DOT_FILL, GREEN);

	 pieslice(eMidx_3+5, eMidy_3, eStangle_3, eEndangle_3, radius);

   }
   else
   if(eMove_3=='s')
    {
      eStangle_3=240,eEndangle_3=300;
     eMidy_3+=5;

	setcolor(GREEN);
	setfillstyle(WIDE_DOT_FILL, GREEN);

	 pieslice(eMidx_3, eMidy_3-5, eStangle_3, eEndangle_3, radius);

    }
   else
   if(eMove_3=='w')
    {
      eStangle_3=60,eEndangle_3=120;
      eMidy_3-=5;

	setcolor(GREEN);
	setfillstyle(WIDE_DOT_FILL, GREEN);

	 pieslice(eMidx_3, eMidy_3+5, eStangle_3, eEndangle_3, radius);
    }

    setcolor(GREEN);                             //ARTIFICIAL ENEMY 4
   circle(eMidx_4, eMidy_4, radius);

   if(eObstruct(eMidx_4,eMidy_4,eMove_4)==1)   //not 2
    {
     if(random(3)==1)
     {
       for(int i=0;i<=10;i++)
	{
	 if(eObstruct(eMidx_4,eMidy_4+i,'s')!=3)
	  {
		eMove_4='s';
		break;
	  }

	 else
	 if(eObstruct(eMidx_4,eMidy_4-i,'w')!=4)
	  {
	       eMove_4='w';
		break;
	  }
       }
     }
     else
      {
       for(int i=0;i<=10;i++)
	{
	 if(eObstruct(eMidx_4,eMidy_4-i,'w')!=4)
	  {
		eMove_4='w';
		break;
	  }
	 else
	 if(eObstruct(eMidx_4,eMidy_4+i,'s')!=3)
	  {
		eMove_4='s';
		break;
	  }
	}
      }
    }


  else
   if(eObstruct(eMidx_4,eMidy_4,eMove_4)==2)  //not 1
    {
     if(random(3)==1)
     {

       for(int i=0;i<=10;i++)
	{
	 if((eObstruct(eMidx_4,eMidy_4+i,'s')!=3))
	   {
	     eMove_4='s';
	     break;
	    }
	  else
	 if((eObstruct(eMidx_4,eMidy_4-i,'w')!=4))
	  {
	    eMove_4='w';
	    break;
	  }
       }
     }
     else
     {
       for(int i=0;i<=10;i++)
	{
	 if((eObstruct(eMidx_4,eMidy_4-i,'w')!=4))
	  {
	    eMove_4='w';
	    break;
	  }
	 else
	 if((eObstruct(eMidx_4,eMidy_4+i,'s')!=3))
	   {
	     eMove_4='s';
	     break;
	    }
	}
      }
    }


   else
   if(eObstruct(eMidx_4,eMidy_4,eMove_4)==3)   //not 4
    {
     if(random(3)==1)
      {
       for(int i=0;i<=10;i++)
	{
	 if(eObstruct(eMidx_4-i,eMidy_4,'a')!=2)
	   {
	     eMove_4='a';
	     break;
	   }
	  else
	  if(eObstruct(eMidx_4+i,eMidy_4,'d')!=1)
	   {
	     eMove_4='d';
	     break;
	   }
	}
      }
     else
     {
      for(int i=0;i<=10;i++)
	{

	  if(eObstruct(eMidx_4+i,eMidy_4,'d')!=1)
	   {
	     eMove_4='d';
	     break;
	   }
	 else
	 if(eObstruct(eMidx_4-i,eMidy_4,'a')!=2)
	   {
	     eMove_4='a';
	     break;
	   }

	}
     }
    }


   else
   if(eObstruct(eMidx_4,eMidy_4,eMove_4)==4)
    {
     if(random(3)==1)
     {
       for(int i=0;i<=10;i++)
	{
	 if(eObstruct(eMidx_4-i,eMidy_4,'a')!=2)
	  {
	    eMove_4='a';
	    break;
	  }
	 else
	 if(eObstruct(eMidx_4+i,eMidy_4,'d')!=1)
	  {
	       eMove_4='d';
	       break;
	  }
       }
     }
     else
     {
      for(int i=0;i<=10;i++)
	{

	 if(eObstruct(eMidx_4+i,eMidy_4,'d')!=1)
	  {
	       eMove_4='d';
	       break;
	  }
	 else
	 if(eObstruct(eMidx_4-i,eMidy_4,'a')!=2)
	  {
	    eMove_4='a';
	    break;
	  }

       }
     }
    }

    if(eMove_4=='d')

    {

     eStangle_4=30,eEndangle_4=330;
     eMidx_4+=5;

	setcolor(GREEN);
	setfillstyle(WIDE_DOT_FILL, GREEN);

	 pieslice(eMidx_4-5, eMidy_4, eStangle_4, eEndangle_4, radius);
   }
  else
  if(eMove_4=='a')
   {
     eStangle_4=150,eEndangle_4=220;
     eMidx_4-=5;

	setcolor(GREEN);
	setfillstyle(WIDE_DOT_FILL, GREEN);

	 pieslice(eMidx_4+5, eMidy_4, eStangle_4, eEndangle_4, radius);

   }
   else
   if(eMove_4=='s')
    {
      eStangle_4=240,eEndangle_4=300;
     eMidy_4+=5;

	setcolor(GREEN);
	setfillstyle(WIDE_DOT_FILL, GREEN);

	 pieslice(eMidx_4, eMidy_4-5, eStangle_4, eEndangle_4, radius);

    }
   else
   if(eMove_4=='w')
    {
      eStangle_4=60,eEndangle_4=120;
      eMidy_4-=5;

	setcolor(GREEN);
	setfillstyle(WIDE_DOT_FILL, GREEN);

	 pieslice(eMidx_4, eMidy_4+5, eStangle_4, eEndangle_4, radius);
    }



  }


  else


   {                                                    //ARTIFICIAL ENEMY 1
    setcolor(GREEN);
   circle(eMidx_1, eMidy_1, radius);

   if(eObstruct(eMidx_1,eMidy_1,eMove_1)==1)   //not 2
    {
     if(random(3)==1)
     {
       for(int i=0;i<=10;i++)
	{
	 if(eObstruct(eMidx_1,eMidy_1+i,'s')!=3)
	  {
		eMove_1='s';
		break;
	  }

	 else
	 if(eObstruct(eMidx_1,eMidy_1-i,'w')!=4)
	  {
	       eMove_1='w';
		break;
	  }
       }
     }
     else
      {
       for(int i=0;i<=10;i++)
	{
	 if(eObstruct(eMidx_1,eMidy_1-i,'w')!=4)
	  {
		eMove_1='w';
		break;
	  }
	 else
	 if(eObstruct(eMidx_1,eMidy_1+i,'s')!=3)
	  {
		eMove_1='s';
		break;
	  }
	}
      }
    }


  else
   if(eObstruct(eMidx_1,eMidy_1,eMove_1)==2)  //not 1
    {
     if(random(3)==1)
     {

       for(int i=0;i<=10;i++)
	{
	 if((eObstruct(eMidx_1,eMidy_1+i,'s')!=3))
	   {
	     eMove_1='s';
	     break;
	    }
	  else
	 if((eObstruct(eMidx_1,eMidy_1-i,'w')!=4))
	  {
	    eMove_1='w';
	    break;
	  }
       }
     }
     else
     {
       for(int i=0;i<=10;i++)
	{
	 if((eObstruct(eMidx_1,eMidy_1-i,'w')!=4))
	  {
	    eMove_1='w';
	    break;
	  }
	 else
	 if((eObstruct(eMidx_1,eMidy_1+i,'s')!=3))
	   {
	     eMove_1='s';
	     break;
	    }
	}
      }
    }


   else
   if(eObstruct(eMidx_1,eMidy_1,eMove_1)==3)   //not 4
    {
     if(random(3)==1)
      {
       for(int i=0;i<=10;i++)
	{
	 if(eObstruct(eMidx_1-i,eMidy_1,'a')!=2)
	   {
	     eMove_1='a';
	     break;
	   }
	  else
	  if(eObstruct(eMidx_1+i,eMidy_1,'d')!=1)
	   {
	     eMove_1='d';
	     break;
	   }
	}
      }
     else
     {
      for(int i=0;i<=10;i++)
	{

	  if(eObstruct(eMidx_1+i,eMidy_1,'d')!=1)
	   {
	     eMove_1='d';
	     break;
	   }
	 else
	 if(eObstruct(eMidx_1-i,eMidy_1,'a')!=2)
	   {
	     eMove_1='a';
	     break;
	   }

	}
     }
    }


   else
   if(eObstruct(eMidx_1,eMidy_1,eMove_1)==4)
    {
     if(random(3)==1)
     {
       for(int i=0;i<=10;i++)
	{
	 if(eObstruct(eMidx_1-i,eMidy_1,'a')!=2)
	  {
	    eMove_1='a';
	    break;
	  }
	 else
	 if(eObstruct(eMidx_1+i,eMidy_1,'d')!=1)
	  {
	       eMove_1='d';
	       break;
	  }
       }
     }
     else
     {
      for(int i=0;i<=10;i++)
	{

	 if(eObstruct(eMidx_1+i,eMidy_1,'d')!=1)
	  {
	       eMove_1='d';
	       break;
	  }
	 else
	 if(eObstruct(eMidx_1-i,eMidy_1,'a')!=2)
	  {
	    eMove_1='a';
	    break;
	  }

       }
     }
    }

    if(eMove_1=='d')

    {

     eStangle_1=30,eEndangle_1=330;
     eMidx_1+=5;

	setcolor(GREEN);
	setfillstyle(WIDE_DOT_FILL, GREEN);

	 pieslice(eMidx_1-5, eMidy_1, eStangle_1, eEndangle_1, radius);
   }
  else
  if(eMove_1=='a')
   {
     eStangle_1=150,eEndangle_1=220;
     eMidx_1-=5;

	setcolor(GREEN);
	setfillstyle(WIDE_DOT_FILL, GREEN);

	 pieslice(eMidx_1+5, eMidy_1, eStangle_1, eEndangle_1, radius);

   }
   else
   if(eMove_1=='s')
    {
      eStangle_1=240,eEndangle_1=300;
     eMidy_1+=5;

	setcolor(GREEN);
	setfillstyle(WIDE_DOT_FILL, GREEN);

	 pieslice(eMidx_1, eMidy_1-5, eStangle_1, eEndangle_1, radius);

    }
   else
   if(eMove_1=='w')
    {
      eStangle_1=60,eEndangle_1=120;
      eMidy_1-=5;

	setcolor(GREEN);
	setfillstyle(WIDE_DOT_FILL, GREEN);

	 pieslice(eMidx_1, eMidy_1+5, eStangle_1, eEndangle_1, radius);
    }

     setcolor(GREEN);                                  //ENEMY ARTIFICIAL 2
   circle(eMidx_2, eMidy_2, radius);

   if(eObstruct(eMidx_2,eMidy_2,eMove_2)==1)   //not 2
    {
     if(random(3)==1)
     {
       for(int i=0;i<=10;i++)
	{
	 if(eObstruct(eMidx_2,eMidy_2+i,'s')!=3)
	  {
		eMove_2='s';
		break;
	  }

	 else
	 if(eObstruct(eMidx_2,eMidy_2-i,'w')!=4)
	  {
	       eMove_2='w';
		break;
	  }
       }
     }
     else
      {
       for(int i=0;i<=10;i++)
	{
	 if(eObstruct(eMidx_2,eMidy_2-i,'w')!=4)
	  {
		eMove_2='w';
		break;
	  }
	 else
	 if(eObstruct(eMidx_2,eMidy_2+i,'s')!=3)
	  {
		eMove_2='s';
		break;
	  }
	}
      }
    }


  else
   if(eObstruct(eMidx_2,eMidy_2,eMove_2)==2)  //not 1
    {
     if(random(3)==1)
     {

       for(int i=0;i<=10;i++)
	{
	 if((eObstruct(eMidx_2,eMidy_2+i,'s')!=3))
	   {
	     eMove_2='s';
	     break;
	    }
	  else
	 if((eObstruct(eMidx_2,eMidy_2-i,'w')!=4))
	  {
	    eMove_2='w';
	    break;
	  }
       }
     }
     else
     {
       for(int i=0;i<=10;i++)
	{
	 if((eObstruct(eMidx_2,eMidy_2-i,'w')!=4))
	  {
	    eMove_2='w';
	    break;
	  }
	 else
	 if((eObstruct(eMidx_2,eMidy_2+i,'s')!=3))
	   {
	     eMove_2='s';
	     break;
	    }
	}
      }
    }


   else
   if(eObstruct(eMidx_2,eMidy_2,eMove_2)==3)   //not 4
    {
     if(random(3)==1)
      {
       for(int i=0;i<=10;i++)
	{
	 if(eObstruct(eMidx_2-i,eMidy_2,'a')!=2)
	   {
	     eMove_2='a';
	     break;
	   }
	  else
	  if(eObstruct(eMidx_2+i,eMidy_2,'d')!=1)
	   {
	     eMove_2='d';
	     break;
	   }
	}
      }
     else
     {
      for(int i=0;i<=10;i++)
	{

	  if(eObstruct(eMidx_2+i,eMidy_2,'d')!=1)
	   {
	     eMove_2='d';
	     break;
	   }
	 else
	 if(eObstruct(eMidx_2-i,eMidy_2,'a')!=2)
	   {
	     eMove_2='a';
	     break;
	   }

	}
     }
    }


   else
   if(eObstruct(eMidx_2,eMidy_2,eMove_2)==4)
    {
     if(random(3)==1)
     {
       for(int i=0;i<=10;i++)
	{
	 if(eObstruct(eMidx_2-i,eMidy_2,'a')!=2)
	  {
	    eMove_2='a';
	    break;
	  }
	 else
	 if(eObstruct(eMidx_2+i,eMidy_2,'d')!=1)
	  {
	       eMove_2='d';
	       break;
	  }
       }
     }
     else
     {
      for(int i=0;i<=10;i++)
	{

	 if(eObstruct(eMidx_2+i,eMidy_2,'d')!=1)
	  {
	       eMove_2='d';
	       break;
	  }
	 else
	 if(eObstruct(eMidx_2-i,eMidy_2,'a')!=2)
	  {
	    eMove_2='a';
	    break;
	  }

       }
     }
    }

    if(eMove_2=='d')

    {

     eStangle_2=30,eEndangle_2=330;
     eMidx_2+=5;

	setcolor(GREEN);
	setfillstyle(WIDE_DOT_FILL, GREEN);

	 pieslice(eMidx_2-5, eMidy_2, eStangle_2, eEndangle_2, radius);
   }
  else
  if(eMove_2=='a')
   {
     eStangle_2=150,eEndangle_2=220;
     eMidx_2-=5;

	setcolor(GREEN);
	setfillstyle(WIDE_DOT_FILL, GREEN);

	 pieslice(eMidx_2+5, eMidy_2, eStangle_2, eEndangle_2, radius);

   }
   else
   if(eMove_2=='s')
    {
      eStangle_2=240,eEndangle_2=300;
     eMidy_2+=5;

	setcolor(GREEN);
	setfillstyle(WIDE_DOT_FILL, GREEN);

	 pieslice(eMidx_2, eMidy_2-5, eStangle_2, eEndangle_2, radius);

    }
   else
   if(eMove_2=='w')
    {
      eStangle_2=60,eEndangle_2=120;
      eMidy_2-=5;

	setcolor(GREEN);
	setfillstyle(WIDE_DOT_FILL, GREEN);

	 pieslice(eMidx_2, eMidy_2+5, eStangle_2, eEndangle_2, radius);
    }

     setcolor(GREEN);                             //ARTIFICIAL ENEMY 3
   circle(eMidx_3, eMidy_3, radius);

   if(eObstruct(eMidx_3,eMidy_3,eMove_3)==1)   //not 2
    {
     if(random(3)==1)
     {
       for(int i=0;i<=10;i++)
	{
	 if(eObstruct(eMidx_3,eMidy_3+i,'s')!=3)
	  {
		eMove_3='s';
		break;
	  }

	 else
	 if(eObstruct(eMidx_3,eMidy_3-i,'w')!=4)
	  {
	       eMove_3='w';
		break;
	  }
       }
     }
     else
      {
       for(int i=0;i<=10;i++)
	{
	 if(eObstruct(eMidx_3,eMidy_3-i,'w')!=4)
	  {
		eMove_3='w';
		break;
	  }
	 else
	 if(eObstruct(eMidx_3,eMidy_3+i,'s')!=3)
	  {
		eMove_3='s';
		break;
	  }
	}
      }
    }


  else
   if(eObstruct(eMidx_3,eMidy_3,eMove_3)==2)  //not 1
    {
     if(random(3)==1)
     {

       for(int i=0;i<=10;i++)
	{
	 if((eObstruct(eMidx_3,eMidy_3+i,'s')!=3))
	   {
	     eMove_3='s';
	     break;
	    }
	  else
	 if((eObstruct(eMidx_3,eMidy_3-i,'w')!=4))
	  {
	    eMove_3='w';
	    break;
	  }
       }
     }
     else
     {
       for(int i=0;i<=10;i++)
	{
	 if((eObstruct(eMidx_3,eMidy_3-i,'w')!=4))
	  {
	    eMove_3='w';
	    break;
	  }
	 else
	 if((eObstruct(eMidx_3,eMidy_3+i,'s')!=3))
	   {
	     eMove_3='s';
	     break;
	    }
	}
      }
    }


   else
   if(eObstruct(eMidx_3,eMidy_3,eMove_3)==3)   //not 4
    {
     if(random(3)==1)
      {
       for(int i=0;i<=10;i++)
	{
	 if(eObstruct(eMidx_3-i,eMidy_3,'a')!=2)
	   {
	     eMove_3='a';
	     break;
	   }
	  else
	  if(eObstruct(eMidx_3+i,eMidy_3,'d')!=1)
	   {
	     eMove_3='d';
	     break;
	   }
	}
      }
     else
     {
      for(int i=0;i<=10;i++)
	{

	  if(eObstruct(eMidx_3+i,eMidy_3,'d')!=1)
	   {
	     eMove_3='d';
	     break;
	   }
	 else
	 if(eObstruct(eMidx_3-i,eMidy_3,'a')!=2)
	   {
	     eMove_3='a';
	     break;
	   }

	}
     }
    }


   else
   if(eObstruct(eMidx_3,eMidy_3,eMove_3)==4)
    {
     if(random(3)==1)
     {
       for(int i=0;i<=10;i++)
	{
	 if(eObstruct(eMidx_3-i,eMidy_3,'a')!=2)
	  {
	    eMove_3='a';
	    break;
	  }
	 else
	 if(eObstruct(eMidx_3+i,eMidy_3,'d')!=1)
	  {
	       eMove_3='d';
	       break;
	  }
       }
     }
     else
     {
      for(int i=0;i<=10;i++)
	{

	 if(eObstruct(eMidx_3+i,eMidy_3,'d')!=1)
	  {
	       eMove_3='d';
	       break;
	  }
	 else
	 if(eObstruct(eMidx_3-i,eMidy_3,'a')!=2)
	  {
	    eMove_3='a';
	    break;
	  }

       }
     }
    }

    if(eMove_3=='d')

    {

     eStangle_3=30,eEndangle_3=330;
     eMidx_3+=5;

	setcolor(GREEN);
	setfillstyle(WIDE_DOT_FILL, GREEN);

	 pieslice(eMidx_3-5, eMidy_3, eStangle_3, eEndangle_3, radius);
   }
  else
  if(eMove_3=='a')
   {
     eStangle_3=150,eEndangle_3=220;
     eMidx_3-=5;

	setcolor(GREEN);
	setfillstyle(WIDE_DOT_FILL, GREEN);

	 pieslice(eMidx_3+5, eMidy_3, eStangle_3, eEndangle_3, radius);

   }
   else
   if(eMove_3=='s')
    {
      eStangle_3=240,eEndangle_3=300;
     eMidy_3+=5;

	setcolor(GREEN);
	setfillstyle(WIDE_DOT_FILL, GREEN);

	 pieslice(eMidx_3, eMidy_3-5, eStangle_3, eEndangle_3, radius);

    }
   else
   if(eMove_3=='w')
    {
      eStangle_3=60,eEndangle_3=120;
      eMidy_3-=5;

	setcolor(GREEN);
	setfillstyle(WIDE_DOT_FILL, GREEN);

	 pieslice(eMidx_3, eMidy_3+5, eStangle_3, eEndangle_3, radius);
    }


    setcolor(GREEN);                             //ARTIFICIAL ENEMY 4
   circle(eMidx_4, eMidy_4, radius);

   if(eObstruct(eMidx_4,eMidy_4,eMove_4)==1)   //not 2
    {
     if(random(3)==1)
     {
       for(int i=0;i<=10;i++)
	{
	 if(eObstruct(eMidx_4,eMidy_4+i,'s')!=3)
	  {
		eMove_4='s';
		break;
	  }

	 else
	 if(eObstruct(eMidx_4,eMidy_4-i,'w')!=4)
	  {
	       eMove_4='w';
		break;
	  }
       }
     }
     else
      {
       for(int i=0;i<=10;i++)
	{
	 if(eObstruct(eMidx_4,eMidy_4-i,'w')!=4)
	  {
		eMove_4='w';
		break;
	  }
	 else
	 if(eObstruct(eMidx_4,eMidy_4+i,'s')!=3)
	  {
		eMove_4='s';
		break;
	  }
	}
      }
    }


  else
   if(eObstruct(eMidx_4,eMidy_4,eMove_4)==2)  //not 1
    {
     if(random(3)==1)
     {

       for(int i=0;i<=10;i++)
	{
	 if((eObstruct(eMidx_4,eMidy_4+i,'s')!=3))
	   {
	     eMove_4='s';
	     break;
	    }
	  else
	 if((eObstruct(eMidx_4,eMidy_4-i,'w')!=4))
	  {
	    eMove_4='w';
	    break;
	  }
       }
     }
     else
     {
       for(int i=0;i<=10;i++)
	{
	 if((eObstruct(eMidx_4,eMidy_4-i,'w')!=4))
	  {
	    eMove_4='w';
	    break;
	  }
	 else
	 if((eObstruct(eMidx_4,eMidy_4+i,'s')!=3))
	   {
	     eMove_4='s';
	     break;
	    }
	}
      }
    }


   else
   if(eObstruct(eMidx_4,eMidy_4,eMove_4)==3)   //not 4
    {
     if(random(3)==1)
      {
       for(int i=0;i<=10;i++)
	{
	 if(eObstruct(eMidx_4-i,eMidy_4,'a')!=2)
	   {
	     eMove_4='a';
	     break;
	   }
	  else
	  if(eObstruct(eMidx_4+i,eMidy_4,'d')!=1)
	   {
	     eMove_4='d';
	     break;
	   }
	}
      }
     else
     {
      for(int i=0;i<=10;i++)
	{

	  if(eObstruct(eMidx_4+i,eMidy_4,'d')!=1)
	   {
	     eMove_4='d';
	     break;
	   }
	 else
	 if(eObstruct(eMidx_4-i,eMidy_4,'a')!=2)
	   {
	     eMove_4='a';
	     break;
	   }

	}
     }
    }


   else
   if(eObstruct(eMidx_4,eMidy_4,eMove_4)==4)
    {
     if(random(3)==1)
     {
       for(int i=0;i<=10;i++)
	{
	 if(eObstruct(eMidx_4-i,eMidy_4,'a')!=2)
	  {
	    eMove_4='a';
	    break;
	  }
	 else
	 if(eObstruct(eMidx_4+i,eMidy_4,'d')!=1)
	  {
	       eMove_4='d';
	       break;
	  }
       }
     }
     else
     {
      for(int i=0;i<=10;i++)
	{

	 if(eObstruct(eMidx_4+i,eMidy_4,'d')!=1)
	  {
	       eMove_4='d';
	       break;
	  }
	 else
	 if(eObstruct(eMidx_4-i,eMidy_4,'a')!=2)
	  {
	    eMove_4='a';
	    break;
	  }

       }
     }
    }

    if(eMove_4=='d')

    {

     eStangle_4=30,eEndangle_4=330;
     eMidx_4+=5;

	setcolor(GREEN);
	setfillstyle(WIDE_DOT_FILL, GREEN);

	 pieslice(eMidx_4-5, eMidy_4, eStangle_4, eEndangle_4, radius);
   }
  else
  if(eMove_4=='a')
   {
     eStangle_4=150,eEndangle_4=220;
     eMidx_4-=5;

	setcolor(GREEN);
	setfillstyle(WIDE_DOT_FILL, GREEN);

	 pieslice(eMidx_4+5, eMidy_4, eStangle_4, eEndangle_4, radius);

   }
   else
   if(eMove_4=='s')
    {
      eStangle_4=240,eEndangle_4=300;
     eMidy_4+=5;

	setcolor(GREEN);
	setfillstyle(WIDE_DOT_FILL, GREEN);

	 pieslice(eMidx_4, eMidy_4-5, eStangle_4, eEndangle_4, radius);

    }
   else
   if(eMove_4=='w')
    {
      eStangle_4=60,eEndangle_4=120;
      eMidy_4-=5;

	setcolor(GREEN);
	setfillstyle(WIDE_DOT_FILL, GREEN);

	 pieslice(eMidx_4, eMidy_4+5, eStangle_4, eEndangle_4, radius);
    }


    map();
    score=score_check(midx,midy,score);

    cleardevice();

    map();

      if(menu_opt==1)
       {
	 map();

	 char score_char[50];
	 char menu_opt_char[50];
	 char midx_char[50],midy_char[50];
	 char difftime_char[50];

	 if(final_time-difftime(time_fin,time_int)>15)
	  {
	     settextjustify(CENTER_TEXT, CENTER_TEXT);
	     settextstyle(10, 5, 3);

	    setcolor(850);
	    outtextxy(40,220,"Keep It Simple Stupid!!!");

	  }

	 if((final_time-difftime(time_fin,time_int)>5)&&(final_time-difftime(time_fin,time_int)<=15))
	  {
	    settextjustify(CENTER_TEXT, CENTER_TEXT);
	    settextstyle(10, 5, 3);

	    setcolor(750);
	    outtextxy(40,220,"It's almost OVER");

	  }

	 if(final_time-difftime(time_fin,time_int)<=5)
	  {
	     if(flag_1%2==0)
	      setcolor(RED);
	     else
	      setcolor(WHITE);
	     settextjustify(CENTER_TEXT, CENTER_TEXT);
	     settextstyle(10, 5, 3);
	     outtextxy(40,220,"Your Last Supper");
	     flag_1++;
	  }

	 setcolor(310);
	 rectangle(473,128,637,340);
	 rectangle(475,130,635,338);


	 sprintf(score_char,"%d",score);
	 sprintf(menu_opt_char,"%d",menu_opt);
	 sprintf(midx_char,"%d",midx);
	 sprintf(midy_char,"%d",midy);
	 sprintf(difftime_char,"%f",final_time-difftime(time_fin,time_int));

	 settextjustify(CENTER_TEXT, CENTER_TEXT);
	 settextstyle(0, HORIZ_DIR, 1);

	 rectangle(473,50,637,125);
	 if(life==3)
	  {
	   setcolor(YELLOW);
	   setfillstyle(SOLID_FILL,RED);

	   circle(510,93,6);
	   circle(552,93,6);
	   circle(594,93,6);
	  }

	 if(life==2)
	 {
	   setcolor(YELLOW);
	   setfillstyle(SOLID_FILL,RED);

	   circle(510,93,6);
	   circle(552,93,6);
	 }

	 if(life==1)
	 {
	   setcolor(YELLOW);
	   setfillstyle(SOLID_FILL,RED);

	   circle(510,93,6);
	 }

	 setcolor(RED);
	 outtextxy(530,190,"Score:");
	 setcolor(WHITE);
	 outtextxy(570,190,score_char);

	 setcolor(RED);
	 outtextxy(525,230,"Pacman:");
	 setcolor(WHITE);
	 outtextxy(570,230,midx_char);
	 outtextxy(685,230,",");
	 outtextxy(599,230,midy_char);

	 time_fin = time(NULL);

	 setcolor(RED);
	 outtextxy(520,270,"Time:");
	 setcolor(WHITE);
	 settextjustify(CENTER_TEXT, CENTER_TEXT);
	 settextstyle(0, HORIZ_DIR, 1);
	 outtextxy(580,270,difftime_char);

	   if(life==0)
	     {
	       game_over(score,final_time);
	     }

	 if((eMidx_1+radius<midx)&&(eMidx_1+radius>radius+midx)&&(eMidy_1+radius>midy)&&(eMidy_1-radius<midy))
	  {
	    life-=1;
	     midx = 305;
	     midy = 215;
	  }
	 else
	 if((eMidx_1-radius>midx)&&(eMidx_1-radius<midx+radius)&&(eMidy_1+radius>midy)&&(eMidy_1-radius<midy))
	 {
	     life-=1;
	     midx = 305;
	     midy = 215;
	 }
	 else
	 if((eMidy_1-radius>midy)&&(eMidy_1-radius<midy+radius)&&(eMidx_1+radius>midx)&&(eMidx_1-radius<midx))
	  {
	     life-=1;
	     midx = 305;
	     midy = 215;
	  }
	  else
	 if((eMidy_1+radius<midy)&&(eMidy_1+radius>midy-radius)&&(eMidx_1+radius>midx)&&(eMidx_1-radius<midx))
	 {
	     life-=1;
	     midx = 305;
	     midy = 215;
	 }

	 if((eMidx_2+radius<midx)&&(eMidx_2+radius>radius+midx)&&(eMidy_2+radius>midy)&&(eMidy_2-radius<midy))
	  {
	    life-=1;
	     midx = 305;
	     midy = 215;
	  }
	 else
	 if((eMidx_2-radius>midx)&&(eMidx_2-radius<midx+radius)&&(eMidy_2+radius>midy)&&(eMidy_2-radius<midy))
	 {
	     life-=1;
	     midx = 305;
	     midy = 215;
	 }
	 else
	 if((eMidy_2-radius>midy)&&(eMidy_2-radius<midy+radius)&&(eMidx_2+radius>midx)&&(eMidx_2-radius<midx))
	  {
	     life-=1;
	     midx = 305;
	     midy = 215;
	  }
	  else
	 if((eMidy_2+radius<midy)&&(eMidy_2+radius>midy-radius)&&(eMidx_2+radius>midx)&&(eMidx_2-radius<midx))
	 {
	     life-=1;
	     midx = 305;
	     midy = 215;
	 }

	 if((eMidx_3+radius<midx)&&(eMidx_3+radius>radius+midx)&&(eMidy_3+radius>midy)&&(eMidy_3-radius<midy))
	  {
	    life-=1;
	     midx = 305;
	     midy = 215;
	  }
	 else
	 if((eMidx_3-radius>midx)&&(eMidx_3-radius<midx+radius)&&(eMidy_3+radius>midy)&&(eMidy_3-radius<midy))
	 {
	     life-=1;
	     midx = 305;
	     midy = 215;
	 }
	 else
	 if((eMidy_3-radius>midy)&&(eMidy_3-radius<midy+radius)&&(eMidx_3+radius>midx)&&(eMidx_3-radius<midx))
	  {
	     life-=1;
	     midx = 305;
	     midy = 215;
	  }
	  else
	 if((eMidy_3+radius<midy)&&(eMidy_3+radius>midy-radius)&&(eMidx_3+radius>midx)&&(eMidx_3-radius<midx))
	 {
	     life-=1;
	     midx = 305;
	     midy = 215;
	 }

	 if((eMidx_4+radius<midx)&&(eMidx_4+radius>radius+midx)&&(eMidy_4+radius>midy)&&(eMidy_4-radius<midy))
	  {
	    life-=1;
	     midx = 305;
	     midy = 215;
	  }
	 else
	 if((eMidx_4-radius>midx)&&(eMidx_4-radius<midx+radius)&&(eMidy_4+radius>midy)&&(eMidy_4-radius<midy))
	 {
	     life-=1;
	     midx = 305;
	     midy = 215;
	 }
	 else
	 if((eMidy_4-radius>midy)&&(eMidy_4-radius<midy+radius)&&(eMidx_4+radius>midx)&&(eMidx_4-radius<midx))
	  {
	     life-=1;
	     midx = 305;
	     midy = 215;
	  }
	  else
	 if((eMidy_4+radius<midy)&&(eMidy_4+radius>midy-radius)&&(eMidx_4+radius>midx)&&(eMidx_4-radius<midx))
	 {
	     life-=1;
	     midx = 305;
	     midy = 215;
	 }

	 setcolor(YELLOW);
	 setfillstyle(WIDE_DOT_FILL, YELLOW);
	 setfillstyle(SOLID_FILL, getmaxcolor());
	 circle(midx, midy, radius);
	 setfillstyle(SOLID_FILL, YELLOW);
	 pieslice(midx,midy,stangle,endangle,radius);

	 setfillstyle(WIDE_DOT_FILL,GREEN);
	 setcolor(GREEN);
	 circle(eMidx_1, eMidy_1, radius);
	 setfillstyle(SOLID_FILL, GREEN);
	 pieslice(eMidx_1,eMidy_1,eStangle_1,eEndangle_1,radius);

	setfillstyle(WIDE_DOT_FILL,GREEN);
	 setcolor(GREEN);
	 circle(eMidx_2, eMidy_2, radius);
	 setfillstyle(SOLID_FILL, GREEN);
	 pieslice(eMidx_2,eMidy_2,eStangle_2,eEndangle_2,radius);

	 setfillstyle(WIDE_DOT_FILL,GREEN);
	 setcolor(GREEN);
	 circle(eMidx_3, eMidy_3, radius);
	 setfillstyle(SOLID_FILL, GREEN);
	 pieslice(eMidx_3,eMidy_3,eStangle_3,eEndangle_3,radius);

	 setfillstyle(WIDE_DOT_FILL,GREEN);
	 setcolor(GREEN);
	 circle(eMidx_4, eMidy_4, radius);
	 setfillstyle(SOLID_FILL, GREEN);
	 pieslice(eMidx_4,eMidy_4,eStangle_4,eEndangle_4,radius);
  }

    score=score_check(midx,midy,score);

    flag=0;
    goto graph_score;
   }

anime_move:   if(move=='d')

    {


    if(obstruct(midx,midy,move)==1)
      goto start;

     stangle=30,endangle=330;
     midx+=5;
     setcolor(YELLOW);
    pieslice(midx-5,midy,stangle,endangle,radius);

   }

   if(move=='a')

    {

     if(obstruct(midx,midy,move)==1)
      goto start;

     stangle=150,endangle=220;
     midx-=5;
     setcolor(YELLOW);
     pieslice(midx+5,midy,stangle,endangle,radius);
   }
    if(move=='s')

    {

    if(obstruct(midx,midy,move)==1)
      goto start;

     stangle=240,endangle=300;
     midy+=5;

     setcolor(YELLOW);
     pieslice(midx,midy-5,stangle,endangle,radius);
   }
    if(move=='w')
    {


     if(obstruct(midx,midy,move)==1)
      goto start;

     stangle=120,endangle=60;
     midy-=5;

      setcolor(YELLOW);
      pieslice(midx,midy+5,stangle,endangle,radius);
   }

   if(move=='e')
    exit(0);

graph_score:  score=score_check(midx,midy,score);

  if(menu_opt==1)
  {
    map();

    char score_char[50];
    char menu_opt_char[50];
    char midx_char[50],midy_char[50];
    char difftime_char[50];

	 if(final_time-difftime(time_fin,time_int)>15)
	  {
	     settextjustify(CENTER_TEXT, CENTER_TEXT);
	     settextstyle(10, 5, 3);

	    setcolor(850);
	    outtextxy(40,220,"Keep It Simple Stupid!!!");

	  }

	 if((final_time-difftime(time_fin,time_int)>5)&&(final_time-difftime(time_fin,time_int)<=15))
	  {
	    settextjustify(CENTER_TEXT, CENTER_TEXT);
	    settextstyle(10, 5, 3);

	    setcolor(750);
	    outtextxy(40,220,"It's almost OVER");

	  }

	 if(final_time-difftime(time_fin,time_int)<=5)
	  {
	     if(flag_1==0)
	      setcolor(RED);
	     else
	      setcolor(WHITE);
	     settextjustify(CENTER_TEXT, CENTER_TEXT);
	     settextstyle(10, 5, 3);
	     outtextxy(40,220,"Your Last Supper");

	  }

    setcolor(310);
    rectangle(473,128,637,340);
    rectangle(475,130,635,338);

    sprintf(score_char,"%d",score);
    sprintf(menu_opt_char,"%d",menu_opt);
    sprintf(midx_char,"%d",midx);
    sprintf(midy_char,"%d",midy);
    sprintf(difftime_char,"%f",final_time-difftime(time_fin,time_int));

    settextjustify(CENTER_TEXT, CENTER_TEXT);
    settextstyle(0, HORIZ_DIR, 1);

	 rectangle(473,50,637,125);
	 if(life==3)
	  {
	   setcolor(YELLOW);
	   setfillstyle(SOLID_FILL,RED);

	   circle(510,93,6);
	   circle(552,93,6);
	   circle(594,93,6);
	  }

	 if(life==2)
	 {
	   setcolor(YELLOW);
	   setfillstyle(SOLID_FILL,RED);

	   circle(510,93,6);
	   circle(552,93,6);
	 }

	 if(life==1)
	 {
	   setcolor(YELLOW);
	   setfillstyle(SOLID_FILL,RED);

	   circle(510,93,6);
	 }

    setcolor(RED);
    outtextxy(530,190,"Score:");
    setcolor(WHITE);
    outtextxy(570,190,score_char);

    setcolor(RED);
    outtextxy(525,230,"Pacman:");
    setcolor(WHITE);
    outtextxy(570,230,midx_char);
    outtextxy(685,230,",");
    outtextxy(599,230,midy_char);

    time_fin = time(NULL);

    setcolor(RED);
    outtextxy(520,270,"Time:");
    setcolor(WHITE);
    settextjustify(CENTER_TEXT, CENTER_TEXT);
    settextstyle(0, HORIZ_DIR, 1);
    outtextxy(580,270,difftime_char);
	if(life==0)
    {
       game_over(score,final_time);
    }

	 setcolor(YELLOW);
	 setfillstyle(WIDE_DOT_FILL, YELLOW);
	 setfillstyle(SOLID_FILL, getmaxcolor());
	 circle(midx, midy, radius);
	 setfillstyle(SOLID_FILL, YELLOW);
	 pieslice(midx,midy,stangle,endangle,radius);


	 setfillstyle(WIDE_DOT_FILL,GREEN);
	 setcolor(GREEN);
	 circle(eMidx_1, eMidy_1, radius);
	 setfillstyle(SOLID_FILL, GREEN);
	 pieslice(eMidx_1,eMidy_1,eStangle_1,eEndangle_1,radius);

	 setfillstyle(WIDE_DOT_FILL,GREEN);
	 setcolor(GREEN);
	 circle(eMidx_2, eMidy_2, radius);
	 setfillstyle(SOLID_FILL, GREEN);
	 pieslice(eMidx_2,eMidy_2,eStangle_2,eEndangle_2,radius);

	 setfillstyle(WIDE_DOT_FILL,GREEN);
	 setcolor(GREEN);
	 circle(eMidx_3, eMidy_3, radius);
	 setfillstyle(SOLID_FILL, GREEN);
	 pieslice(eMidx_3,eMidy_3,eStangle_3,eEndangle_3,radius);

	 setfillstyle(WIDE_DOT_FILL,GREEN);
	 setcolor(GREEN);
	 circle(eMidx_4, eMidy_4, radius);
	 setfillstyle(SOLID_FILL, GREEN);
	 pieslice(eMidx_4,eMidy_4,eStangle_4,eEndangle_4,radius);
  }
  if(flag==0)
   goto start;

  flag=0;
}
   getch();
   closegraph();

}

