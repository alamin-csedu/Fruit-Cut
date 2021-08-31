#include<graphics.h>
#include"alll.h"
#include<bits/stdc++.h>
#include<time.h>
using namespace std;

int mouse_click=0;
int bomb_click=0;
int point=0;
struct Player{
    char name[100];
    int score;

};
struct Player top_player[10];

void gamemode()
{
    readimagefile("images/gamemode.jpg",0,0,1375,700);
    int get_mouse_click_gamemode=0,g_mouse_x,g_mouse_y;
    int easy,hard;
    easy=0;
    hard=0;
    point=0;
    srand(time(NULL));
    while(1)
    {
        getmouseclick(WM_LBUTTONDOWN,g_mouse_x,g_mouse_y);
        if(g_mouse_x>660&&g_mouse_x<875&&g_mouse_y>100&&g_mouse_y<190)
        {
            PlaySoundA("audio/click.wav",0,SND_ASYNC);
            readimagefile("images/level1_1.jpg",0,0,1375,700);
            setcolor(0);
            setfillstyle(SOLID_FILL,0);
            circle(350,550,10);
            floodfill(350,550,0);
            delay(500);
            circle(400,550,10);
            floodfill(400,550,0);
            delay(500);
            circle(450,550,10);
            floodfill(450,550,0);
            delay(500);
            easy=1;
            break;
        }
        if(g_mouse_x>750&&g_mouse_x<971&&g_mouse_y>500&&g_mouse_y<580)
        {
            PlaySoundA("audio/click.wav",0,SND_ASYNC);
            readimagefile("images/level1_1.jpg",0,0,1375,700);
            setcolor(0);
            setfillstyle(SOLID_FILL,0);
            circle(350,550,10);
            floodfill(350,550,0);
            delay(500);
            circle(400,550,10);
            floodfill(400,550,0);
            delay(500);
            circle(450,550,10);
            floodfill(450,550,0);
            delay(500);
            hard=1;
            break;
        }
        if(g_mouse_x>1120&&g_mouse_x<1325&&g_mouse_y>600&&g_mouse_y<650)
        {
            PlaySoundA("audio/click.wav",0,SND_ASYNC);
            main();
        }

    }
    if(easy==1)
    {
        readimagefile("images/hole.jpg",0,0,1375,700);
        int hole1[]= {3,5,2,7,9,4,8,1,6,3,6,1,5,9,7},fruite1[]= {1,2,4,3,2,1,5,1,2,5},hole2[]= {1,2,8,9,3,4,6,7,5,1,9,5,2,3,6},fruite2[]= {3,4,1,2,5,1,1,2,5,2},hole3[]= {9,8,7,6,5,4,3,2,1,9,7,5,3,1},fruite3[]= {4,1,1,2,2,3,5,5,1,3},hole4[]= {5,6,4,7,3,8,2,9,1,5,2,6,9,3},fruite4[]= {1,2,3,4,5,1,1,2,5,3};
        int time=60,select_hole,select_fruite, choice[]= {1,2,3,4,1,3,2,4}, chose;
        char s[100];
        int mouse_x,mouse_y;
        while(time--)
        {
            chose=choice[rand()%8];
            if(chose==1)
            {
                select_hole=hole1[rand()%12];
                select_fruite=fruite1[rand()%10];
            }
            if(chose==2)
            {
                select_hole=hole2[rand()%12];
                select_fruite=fruite2[rand()%10];
            }
            if(chose==3)
            {
                select_hole=hole3[rand()%12];
                select_fruite=fruite3[rand()%10];
            }
            if(chose==4)
            {
                select_hole=hole4[rand()%12];
                select_fruite=fruite4[rand()%10];
            }
            select_hole_fruite(select_hole,select_fruite,easy);
            read_black(select_hole);
            sprintf(s,"%d",time);
            setcolor(5);
            settextstyle(1,0,2);
            outtextxy(1160,260,s);
            if(bomb_click==3)
            {
                readimagefile("images/gameover.jpg",0,0,1375,700);
                delay(1000);
                entername(point);
                easy=0;
                break;
            }

        }
        if(point<150&&bomb_click!=3)
        {
            readimagefile("images/gameover.jpg",0,0,1375,700);
            delay(1000);

            entername(point);
            easy=0;
        }
        if(point>150&&bomb_click!=3)
        {
            readimagefile("images/level_completed.jpg",0,0,1375,700);
            delay(1000);
            easy++;
        }
        bomb_click=0;
    }
    if(easy==2)
    {

        readimagefile("images/level2_1.jpg",0,0,1375,700);
        setcolor(0);
        setfillstyle(SOLID_FILL,0);
        circle(350,550,10);
        floodfill(350,550,0);
        delay(500);
        circle(400,550,10);
        floodfill(400,550,0);
        delay(500);
        circle(450,550,10);
        floodfill(450,550,0);
        delay(500);


        readimagefile("images/hole.jpg",0,0,1375,700);
        int hole1[]= {3,5,2,7,9,4,8,1,6,3,6,1,5,9,7},fruite1[]= {1,2,4,3,2,1,5,1,2,5},hole2[]= {1,2,8,9,3,4,6,7,5,1,9,5,2,3,6},fruite2[]= {3,4,1,2,5,1,1,2,5,2},hole3[]= {9,8,7,6,5,4,3,2,1,9,7,5,3,1},fruite3[]= {4,1,1,2,2,3,5,5,1,3},hole4[]= {5,6,4,7,3,8,2,9,1,5,2,6,9,3},fruite4[]= {1,2,3,4,5,1,1,2,5,3};
        int time=60,select_hole,select_fruite, choice[]= {4,3,2,1,4,2,3,1}, chose;
        char s[100];
        int mouse_x,mouse_y;
        //int bomb_click_easy=0;
        while(time--)
        {
            chose=choice[rand()%8];
            if(chose==1)
            {
                select_hole=hole1[rand()%12];
                select_fruite=fruite1[rand()%10];
            }
            if(chose==2)
            {
                select_hole=hole2[rand()%12];
                select_fruite=fruite2[rand()%10];
            }
            if(chose==3)
            {
                select_hole=hole3[rand()%12];
                select_fruite=fruite3[rand()%10];
            }
            if(chose==4)
            {
                select_hole=hole4[rand()%12];
                select_fruite=fruite4[rand()%10];
            }
            select_hole_fruite(select_hole,select_fruite,easy);
            read_black(select_hole);
            sprintf(s,"%d",time);
            setcolor(5);
            settextstyle(1,0,2);
            outtextxy(1160,260,s);
            if(bomb_click==3)
            {
                readimagefile("images/gameover.jpg",0,0,1375,700);
                delay(1000);
                easy=0;
                entername(point);
                break;
            }

        }
        if(point<300&&bomb_click!=3)
        {
            readimagefile("images/gameover.jpg",0,0,1375,700);
            delay(1000);
            entername(point);
            easy=0;
        }
        if(point>300&&bomb_click!=3)
        {
            readimagefile("images/level_completed.jpg",0,0,1375,700);
            easy++;
            delay(1000);
        }
        bomb_click=0;
    }
    if(easy==3)
    {

        readimagefile("images/level3_1.jpg",0,0,1375,700);
        setcolor(0);
        setfillstyle(SOLID_FILL,0);
        circle(350,550,10);
        floodfill(350,550,0);
        delay(500);
        circle(400,550,10);
        floodfill(400,550,0);
        delay(500);
        circle(450,550,10);
        floodfill(450,550,0);
        delay(500);


        readimagefile("images/hole.jpg",0,0,1375,700);
        int hole1[]= {3,5,2,7,9,4,8,1,6,3,6,1,5,9,7},fruite1[]= {1,2,4,3,2,1,5,1,2,5},hole2[]= {1,2,8,9,3,4,6,7,5,1,9,5,2,3,6},fruite2[]= {3,4,1,2,5,1,1,2,5,2},hole3[]= {9,8,7,6,5,4,3,2,1,9,7,5,3,1},fruite3[]= {4,1,1,2,2,3,5,5,1,3},hole4[]= {5,6,4,7,3,8,2,9,1,5,2,6,9,3},fruite4[]= {1,2,3,4,5,1,1,2,5,3};
        int time=60,select_hole,select_fruite, choice[]= {2,3,1,2,4,1,3,4}, chose;
        char s[100];
        int mouse_x,mouse_y;
        //int bomb_click_easy=0;
        while(time--)
        {
            chose=choice[rand()%8];
            if(chose==1)
            {
                select_hole=hole1[rand()%12];
                select_fruite=fruite1[rand()%10];
            }
            if(chose==2)
            {
                select_hole=hole2[rand()%12];
                select_fruite=fruite2[rand()%10];
            }
            if(chose==3)
            {
                select_hole=hole3[rand()%12];
                select_fruite=fruite3[rand()%10];
            }
            if(chose==4)
            {
                select_hole=hole4[rand()%12];
                select_fruite=fruite4[rand()%10];
            }
            select_hole_fruite(select_hole,select_fruite,easy);
            read_black(select_hole);
            sprintf(s,"%d",time);
            setcolor(5);
            settextstyle(1,0,2);
            outtextxy(1160,260,s);
            if(bomb_click==3)
            {
                readimagefile("images/gameover.jpg",0,0,1375,700);
                delay(1000);
                easy=0;
                entername(point);
                break;
            }

        }
        if(point<450&&bomb_click!=3)
        {
            readimagefile("images/gameover.jpg",0,0,1375,700);
            delay(1000);
            entername(point);
            easy=0;
        }
        if(point>450&&bomb_click!=3)
        {
            readimagefile("images/level_completed.jpg",0,0,1375,700);
            easy++;
            delay(1000);
        }
        bomb_click=0;
    }
    if(easy==4)
    {

        readimagefile("images/level4_1.jpg",0,0,1375,700);
        setcolor(0);
        setfillstyle(SOLID_FILL,0);
        circle(350,550,10);
        floodfill(350,550,0);
        delay(500);
        circle(400,550,10);
        floodfill(400,550,0);
        delay(500);
        circle(450,550,10);
        floodfill(450,550,0);
        delay(500);


        readimagefile("images/hole.jpg",0,0,1375,700);
        int hole1[]= {3,5,2,7,9,4,8,1,6,3,6,1,5,9,7},fruite1[]= {1,2,4,3,2,1,5,1,2,5},hole2[]= {1,2,8,9,3,4,6,7,5,1,9,5,2,3,6},fruite2[]= {3,4,1,2,5,1,1,2,5,2},hole3[]= {9,8,7,6,5,4,3,2,1,9,7,5,3,1},fruite3[]= {4,1,1,2,2,3,5,5,1,3},hole4[]= {5,6,4,7,3,8,2,9,1,5,2,6,9,3},fruite4[]= {1,2,3,4,5,1,1,2,5,3};
        int time=60,select_hole,select_fruite, choice[]= {4,1,3,2,4,1,3,2}, chose;
        char s[100];
        int mouse_x,mouse_y;
        //int bomb_click_easy=0;
        while(time--)
        {
            chose=choice[rand()%8];
            if(chose==1)
            {
                select_hole=hole1[rand()%12];
                select_fruite=fruite1[rand()%10];
            }
            if(chose==2)
            {
                select_hole=hole2[rand()%12];
                select_fruite=fruite2[rand()%10];
            }
            if(chose==3)
            {
                select_hole=hole3[rand()%12];
                select_fruite=fruite3[rand()%10];
            }
            if(chose==4)
            {
                select_hole=hole4[rand()%12];
                select_fruite=fruite4[rand()%10];
            }
            select_hole_fruite(select_hole,select_fruite,easy);
            read_black(select_hole);
            sprintf(s,"%d",time);
            setcolor(5);
            settextstyle(1,0,2);
            outtextxy(1160,260,s);
            if(bomb_click==3)
            {
                readimagefile("images/gameover.jpg",0,0,1375,700);
                delay(1000);
                easy=0;
                entername(point);
                break;
            }

        }
        if(point<600&&bomb_click!=3)
        {
            readimagefile("images/gameover.jpg",0,0,1375,700);
            delay(1000);
            easy=0;
            entername(point);
        }
        if(point>600&&bomb_click!=3)
        {
            readimagefile("images/level_completed.jpg",0,0,1375,700);
            easy++;
            delay(1000);
        }
        bomb_click=0;
    }
    if(easy==5)
    {

        readimagefile("images/level5_1.jpg",0,0,1375,700);
        setcolor(0);
        setfillstyle(SOLID_FILL,0);
        circle(350,550,10);
        floodfill(350,550,0);
        delay(500);
        circle(400,550,10);
        floodfill(400,550,0);
        delay(500);
        circle(450,550,10);
        floodfill(450,550,0);
        delay(500);


        readimagefile("images/hole.jpg",0,0,1375,700);
        int hole1[]= {3,5,2,7,9,4,8,1,6,3,6,1,5,9,7},fruite1[]= {1,2,4,3,5,1,5,1,2,5},hole2[]= {1,2,8,9,3,4,6,7,5,1,9,5,2,3,6},fruite2[]= {3,4,1,2,5,1,1,5,5,2},hole3[]= {9,8,7,6,5,4,3,2,1,9,7,5,3,1},fruite3[]= {4,1,1,2,2,3,5,5,1,3},hole4[]= {5,6,4,7,3,8,2,9,1,5,2,6,9,3},fruite4[]= {1,2,3,4,5,5,1,2,5,3};
        int time=60,select_hole,select_fruite,choice[]= {1,2,3,4,4,3,2,1}, chose;
        char s[100];
        int mouse_x,mouse_y;
        //int bomb_click_easy=0;
        while(time--)
        {
            chose=choice[rand()%8];
            if(chose==1)
            {
                select_hole=hole1[rand()%12];
                select_fruite=fruite1[rand()%10];
            }
            if(chose==2)
            {
                select_hole=hole2[rand()%12];
                select_fruite=fruite2[rand()%10];
            }
            if(chose==3)
            {
                select_hole=hole3[rand()%12];
                select_fruite=fruite3[rand()%10];
            }
            if(chose==4)
            {
                select_hole=hole4[rand()%12];
                select_fruite=fruite4[rand()%10];
            }
            select_hole_fruite(select_hole,select_fruite,easy);
            read_black(select_hole);
            sprintf(s,"%d",time);
            setcolor(5);
            settextstyle(1,0,2);
            outtextxy(1160,260,s);
            if(bomb_click==3)
            {
                readimagefile("images/gameover.jpg",0,0,1375,700);
                delay(1000);
                easy=0;
                entername(point);
                break;
            }

        }
        if(point<700&&bomb_click!=3)
        {
            readimagefile("images/gameover.jpg",0,0,1375,700);
            delay(1000);
            easy=0;
            entername(point);
        }
        if(point>700&&bomb_click!=3)
        {
            readimagefile("images/level_completed.jpg",0,0,1375,700);
            easy++;
            delay(1000);
            //readimagefile("images/enter_name.jpg",0,0,1375,700);
            entername(point);
        }
        bomb_click=0;

    }

    if(hard==1)
    {
        readimagefile("images/h_hole.jpg",0,0,1375,700);
        int hole1[]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16},fruite1[]= {1,2,4,3,2,1,5,1,2,5},hole2[]= {1,3,5,7,9,11,13,15,2,4,6,8,10,12,14,16},fruite2[]= {3,4,1,2,5,1,1,2,5,2},hole3[]= {16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1},fruite3[]= {4,1,1,2,2,3,5,5,1,3},hole4[]= {8,1,9,2,10,3,11,4,12,5,13,6,14,7,15,16},fruite4[]= {1,2,3,4,5,1,1,2,5,3};
        int time=60,select_hole,select_fruite, choice[]= {1,2,3,4,1,3,2,4}, chose;
        char s[100];
        int mouse_x,mouse_y;
        while(time--)
        {
            chose=choice[rand()%8];
            if(chose==1)
            {
                select_hole=hole1[rand()%16];
                select_fruite=fruite1[rand()%10];
            }
            if(chose==2)
            {
                select_hole=hole2[rand()%16];
                select_fruite=fruite2[rand()%10];
            }
            if(chose==3)
            {
                select_hole=hole3[rand()%16];
                select_fruite=fruite3[rand()%10];
            }
            if(chose==4)
            {
                select_hole=hole4[rand()%16];
                select_fruite=fruite4[rand()%10];
            }
            select_hole_fruite_hard(select_hole,select_fruite,hard);
            read_black_hard(select_hole);
            sprintf(s,"%d",time);
            setcolor(5);
            settextstyle(1,0,2);
            outtextxy(1165,260,s);
            if(bomb_click==3)
            {
                readimagefile("images/gameover.jpg",0,0,1375,700);
                delay(1000);
                hard=0;
                entername(point);
                break;
            }

        }
        if(point<150&&bomb_click!=3)
        {
            readimagefile("images/gameover.jpg",0,0,1375,700);
            delay(1000);
            entername(point);
            hard=0;
        }
        if(point>150&&bomb_click!=3)
        {
            readimagefile("images/level_completed.jpg",0,0,1375,700);
            delay(1000);
            hard++;
        }
        bomb_click=0;
    }
    if(hard==2)
    {

        readimagefile("images/level2_1.jpg",0,0,1375,700);
        setcolor(0);
        setfillstyle(SOLID_FILL,0);
        circle(350,550,10);
        floodfill(350,550,0);
        delay(500);
        circle(400,550,10);
        floodfill(400,550,0);
        delay(500);
        circle(450,550,10);
        floodfill(450,550,0);
        delay(500);
        readimagefile("images/h_hole.jpg",0,0,1375,700);
        int hole1[]= {3,5,2,7,9,4,8,1,6,3,6,1,5,9,7},fruite1[]= {1,2,4,3,2,1,5,1,2,5},hole2[]= {1,2,8,9,3,4,6,7,5,1,9,5,2,3,6},fruite2[]= {3,4,1,2,5,1,1,2,5,2},hole3[]= {9,8,7,6,5,4,3,2,1,9,7,5,3,1},fruite3[]= {4,1,1,2,2,3,5,5,1,3},hole4[]= {5,6,4,7,3,8,2,9,1,5,2,6,9,3},fruite4[]= {1,2,3,4,5,1,1,2,5,3};
        int time=60,select_hole,select_fruite, choice[]= {4,3,2,1,4,2,3,1}, chose;
        char s[100];
        int mouse_x,mouse_y;
        //int bomb_click_hard=0;
        while(time--)
        {
            chose=choice[rand()%8];
            if(chose==1)
            {
                select_hole=hole1[rand()%16];
                select_fruite=fruite1[rand()%10];
            }
            if(chose==2)
            {
                select_hole=hole2[rand()%16];
                select_fruite=fruite2[rand()%10];
            }
            if(chose==3)
            {
                select_hole=hole3[rand()%16];
                select_fruite=fruite3[rand()%10];
            }
            if(chose==4)
            {
                select_hole=hole4[rand()%16];
                select_fruite=fruite4[rand()%10];
            }
            select_hole_fruite_hard(select_hole,select_fruite,hard);
            read_black_hard(select_hole);
            sprintf(s,"%d",time);
            setcolor(5);
            settextstyle(1,0,2);
            outtextxy(1165,260,s);
            if(bomb_click==3)
            {
                readimagefile("images/gameover.jpg",0,0,1375,700);
                delay(1000);
                hard=0;
                entername(point);
                break;
            }

        }
        if(point<300&&bomb_click!=3)
        {
            readimagefile("images/gameover.jpg",0,0,1375,700);
            delay(1000);
            hard=0;
            entername(point);
        }
        if(point>300&&bomb_click!=3)
        {
            readimagefile("images/level_completed.jpg",0,0,1375,700);
            hard++;
            delay(1000);
        }
        bomb_click=0;
    }
    if(hard==3)
    {

        readimagefile("images/level3_1.jpg",0,0,1375,700);
        setcolor(0);
        setfillstyle(SOLID_FILL,0);
        circle(350,550,10);
        floodfill(350,550,0);
        delay(500);
        circle(400,550,10);
        floodfill(400,550,0);
        delay(500);
        circle(450,550,10);
        floodfill(450,550,0);
        delay(500);


        readimagefile("images/h_hole.jpg",0,0,1375,700);
        int hole1[]= {3,5,2,7,9,4,8,1,6,3,6,1,5,9,7},fruite1[]= {1,2,4,3,2,1,5,1,2,5},hole2[]= {1,2,8,9,3,4,6,7,5,1,9,5,2,3,6},fruite2[]= {3,4,1,2,5,1,1,2,5,2},hole3[]= {9,8,7,6,5,4,3,2,1,9,7,5,3,1},fruite3[]= {4,1,1,2,2,3,5,5,1,3},hole4[]= {5,6,4,7,3,8,2,9,1,5,2,6,9,3},fruite4[]= {1,2,3,4,5,1,1,2,5,3};
        int time=60,select_hole,select_fruite, choice[]= {2,3,1,2,4,1,3,4}, chose;
        char s[100];
        int mouse_x,mouse_y;
        //int bomb_click_hard=0;
        while(time--)
        {
            chose=choice[rand()%8];
            if(chose==1)
            {
                select_hole=hole1[rand()%16];
                select_fruite=fruite1[rand()%10];
            }
            if(chose==2)
            {
                select_hole=hole2[rand()%16];
                select_fruite=fruite2[rand()%10];
            }
            if(chose==3)
            {
                select_hole=hole3[rand()%16];
                select_fruite=fruite3[rand()%10];
            }
            if(chose==4)
            {
                select_hole=hole4[rand()%16];
                select_fruite=fruite4[rand()%10];
            }
            select_hole_fruite_hard(select_hole,select_fruite,hard);
            read_black_hard(select_hole);
            sprintf(s,"%d",time);
            setcolor(5);
            settextstyle(1,0,2);
            outtextxy(1165,260,s);
            if(bomb_click==3)
            {
                readimagefile("images/gameover.jpg",0,0,1375,700);
                delay(1000);
                hard=0;
                entername(point);
                break;
            }

        }
        if(point<450&&bomb_click!=3)
        {
            readimagefile("images/gameover.jpg",0,0,1375,700);
            delay(1000);
            entername(point);
            hard=0;
        }
        if(point>450&&bomb_click!=3)
        {
            readimagefile("images/level_completed.jpg",0,0,1375,700);
            hard++;
            delay(1000);
        }
        bomb_click=0;
    }
    if(hard==4)
    {

        readimagefile("images/level4_1.jpg",0,0,1375,700);
        setcolor(0);
        setfillstyle(SOLID_FILL,0);
        circle(350,550,10);
        floodfill(350,550,0);
        delay(500);
        circle(400,550,10);
        floodfill(400,550,0);
        delay(500);
        circle(450,550,10);
        floodfill(450,550,0);
        delay(500);


        readimagefile("images/h_hole.jpg",0,0,1375,700);
        int hole1[]= {3,5,2,7,9,4,8,1,6,3,6,1,5,9,7},fruite1[]= {1,2,4,3,2,1,5,1,2,5},hole2[]= {1,2,8,9,3,4,6,7,5,1,9,5,2,3,6},fruite2[]= {3,4,1,2,5,1,1,2,5,2},hole3[]= {9,8,7,6,5,4,3,2,1,9,7,5,3,1},fruite3[]= {4,1,1,2,2,3,5,5,1,3},hole4[]= {5,6,4,7,3,8,2,9,1,5,2,6,9,3},fruite4[]= {1,2,3,4,5,1,1,2,5,3};
        int time=60,select_hole,select_fruite, choice[]= {4,1,3,2,4,1,3,2}, chose;
        char s[100];
        int mouse_x,mouse_y;
        //int bomb_click_hard=0;
        while(time--)
        {
            chose=choice[rand()%8];
            if(chose==1)
            {
                select_hole=hole1[rand()%12];
                select_fruite=fruite1[rand()%10];
            }
            if(chose==2)
            {
                select_hole=hole2[rand()%12];
                select_fruite=fruite2[rand()%10];
            }
            if(chose==3)
            {
                select_hole=hole3[rand()%12];
                select_fruite=fruite3[rand()%10];
            }
            if(chose==4)
            {
                select_hole=hole4[rand()%12];
                select_fruite=fruite4[rand()%10];
            }
            select_hole_fruite_hard(select_hole,select_fruite,hard);
            read_black_hard(select_hole);
            sprintf(s,"%d",time);
            setcolor(5);
            settextstyle(1,0,2);
            outtextxy(1165,260,s);
            if(bomb_click==3)
            {
                readimagefile("images/gameover.jpg",0,0,1375,700);
                delay(1000);
                hard=0;
                entername(point);
                break;
            }

        }
        if(point<600&&bomb_click!=3)
        {
            readimagefile("images/gameover.jpg",0,0,1375,700);
            delay(1000);
            hard=0;
            entername(point);
        }
        if(point>600&&bomb_click!=3)
        {
            readimagefile("images/level_completed.jpg",0,0,1375,700);
            hard++;
            delay(1000);
        }
        bomb_click=0;
    }
    if(hard==5)
    {

        readimagefile("images/level5_1.jpg",0,0,1375,700);
        setcolor(0);
        setfillstyle(SOLID_FILL,0);
        circle(350,550,10);
        floodfill(350,550,0);
        delay(500);
        circle(400,550,10);
        floodfill(400,550,0);
        delay(500);
        circle(450,550,10);
        floodfill(450,550,0);
        delay(500);


        readimagefile("images/h_hole.jpg",0,0,1375,700);
        int hole1[]= {3,5,2,7,9,4,8,1,6,3,6,1,5,9,7},fruite1[]= {1,2,4,3,5,1,5,1,2,5},hole2[]= {1,2,8,9,3,4,6,7,5,1,9,5,2,3,6},fruite2[]= {3,4,1,2,5,1,1,5,5,2},hole3[]= {9,8,7,6,5,4,3,2,1,9,7,5,3,1},fruite3[]= {4,1,1,2,2,3,5,5,1,3},hole4[]= {5,6,4,7,3,8,2,9,1,5,2,6,9,3},fruite4[]= {1,2,3,4,5,5,1,2,5,3};
        int time=60,select_hole,select_fruite,choice[]= {1,2,3,4,4,3,2,1}, chose;
        char s[100];
        int mouse_x,mouse_y;
        //int bomb_click_hard=0;
        while(time--)
        {
            chose=choice[rand()%8];
            if(chose==1)
            {
                select_hole=hole1[rand()%12];
                select_fruite=fruite1[rand()%10];
            }
            if(chose==2)
            {
                select_hole=hole2[rand()%12];
                select_fruite=fruite2[rand()%10];
            }
            if(chose==3)
            {
                select_hole=hole3[rand()%12];
                select_fruite=fruite3[rand()%10];
            }
            if(chose==4)
            {
                select_hole=hole4[rand()%12];
                select_fruite=fruite4[rand()%10];
            }
            select_hole_fruite_hard(select_hole,select_fruite,hard);
            read_black_hard(select_hole);
            sprintf(s,"%d",time);
            setcolor(5);
            settextstyle(1,0,2);
            outtextxy(1165,260,s);
            if(bomb_click==3)
            {
                readimagefile("images/gameover.jpg",0,0,1375,700);
                delay(1000);
                hard=0;
                entername(point);
                break;
            }

        }
        if(point<700&&bomb_click!=3)
        {
            readimagefile("images/gameover.jpg",0,0,1375,700);
            delay(1000);
            entername(point);
            hard=0;
        }
        if(point>700&&bomb_click!=3)
        {
            readimagefile("images/level_completed.jpg",0,0,1375,700);
            hard++;
            delay(1000);
           // readimagefile("images/enter_name.jpg",0,0,1375,700);
            entername(point);
        }
        bomb_click=0;

    }
    if(hard==0||hard==6)
    {
        main();
    }
    if(easy==0||easy==6)
    {
        main();
    }


}

void click(int x,int y)
{
    if(x>465&&x<535&&y>315&&y<380)
    {
        mouse_click=1;
    }
    else if(x>590&&x<660&y>315&&y<380)
    {
        mouse_click=2;
    }
    else if(x>720&&x<790&&y>315&&y<380)
    {
        mouse_click=3;
    }
    else if(x>465&&x<535&&y>440&&y<505)
    {
        mouse_click=4;
    }
    else if(x>590&&x<660&y>440&&y<505)
    {
        mouse_click=5;
    }
    else if(x>720&&x<790&&y>440&&y<505)
    {
        mouse_click=6;
    }
    else if(x>465&&x<535&&y>565&&y<630)
    {
        mouse_click=7;
    }
    else if(x>590&&x<660&y>565&&y<630)
    {
        mouse_click=8;
    }
    else if(x>720&&x<790&&y>565&&y<630)
    {
        mouse_click=9;
    }
}

void select_hole_fruite(int n,int m,int k)
{
    int mouse_x,mouse_y;

    getmouseclick(WM_LBUTTONDOWN,mouse_x,mouse_y);
    if(n==1&&m==1)
    {
        readimagefile("images/banana.jpg",465,315,535,380);
    }
    else if(n==1&&m==2)
    {
        readimagefile("images/watermelon.jpg",465,315,535,380);
    }
    else if(n==1&&m==3)
    {
        readimagefile("images/pineapple.jpg",465,315,535,380);
    }
    else if(n==1&&m==4)
    {
        readimagefile("images/apple.jpg",465,315,535,380);
    }
    else if(n==1&&m==5)
    {
        readimagefile("images/bomb.jpg",465,315,535,380);
    }
    else if(n==2&&m==1)
    {
        readimagefile("images/banana.jpg",590,315,660,380);
    }
    else if(n==2&&m==2)
    {
        readimagefile("images/watermelon.jpg",590,315,660,380);
    }
    else if(n==2&&m==3)
    {
        readimagefile("images/pineapple.jpg",590,315,660,380);
    }
    else if(n==2&&m==4)
    {
        readimagefile("images/apple.jpg",590,315,660,380);
    }
    else if(n==2&&m==5)
    {
        readimagefile("images/bomb.jpg",590,315,660,380);
    }
    else if(n==3&&m==1)
    {
        readimagefile("images/banana.jpg",720,315,790,380);
    }
    else if(n==3&&m==2)
    {
        readimagefile("images/watermelon.jpg",720,315,790,380);
    }
    else if(n==3&&m==3)
    {
        readimagefile("images/pineapple.jpg",720,315,790,380);
    }
    else if(n==3&&m==4)
    {
        readimagefile("images/apple.jpg",720,315,790,380);
    }
    else if(n==3&&m==5)
    {
        readimagefile("images/bomb.jpg",720,315,790,380);
    }
    else if(n==4&&m==1)
    {
        readimagefile("images/banana.jpg",465,440,535,505);
    }
    else if(n==4&&m==2)
    {
        readimagefile("images/watermelon.jpg",465,440,535,505);
    }
    else if(n==4&&m==3)
    {
        readimagefile("images/pineapple.jpg",465,440,535,505);
    }
    else if(n==4&&m==4)
    {
        readimagefile("images/apple.jpg",465,440,535,505);
    }
    else if(n==4&&m==5)
    {
        readimagefile("images/bomb.jpg",465,440,535,505);
    }
    else if(n==5&&m==1)
    {
        readimagefile("images/banana.jpg",590,440,660,505);
    }
    else if(n==5&&m==2)
    {
        readimagefile("images/watermelon.jpg",590,440,660,505);
    }
    else if(n==5&&m==3)
    {
        readimagefile("images/pineapple.jpg",590,440,660,505);
    }
    else if(n==5&&m==4)
    {
        readimagefile("images/apple.jpg",590,440,660,505);
    }
    else if(n==5&&m==5)
    {
        readimagefile("images/bomb.jpg",590,440,660,505);
    }
    else if(n==6&&m==1)
    {
        readimagefile("images/banana.jpg",720,440,790,505);
    }
    else if(n==6&&m==2)
    {
        readimagefile("images/watermelon.jpg",720,440,790,505);
    }
    else if(n==6&&m==3)
    {
        readimagefile("images/pineapple.jpg",720,440,790,505);
    }
    else if(n==6&&m==4)
    {
        readimagefile("images/apple.jpg",720,440,790,505);
    }
    else if(n==6&&m==5)
    {
        readimagefile("images/bomb.jpg",720,440,790,505);
    }
    else if(n==7&&m==1)
    {
        readimagefile("images/banana.jpg",465,565,535,630);
    }
    else if(n==7&&m==2)
    {
        readimagefile("images/watermelon.jpg",465,565,535,630);
    }
    else if(n==7&&m==3)
    {
        readimagefile("images/pineapple.jpg",465,565,535,630);
    }
    else if(n==7&&m==4)
    {
        readimagefile("images/apple.jpg",465,565,535,630);
    }
    else if(n==7&&m==5)
    {
        readimagefile("images/bomb.jpg",465,565,535,630);
    }
    else if(n==8&&m==1)
    {
        readimagefile("images/banana.jpg",590,565,660,630);
    }
    else if(n==8&&m==2)
    {
        readimagefile("images/watermelon.jpg",590,565,660,630);
    }
    else if(n==8&&m==3)
    {
        readimagefile("images/pineapple.jpg",590,565,660,630);
    }
    else if(n==8&&m==4)
    {
        readimagefile("images/apple.jpg",590,565,660,630);
    }
    else if(n==8&&m==5)
    {
        readimagefile("images/bomb.jpg",590,565,660,630);
    }
    else if(n==9&&m==1)
    {
        readimagefile("images/banana.jpg",720,565,790,630);
    }
    else if(n==9&&m==2)
    {
        readimagefile("images/watermelon.jpg",720,565,790,630);
    }
    else if(n==9&&m==3)
    {
        readimagefile("images/pineapple.jpg",720,565,790,630);
    }
    else if(n==9&&m==4)
    {
        readimagefile("images/apple.jpg",720,565,790,630);
    }
    else if(n==9&&m==5)
    {
        readimagefile("images/bomb.jpg",720,565,790,630);
    }
    if(k==1)
    {
        delay(700);
    }
    if(k==2)
    {
        delay(650);
    }
    if(k==3)
    {
        delay(600);
    }
    if(k==4)
    {
        delay(550);
    }
    if(k==5)
    {
        delay(500);
    }
    getmouseclick(WM_LBUTTONDOWN,mouse_x,mouse_y);
    click(mouse_x,mouse_y);
    if(n==1&&m==1&&mouse_click==1)
    {
        readimagefile("images/cut_banana.jpg",465,315,535,380);
        point+=2;
    }
    else if(n==1&&m==2&&mouse_click==1)
    {
        readimagefile("images/cut_watermelon.jpg",465,315,535,380);
        point+=10;
    }
    else if(n==1&&m==3&&mouse_click==1)
    {
        readimagefile("images/cut_pineapple.jpg",465,315,535,380);
        point+=8;
    }
    else if(n==1&&m==4&&mouse_click==1)
    {
        readimagefile("images/cut_apple.jpg",465,315,535,380);
        point+=5;
    }
    else if(n==1&&m==5&&mouse_click==1)
    {
        PlaySoundA("audio/ex2.wav",0,SND_ASYNC);
        readimagefile("images/bomb_blust.jpg",465,315,535,380);
        bomb_click++;
        if(bomb_click==1)
        {
            readimagefile("images/life2.jpg",0,0,1375,700);

        }
        if(bomb_click==2)
        {
            readimagefile("images/life1.jpg",0,0,1375,700);
        }
    }
    else if(n==2&&m==1&&mouse_click==2)
    {
        readimagefile("images/cut_banana.jpg",590,315,660,380);
        point+=2;
    }
    else if(n==2&&m==2&&mouse_click==2)
    {
        readimagefile("images/cut_watermelon.jpg",590,315,660,380);
        point+=10;
    }
    else if(n==2&&m==3&&mouse_click==2)
    {
        readimagefile("images/cut_pineapple.jpg",590,315,660,380);
        point+=8;
    }
    else if(n==2&&m==4&&mouse_click==2)
    {
        readimagefile("images/cut_apple.jpg",590,315,660,380);
        point+=5;
    }
    else if(n==2&&m==5&&mouse_click==2)
    {
        PlaySoundA("audio/ex2.wav",0,SND_ASYNC);
        readimagefile("images/bomb_blust.jpg",590,315,660,380);
        bomb_click++;
        if(bomb_click==1)
        {
            readimagefile("images/life2.jpg",0,0,1375,700);

        }
        if(bomb_click==2)
        {
            readimagefile("images/life1.jpg",0,0,1375,700);
        }
    }
    else if(n==3&&m==1&&mouse_click==3)
    {
        readimagefile("images/cut_banana.jpg",720,315,790,380);
        point+=2;
    }
    else if(n==3&&m==2&&mouse_click==3)
    {
        readimagefile("images/cut_watermelon.jpg",720,315,790,380);
        point+=10;
    }
    else if(n==3&&m==3&&mouse_click==3)
    {
        readimagefile("images/cut_pineapple.jpg",720,315,790,380);
        point+=8;
    }
    else if(n==3&&m==4&&mouse_click==3)
    {
        readimagefile("images/cut_apple.jpg",720,315,790,380);
        point+=5;
    }
    else if(n==3&&m==5&&mouse_click==3)
    {
        PlaySoundA("audio/ex2.wav",0,SND_ASYNC);
        readimagefile("images/bomb_blust.jpg",720,315,790,380);
        bomb_click++;
        if(bomb_click==1)
        {
            readimagefile("images/life2.jpg",0,0,1375,700);

        }
        if(bomb_click==2)
        {
            readimagefile("images/life1.jpg",0,0,1375,700);
        }
    }
    else if(n==4&&m==1&&mouse_click==4)
    {
        readimagefile("images/cut_banana.jpg",465,440,535,505);
        point+=2;
    }
    else if(n==4&&m==2&&mouse_click==4)
    {
        readimagefile("images/cut_watermelon.jpg",465,440,535,505);
        point+=10;
    }
    else if(n==4&&m==3&&mouse_click==4)
    {
        readimagefile("images/cut_pineapple.jpg",465,440,535,505);
        point+=8;
    }
    else if(n==4&&m==4&&mouse_click==4)
    {
        readimagefile("images/cut_apple.jpg",465,440,535,505);
        point+=5;
    }
    else if(n==4&&m==5&&mouse_click==4)
    {
        PlaySoundA("audio/ex2.wav",0,SND_ASYNC);
        readimagefile("images/bomb_blust.jpg",465,440,535,505);
        bomb_click++;
        if(bomb_click==1)
        {
            readimagefile("images/life2.jpg",0,0,1375,700);

        }
        if(bomb_click==2)
        {
            readimagefile("images/life1.jpg",0,0,1375,700);
        }
    }
    else if(n==5&&m==1&&mouse_click==5)
    {
        readimagefile("images/cut_banana.jpg",590,440,660,505);
        point+=2;
    }
    else if(n==5&&m==2&&mouse_click==5)
    {
        readimagefile("images/cut_watermelon.jpg",590,440,660,505);
        point+=10;
    }
    else if(n==5&&m==3&&mouse_click==5)
    {
        readimagefile("images/cut_pineapple.jpg",590,440,660,505);
        point+=8;
    }
    else if(n==5&&m==4&&mouse_click==5)
    {
        readimagefile("images/cut_apple.jpg",590,440,660,505);
        point+=5;
    }
    else if(n==5&&m==5&&mouse_click==5)
    {
        PlaySoundA("audio/ex2.wav",0,SND_ASYNC);
        readimagefile("images/bomb_blust.jpg",590,440,660,505);
        bomb_click++;
        if(bomb_click==1)
        {
            readimagefile("images/life2.jpg",0,0,1375,700);

        }
        if(bomb_click==2)
        {
            readimagefile("images/life1.jpg",0,0,1375,700);
        }
    }
    else if(n==6&&m==1&&mouse_click==6)
    {
        readimagefile("images/cut_banana.jpg",720,440,790,505);
        point+=2;
    }
    else if(n==6&&m==2&&mouse_click==6)
    {
        readimagefile("images/cut_watermelon.jpg",720,440,790,505);
        point+=10;
    }
    else if(n==6&&m==3&&mouse_click==6)
    {
        readimagefile("images/cut_pineapple.jpg",720,440,790,505);
        point+=8;
    }
    else if(n==6&&m==4&&mouse_click==6)
    {
        readimagefile("images/cut_apple.jpg",720,440,790,505);
        point+=5;
    }
    else if(n==6&&m==5&&mouse_click==6)
    {
        PlaySoundA("audio/ex2.wav",0,SND_ASYNC);
        readimagefile("images/bomb_blust.jpg",720,440,790,505);
        bomb_click++;
        if(bomb_click==1)
        {
            readimagefile("images/life2.jpg",0,0,1375,700);

        }
        if(bomb_click==2)
        {
            readimagefile("images/life1.jpg",0,0,1375,700);
        }
    }
    else if(n==7&&m==1&&mouse_click==7)
    {
        readimagefile("images/cut_banana.jpg",465,565,535,630);
        point+=2;
    }
    else if(n==7&&m==2&&mouse_click==7)
    {
        readimagefile("images/cut_watermelon.jpg",465,565,535,630);
        point+=10;
    }
    else if(n==7&&m==3&&mouse_click==7)
    {
        readimagefile("images/cut_pineapple.jpg",465,565,535,630);
        point+=8;
    }
    else if(n==7&&m==4&&mouse_click==7)
    {
        readimagefile("images/cut_apple.jpg",465,565,535,630);
        point+=5;
    }
    else if(n==7&&m==5&&mouse_click==7)
    {
        PlaySoundA("audio/ex2.wav",0,SND_ASYNC);
        readimagefile("images/bomb_blust.jpg",465,565,535,630);
        bomb_click++;
        if(bomb_click==1)
        {
            readimagefile("images/life2.jpg",0,0,1375,700);

        }
        if(bomb_click==2)
        {
            readimagefile("images/life1.jpg",0,0,1375,700);
        }
    }
    else if(n==8&&m==1&&mouse_click==8)
    {
        readimagefile("images/cut_banana.jpg",590,565,660,630);
        point+=2;
    }
    else if(n==8&&m==2&&mouse_click==8)
    {
        readimagefile("images/cut_watermelon.jpg",590,565,660,630);
        point+=10;
    }
    else if(n==8&&m==3&&mouse_click==8)
    {
        readimagefile("images/cut_pineapple.jpg",590,565,660,630);
        point+=8;
    }
    else if(n==8&&m==4&&mouse_click==8)
    {
        readimagefile("images/cut_apple.jpg",590,565,660,630);
        point+=5;
    }
    else if(n==8&&m==5&&mouse_click==8)
    {
        PlaySoundA("audio/ex2.wav",0,SND_ASYNC);
        readimagefile("images/bomb_blust.jpg",590,565,660,630);
        bomb_click++;
        if(bomb_click==1)
        {
            readimagefile("images/life2.jpg",0,0,1375,700);

        }
        if(bomb_click==2)
        {
            readimagefile("images/life1.jpg",0,0,1375,700);
        }
    }
    else if(n==9&&m==1&&mouse_click==9)
    {
        readimagefile("images/cut_banana.jpg",720,565,790,630);
        point+=2;
    }
    else if(n==9&&m==2&&mouse_click==9)
    {
        readimagefile("images/cut_watermelon.jpg",720,565,790,630);
        point+=10;
    }
    else if(n==9&&m==3&&mouse_click==9)
    {
        readimagefile("images/cut_pineapple.jpg",720,565,790,630);
        point+=8;
    }
    else if(n==9&&m==4&&mouse_click==9)
    {
        readimagefile("images/cut_apple.jpg",720,565,790,630);
        point+=5;
    }
    else if(n==9&&m==5&&mouse_click==9)
    {
        PlaySoundA("audio/ex2.wav",0,SND_ASYNC);
        readimagefile("images/bomb_blust.jpg",720,565,790,630);
        bomb_click++;
        if(bomb_click==1)
        {
            readimagefile("images/life2.jpg",0,0,1375,700);

        }
        if(bomb_click==2)
        {
            readimagefile("images/life1.jpg",0,0,1375,700);
        }
    }
    if(mouse_click>0)
    {
        delay(100);
    }
    mouse_click=0;
    if(bomb_click<3)
    {
        char score[100];
        sprintf(score,"%d",point);
        setcolor(5);
        settextstyle(1,0,2);
        outtextxy(1160,200,score);
    }
}
void read_black(int n)
{
    if(n==1)
    {
        readimagefile("images/black.jpg",465,315,535,380);
    }
    else if(n==2)
    {
        readimagefile("images/black.jpg",590,315,660,380);
    }

    else if(n==3)
    {
        readimagefile("images/black.jpg",720,315,790,380);
    }
    else if(n==4)
    {
        readimagefile("images/black.jpg",465,440,535,505);
    }

    else if(n==5)
    {
        readimagefile("images/black.jpg",590,440,660,505);
    }

    else if(n==6)
    {
        readimagefile("images/black.jpg",720,440,790,505);
    }

    else if(n==7)
    {
        readimagefile("images/black.jpg",465,565,535,630);
    }

    else if(n==8)
    {
        readimagefile("images/black.jpg",590,565,660,630);
    }

    else if(n==9)
    {
        readimagefile("images/black.jpg",720,565,790,630);
    }

    delay(200);

}


void click_hard(int x,int y)
{

    if(x>465&&x<535&&y>190&&y<255)
    {
        mouse_click=1;
    }
    else if(x>590&&x<660&&y>190&&y<255)
    {
        mouse_click=2;
    }
    else if(x>720&&x<790&&y>190&&y<255)
    {
        mouse_click=3;
    }
    else if(x>845&&x<912&&y>190&&y<255)
    {
        mouse_click=4;
    }
    else if(x>465&&x<535&&y>315&&y<380)
    {
        mouse_click=5;
    }
    else if(x>590&&x<660&y>315&&y<380)
    {
        mouse_click=6;
    }
    else if(x>720&&x<790&&y>315&&y<380)
    {
        mouse_click=7;
    }
    else if(x>845&&x<912&&y>315&&y<380)
    {
        mouse_click=8;
    }
    else if(x>465&&x<535&&y>440&&y<505)
    {
        mouse_click=9;
    }
    else if(x>590&&x<660&y>440&&y<505)
    {
        mouse_click=10;
    }
    else if(x>720&&x<790&&y>440&&y<505)
    {
        mouse_click=11;
    }
    else if(x>845&&x<912&&y>440&&y<505)
    {
        mouse_click=12;
    }
    else if(x>465&&x<535&&y>565&&y<630)
    {
        mouse_click=13;
    }
    else if(x>590&&x<660&y>565&&y<630)
    {
        mouse_click=14;
    }
    else if(x>720&&x<790&&y>565&&y<630)
    {
        mouse_click=15;
    }
    else if(x>845&&x<912&&y>565&&y<630)
    {
        mouse_click=16;
    }
}


void select_hole_fruite_hard(int n,int m,int k)
{
    int mouse_x,mouse_y;

    getmouseclick(WM_LBUTTONDOWN,mouse_x,mouse_y);
    if(n==1&&m==1)
    {
        readimagefile("images/banana.jpg",465,190,535,255);
    }
    else if(n==1&&m==2)
    {
        readimagefile("images/watermelon.jpg",465,190,535,255);
    }
    else if(n==1&&m==3)
    {
        readimagefile("images/pineapple.jpg",465,190,535,255);
    }
    else if(n==1&&m==4)
    {
        readimagefile("images/apple.jpg",465,190,535,255);
    }
    else if(n==1&&m==5)
    {
        readimagefile("images/bomb.jpg",465,190,535,255);
    }
    else if(n==2&&m==1)
    {
        readimagefile("images/banana.jpg",590,190,660,255);
    }
    else if(n==2&&m==2)
    {
        readimagefile("images/watermelon.jpg",590,190,660,255);
    }
    else if(n==2&&m==3)
    {
        readimagefile("images/pineapple.jpg",590,190,660,255);
    }
    else if(n==2&&m==4)
    {
        readimagefile("images/apple.jpg",590,190,660,255);
    }
    else if(n==2&&m==5)
    {
        readimagefile("images/bomb.jpg",590,190,660,255);
    }
    else if(n==3&&m==1)
    {
        readimagefile("images/banana.jpg",720,190,790,255);
    }
    else if(n==3&&m==2)
    {
        readimagefile("images/watermelon.jpg",720,190,790,255);
    }
    else if(n==3&&m==3)
    {
        readimagefile("images/pineapple.jpg",720,190,790,255);
    }
    else if(n==3&&m==4)
    {
        readimagefile("images/apple.jpg",720,190,790,255);
    }
    else if(n==3&&m==5)
    {
        readimagefile("images/bomb.jpg",720,190,790,255);
    }

    else if(n==4&&m==1)
    {
        readimagefile("images/banana.jpg",845,190,912,255);
    }
    else if(n==4&&m==2)
    {
        readimagefile("images/watermelon.jpg",845,190,912,255);
    }
    else if(n==4&&m==3)
    {
        readimagefile("images/pineapple.jpg",845,190,912,255);
    }
    else if(n==4&&m==4)
    {
        readimagefile("images/apple.jpg",845,190,912,255);
    }
    else if(n==4&&m==5)
    {
        readimagefile("images/bomb.jpg",845,190,912,255);
    }


    else if(n==5&&m==1)
    {
        readimagefile("images/banana.jpg",465,315,535,380);
    }
    else if(n==5&&m==2)
    {
        readimagefile("images/watermelon.jpg",465,315,535,380);
    }
    else if(n==5&&m==3)
    {
        readimagefile("images/pineapple.jpg",465,315,535,380);
    }
    else if(n==5&&m==4)
    {
        readimagefile("images/apple.jpg",465,315,535,380);
    }
    else if(n==5&&m==5)
    {
        readimagefile("images/bomb.jpg",465,315,535,380);
    }
    else if(n==6&&m==1)
    {
        readimagefile("images/banana.jpg",590,315,660,380);
    }
    else if(n==6&&m==2)
    {
        readimagefile("images/watermelon.jpg",590,315,660,380);
    }
    else if(n==6&&m==3)
    {
        readimagefile("images/pineapple.jpg",590,315,660,380);
    }
    else if(n==6&&m==4)
    {
        readimagefile("images/apple.jpg",590,315,660,380);
    }
    else if(n==6&&m==5)
    {
        readimagefile("images/bomb.jpg",590,315,660,380);
    }
    else if(n==7&&m==1)
    {
        readimagefile("images/banana.jpg",720,315,790,380);
    }
    else if(n==7&&m==2)
    {
        readimagefile("images/watermelon.jpg",720,315,790,380);
    }
    else if(n==7&&m==3)
    {
        readimagefile("images/pineapple.jpg",720,315,790,380);
    }
    else if(n==7&&m==4)
    {
        readimagefile("images/apple.jpg",720,315,790,380);
    }
    else if(n==7&&m==5)
    {
        readimagefile("images/bomb.jpg",720,315,790,380);
    }

    else if(n==8&&m==1)
    {
        readimagefile("images/banana.jpg",845,315,912,380);
    }
    else if(n==8&&m==2)
    {
        readimagefile("images/watermelon.jpg",845,315,912,380);
    }
    else if(n==8&&m==3)
    {
        readimagefile("images/pineapple.jpg",845,315,912,380);
    }
    else if(n==8&&m==4)
    {
        readimagefile("images/apple.jpg",845,315,912,380);
    }
    else if(n==8&&m==5)
    {
        readimagefile("images/bomb.jpg",845,315,912,380);
    }

    else if(n==9&&m==1)
    {
        readimagefile("images/banana.jpg",465,440,535,505);
    }
    else if(n==9&&m==2)
    {
        readimagefile("images/watermelon.jpg",465,440,535,505);
    }
    else if(n==9&&m==3)
    {
        readimagefile("images/pineapple.jpg",465,440,535,505);
    }
    else if(n==9&&m==4)
    {
        readimagefile("images/apple.jpg",465,440,535,505);
    }
    else if(n==9&&m==5)
    {
        readimagefile("images/bomb.jpg",465,440,535,505);
    }
    else if(n==10&&m==1)
    {
        readimagefile("images/banana.jpg",590,440,660,505);
    }
    else if(n==10&&m==2)
    {
        readimagefile("images/watermelon.jpg",590,440,660,505);
    }
    else if(n==10&&m==3)
    {
        readimagefile("images/pineapple.jpg",590,440,660,505);
    }
    else if(n==10&&m==4)
    {
        readimagefile("images/apple.jpg",590,440,660,505);
    }
    else if(n==10&&m==5)
    {
        readimagefile("images/bomb.jpg",590,440,660,505);
    }
    else if(n==11&&m==1)
    {
        readimagefile("images/banana.jpg",720,440,790,505);
    }
    else if(n==11&&m==2)
    {
        readimagefile("images/watermelon.jpg",720,440,790,505);
    }
    else if(n==11&&m==3)
    {
        readimagefile("images/pineapple.jpg",720,440,790,505);
    }
    else if(n==11&&m==4)
    {
        readimagefile("images/apple.jpg",720,440,790,505);
    }
    else if(n==11&&m==5)
    {
        readimagefile("images/bomb.jpg",720,440,790,505);
    }

    else if(n==12&&m==1)
    {
        readimagefile("images/banana.jpg",845,440,912,505);
    }
    else if(n==12&&m==2)
    {
        readimagefile("images/watermelon.jpg",845,440,912,505);
    }
    else if(n==12&&m==3)
    {
        readimagefile("images/pineapple.jpg",845,440,912,505);
    }
    else if(n==12&&m==4)
    {
        readimagefile("images/apple.jpg",845,440,912,505);
    }
    else if(n==12&&m==5)
    {
        readimagefile("images/bomb.jpg",845,440,912,505);
    }

    else if(n==13&&m==1)
    {
        readimagefile("images/banana.jpg",465,565,535,630);
    }
    else if(n==13&&m==2)
    {
        readimagefile("images/watermelon.jpg",465,565,535,630);
    }
    else if(n==13&&m==3)
    {
        readimagefile("images/pineapple.jpg",465,565,535,630);
    }
    else if(n==13&&m==4)
    {
        readimagefile("images/apple.jpg",465,565,535,630);
    }
    else if(n==13&&m==5)
    {
        readimagefile("images/bomb.jpg",465,565,535,630);
    }
    else if(n==14&&m==1)
    {
        readimagefile("images/banana.jpg",590,565,660,630);
    }
    else if(n==14&&m==2)
    {
        readimagefile("images/watermelon.jpg",590,565,660,630);
    }
    else if(n==14&&m==3)
    {
        readimagefile("images/pineapple.jpg",590,565,660,630);
    }
    else if(n==14&&m==4)
    {
        readimagefile("images/apple.jpg",590,565,660,630);
    }
    else if(n==14&&m==5)
    {
        readimagefile("images/bomb.jpg",590,565,660,630);
    }
    else if(n==15&&m==1)
    {
        readimagefile("images/banana.jpg",720,565,790,630);
    }
    else if(n==15&&m==2)
    {
        readimagefile("images/watermelon.jpg",720,565,790,630);
    }
    else if(n==15&&m==3)
    {
        readimagefile("images/pineapple.jpg",720,565,790,630);
    }
    else if(n==15&&m==4)
    {
        readimagefile("images/apple.jpg",720,565,790,630);
    }
    else if(n==15&&m==5)
    {
        readimagefile("images/bomb.jpg",720,565,790,630);
    }

    else if(n==16&&m==1)
    {
        readimagefile("images/banana.jpg",845,565,912,630);
    }
    else if(n==16&&m==2)
    {
        readimagefile("images/watermelon.jpg",845,565,912,630);
    }
    else if(n==16&&m==3)
    {
        readimagefile("images/pineapple.jpg",845,565,912,630);
    }
    else if(n==16&&m==4)
    {
        readimagefile("images/apple.jpg",845,565,912,630);
    }
    else if(n==16&&m==5)
    {
        readimagefile("images/bomb.jpg",845,565,912,630);
    }

    if(k==1)
    {
        delay(700);
    }
    if(k==2)
    {
        delay(650);
    }
    if(k==3)
    {
        delay(600);
    }
    if(k==4)
    {
        delay(550);
    }
    if(k==5)
    {
        delay(500);
    }
    getmouseclick(WM_LBUTTONDOWN,mouse_x,mouse_y);
    click_hard(mouse_x,mouse_y);


    if(n==1&&m==1&&mouse_click==1)
    {
        readimagefile("images/cut_banana.jpg",465,190,535,255);
        point+=2;
    }
    else if(n==1&&m==2&&mouse_click==1)
    {
        readimagefile("images/cut_watermelon.jpg",465,190,535,255);
        point+=10;
    }
    else if(n==1&&m==3&&mouse_click==1)
    {
        readimagefile("images/cut_pineapple.jpg",465,190,535,255);
        point+=8;
    }
    else if(n==1&&m==4&&mouse_click==1)
    {
        readimagefile("images/cut_apple.jpg",465,190,535,255);
        point+=5;
    }
    else if(n==1&&m==5&&mouse_click==1)
    {
        PlaySoundA("audio/ex2.wav",0,SND_ASYNC);
        readimagefile("images/bomb_blust.jpg",465,190,535,255);
        bomb_click++;
        if(bomb_click==1)
        {
            readimagefile("images/h_life2.jpg",0,0,1375,700);

        }
        if(bomb_click==2)
        {
            readimagefile("images/h_life1.jpg",0,0,1375,700);
        }
    }
    else if(n==2&&m==1&&mouse_click==2)
    {
        readimagefile("images/cut_banana.jpg",590,190,660,255);
        point+=2;
    }
    else if(n==2&&m==2&&mouse_click==2)
    {
        readimagefile("images/cut_watermelon.jpg",590,190,660,255);
        point+=10;
    }
    else if(n==2&&m==3&&mouse_click==2)
    {
        readimagefile("images/cut_pineapple.jpg",590,190,660,255);
        point+=8;
    }
    else if(n==2&&m==4&&mouse_click==2)
    {
        readimagefile("images/cut_apple.jpg",590,190,660,255);
        point+=5;
    }
    else if(n==2&&m==5&&mouse_click==2)
    {
        PlaySoundA("audio/ex2.wav",0,SND_ASYNC);
        readimagefile("images/bomb_blust_.jpg",590,190,660,255);
        bomb_click++;
        if(bomb_click==1)
        {
            readimagefile("images/h_life2.jpg",0,0,1375,700);

        }
        if(bomb_click==2)
        {
            readimagefile("images/h_life1.jpg",0,0,1375,700);
        }
    }
    else if(n==3&&m==1&&mouse_click==3)
    {
        readimagefile("images/cut_banana.jpg",720,190,790,255);
        point+=2;
    }
    else if(n==3&&m==2&&mouse_click==3)
    {
        readimagefile("images/cut_watermelon.jpg",720,190,790,255);
        point+=10;
    }
    else if(n==3&&m==3&&mouse_click==3)
    {
        readimagefile("images/cut_pineapple.jpg",720,190,790,255);
        point+=8;
    }
    else if(n==3&&m==4&&mouse_click==3)
    {
        readimagefile("images/cut_apple.jpg",720,190,790,255);
        point+=5;
    }
    else if(n==3&&m==5&&mouse_click==3)
    {
        PlaySoundA("audio/ex2.wav",0,SND_ASYNC);
        readimagefile("images/bomb_blust.jpg",720,190,790,255);
        bomb_click++;
        if(bomb_click==1)
        {
            readimagefile("images/h_life2.jpg",0,0,1375,700);

        }
        if(bomb_click==2)
        {
            readimagefile("images/h_life1.jpg",0,0,1375,700);
        }
    }
    else if(n==4&&m==1&&mouse_click==4)
    {
        readimagefile("images/cut_banana.jpg",845,190,912,255);
        point+=2;
    }
    else if(n==4&&m==2&&mouse_click==4)
    {
        readimagefile("images/cut_watermelon.jpg",845,190,912,255);
        point+=10;
    }
    else if(n==4&&m==3&&mouse_click==4)
    {
        readimagefile("images/cut_pineapple.jpg",845,190,912,255);
        point+=8;
    }
    else if(n==4&&m==4&&mouse_click==4)
    {
        readimagefile("images/cut_apple.jpg",845,190,912,255);
        point+=5;
    }
    else if(n==4&&m==5&&mouse_click==4)
    {
        PlaySoundA("audio/ex2.wav",0,SND_ASYNC);
        readimagefile("images/bomb_blust.jpg",845,190,912,255);
        bomb_click++;
        if(bomb_click==1)
        {
            readimagefile("images/h_life2.jpg",0,0,1375,700);

        }
        if(bomb_click==2)
        {
            readimagefile("images/h_life1.jpg",0,0,1375,700);
        }
    }

    if(n==5&&m==1&&mouse_click==5)
    {
        readimagefile("images/cut_banana.jpg",465,315,535,380);
        point+=2;
    }
    else if(n==5&&m==2&&mouse_click==5)
    {
        readimagefile("images/cut_watermelon.jpg",465,315,535,380);
        point+=10;
    }
    else if(n==5&&m==3&&mouse_click==5)
    {
        readimagefile("images/cut_pineapple.jpg",465,315,535,380);
        point+=8;
    }
    else if(n==5&&m==4&&mouse_click==5)
    {
        readimagefile("images/cut_apple.jpg",465,315,535,380);
        point+=5;
    }
    else if(n==5&&m==5&&mouse_click==5)
    {
        PlaySoundA("audio/ex2.wav",0,SND_ASYNC);
        readimagefile("images/bomb_blust.jpg",465,315,535,380);
        bomb_click++;
        if(bomb_click==1)
        {
            readimagefile("images/h_life2.jpg",0,0,1375,700);

        }
        if(bomb_click==2)
        {
            readimagefile("images/h_life1.jpg",0,0,1375,700);
        }
    }
    else if(n==6&&m==1&&mouse_click==6)
    {
        readimagefile("images/cut_banana.jpg",590,315,660,380);
        point+=2;
    }
    else if(n==6&&m==2&&mouse_click==6)
    {
        readimagefile("images/cut_watermelon.jpg",590,315,660,380);
        point+=10;
    }
    else if(n==6&&m==3&&mouse_click==6)
    {
        readimagefile("images/cut_pineapple.jpg",590,315,660,380);
        point+=8;
    }
    else if(n==6&&m==4&&mouse_click==6)
    {
        readimagefile("images/cut_apple.jpg",590,315,660,380);
        point+=5;
    }
    else if(n==6&&m==5&&mouse_click==6)
    {
        PlaySoundA("audio/ex2.wav",0,SND_ASYNC);
        readimagefile("images/bomb_blust.jpg",590,315,660,380);
        bomb_click++;
        if(bomb_click==1)
        {
            readimagefile("images/h_life2.jpg",0,0,1375,700);

        }
        if(bomb_click==2)
        {
            readimagefile("images/h_life1.jpg",0,0,1375,700);
        }
    }
    else if(n==7&&m==1&&mouse_click==7)
    {
        readimagefile("images/cut_banana.jpg",720,315,790,380);
        point+=2;
    }
    else if(n==7&&m==2&&mouse_click==7)
    {
        readimagefile("images/cut_watermelon.jpg",720,315,790,380);
        point+=10;
    }
    else if(n==7&&m==3&&mouse_click==7)
    {
        readimagefile("images/cut_pineapple.jpg",720,315,790,380);
        point+=8;
    }
    else if(n==7&&m==4&&mouse_click==7)
    {
        readimagefile("images/cut_apple.jpg",720,315,790,380);
        point+=5;
    }
    else if(n==7&&m==5&&mouse_click==7)
    {
        PlaySoundA("audio/ex2.wav",0,SND_ASYNC);
        readimagefile("images/bomb_blust.jpg",720,315,790,380);
        bomb_click++;
        if(bomb_click==1)
        {
            readimagefile("images/h_life2.jpg",0,0,1375,700);

        }
        if(bomb_click==2)
        {
            readimagefile("images/h_life1.jpg",0,0,1375,700);
        }
    }

    else if(n==8&&m==1&&mouse_click==8)
    {
        readimagefile("images/cut_banana.jpg",845,315,912,380);
        point+=2;
    }
    else if(n==8&&m==2&&mouse_click==8)
    {
        readimagefile("images/cut_watermelon.jpg",845,315,912,380);
        point+=10;
    }
    else if(n==8&&m==3&&mouse_click==8)
    {
        readimagefile("images/cut_pineapple.jpg",845,315,912,380);
        point+=8;
    }
    else if(n==8&&m==4&&mouse_click==8)
    {
        readimagefile("images/cut_apple.jpg",845,315,912,380);
        point+=5;
    }
    else if(n==8&&m==5&&mouse_click==8)
    {
        PlaySoundA("audio/ex2.wav",0,SND_ASYNC);
        readimagefile("images/bomb_blust.jpg",845,315,912,380);
        bomb_click++;
        if(bomb_click==1)
        {
            readimagefile("images/h_life2.jpg",0,0,1375,700);

        }
        if(bomb_click==2)
        {
            readimagefile("images/h_life1.jpg",0,0,1375,700);
        }
    }
    else if(n==9&&m==1&&mouse_click==9)
    {
        readimagefile("images/cut_banana.jpg",465,440,535,505);
        point+=2;
    }
    else if(n==9&&m==2&&mouse_click==9)
    {
        readimagefile("images/cut_watermelon.jpg",465,440,535,505);
        point+=10;
    }
    else if(n==9&&m==3&&mouse_click==9)
    {
        readimagefile("images/cut_pineapple.jpg",465,440,535,505);
        point+=8;
    }
    else if(n==9&&m==4&&mouse_click==9)
    {
        readimagefile("images/cut_apple.jpg",465,440,535,505);
        point+=5;
    }
    else if(n==9&&m==5&&mouse_click==9)
    {
        PlaySoundA("audio/ex2.wav",0,SND_ASYNC);
        readimagefile("images/bomb_blust.jpg",465,440,535,505);
        bomb_click++;
        if(bomb_click==1)
        {
            readimagefile("images/h_life2.jpg",0,0,1375,700);

        }
        if(bomb_click==2)
        {
            readimagefile("images/h_life1.jpg",0,0,1375,700);
        }
    }
    else if(n==10&&m==1&&mouse_click==10)
    {
        readimagefile("images/cut_banana.jpg",590,440,660,505);
        point+=2;
    }
    else if(n==10&&m==2&&mouse_click==10)
    {
        readimagefile("images/cut_watermelon.jpg",590,440,660,505);
        point+=10;
    }
    else if(n==10&&m==3&&mouse_click==10)
    {
        readimagefile("images/cut_pineapple.jpg",590,440,660,505);
        point+=8;
    }
    else if(n==10&&m==4&&mouse_click==10)
    {
        readimagefile("images/cut_apple.jpg",590,440,660,505);
        point+=5;
    }
    else if(n==10&&m==5&&mouse_click==10)
    {
        PlaySoundA("audio/ex2.wav",0,SND_ASYNC);
        readimagefile("images/bomb_blust.jpg",590,440,660,505);
        bomb_click++;
        if(bomb_click==1)
        {
            readimagefile("images/h_life2.jpg",0,0,1375,700);

        }
        if(bomb_click==2)
        {
            readimagefile("images/h_life1.jpg",0,0,1375,700);
        }
    }
    else if(n==11&&m==1&&mouse_click==11)
    {
        readimagefile("images/cut_banana.jpg",720,440,790,505);
        point+=2;
    }
    else if(n==11&&m==2&&mouse_click==11)
    {
        readimagefile("images/cut_watermelon.jpg",720,440,790,505);
        point+=10;
    }
    else if(n==11&&m==3&&mouse_click==11)
    {
        readimagefile("images/cut_pineapple.jpg",720,440,790,505);
        point+=8;
    }
    else if(n==11&&m==4&&mouse_click==11)
    {
        readimagefile("images/cut_apple.jpg",720,440,790,505);
        point+=5;
    }
    else if(n==11&&m==5&&mouse_click==11)
    {
        PlaySoundA("audio/ex2.wav",0,SND_ASYNC);
        readimagefile("images/bomb_blust.jpg",720,440,790,505);
        bomb_click++;
        if(bomb_click==1)
        {
            readimagefile("images/h_life2.jpg",0,0,1375,700);

        }
        if(bomb_click==2)
        {
            readimagefile("images/h_life1.jpg",0,0,1375,700);
        }
    }





    else if(n==12&&m==1&&mouse_click==12)
    {
        readimagefile("images/cut_banana.jpg",845,440,912,505);
        point+=2;
    }
    else if(n==12&&m==2&&mouse_click==12)
    {
        readimagefile("images/cut_watermelon.jpg",845,440,912,505);
        point+=10;
    }
    else if(n==12&&m==3&&mouse_click==12)
    {
        readimagefile("images/cut_pineapple.jpg",845,440,912,505);
        point+=8;
    }
    else if(n==12&&m==4&&mouse_click==12)
    {
        readimagefile("images/cut_apple.jpg",845,440,912,505);
        point+=5;
    }
    else if(n==12&&m==5&&mouse_click==12)
    {
        PlaySoundA("audio/ex2.wav",0,SND_ASYNC);
        readimagefile("images/bomb_blust.jpg",845,440,912,505);
        bomb_click++;
        if(bomb_click==1)
        {
            readimagefile("images/h_life2.jpg",0,0,1375,700);

        }
        if(bomb_click==2)
        {
            readimagefile("images/h_life1.jpg",0,0,1375,700);
        }
    }
    else if(n==13&&m==1&&mouse_click==13)
    {
        readimagefile("images/cut_banana.jpg",465,565,535,630);
        point+=2;
    }
    else if(n==13&&m==2&&mouse_click==13)
    {
        readimagefile("images/cut_watermelon.jpg",465,565,535,630);
        point+=10;
    }
    else if(n==13&&m==3&&mouse_click==13)
    {
        readimagefile("images/cut_pineapple.jpg",465,565,535,630);
        point+=8;
    }
    else if(n==13&&m==4&&mouse_click==13)
    {
        readimagefile("images/cut_apple.jpg",465,565,535,630);
        point+=5;
    }
    else if(n==13&&m==5&&mouse_click==13)
    {
        PlaySoundA("audio/ex2.wav",0,SND_ASYNC);
        readimagefile("images/bomb_blust.jpg",465,565,535,630);
        bomb_click++;
        if(bomb_click==1)
        {
            readimagefile("images/h_life2.jpg",0,0,1375,700);

        }
        if(bomb_click==2)
        {
            readimagefile("images/h_life1.jpg",0,0,1375,700);
        }
    }
    else if(n==14&&m==1&&mouse_click==14)
    {
        readimagefile("images/cut_banana.jpg",590,565,660,630);
        point+=2;
    }
    else if(n==14&&m==2&&mouse_click==14)
    {
        readimagefile("images/cut_watermelon.jpg",590,565,660,630);
        point+=10;
    }
    else if(n==14&&m==3&&mouse_click==14)
    {
        readimagefile("images/cut_pineapple.jpg",590,565,660,630);
        point+=8;
    }
    else if(n==14&&m==4&&mouse_click==14)
    {
        readimagefile("images/cut_apple.jpg",590,565,660,630);
        point+=5;
    }
    else if(n==14&&m==5&&mouse_click==14)
    {
        PlaySoundA("audio/ex2.wav",0,SND_ASYNC);
        readimagefile("images/bomb_blust.jpg",590,565,660,630);
        bomb_click++;
        if(bomb_click==1)
        {
            readimagefile("images/h_life2.jpg",0,0,1375,700);

        }
        if(bomb_click==2)
        {
            readimagefile("images/h_life1.jpg",0,0,1375,700);
        }
    }
    else if(n==15&&m==1&&mouse_click==15)
    {
        readimagefile("images/cut_banana.jpg",720,565,790,630);
        point+=2;
    }
    else if(n==15&&m==2&&mouse_click==15)
    {
        readimagefile("images/cut_watermelon.jpg",720,565,790,630);
        point+=10;
    }
    else if(n==15&&m==3&&mouse_click==15)
    {
        readimagefile("images/cut_pineapple.jpg",720,565,790,630);
        point+=8;
    }
    else if(n==15&&m==4&&mouse_click==15)
    {
        readimagefile("images/cut_apple.jpg",720,565,790,630);
        point+=5;
    }
    else if(n==15&&m==5&&mouse_click==15)
    {
        PlaySoundA("audio/ex2.wav",0,SND_ASYNC);
        readimagefile("images/bomb_blust.jpg",720,565,790,630);
        bomb_click++;
        if(bomb_click==1)
        {
            readimagefile("images/h_life2.jpg",0,0,1375,700);

        }
        if(bomb_click==2)
        {
            readimagefile("images/h_life1.jpg",0,0,1375,700);
        }
    }

    else if(n==16&&m==1&&mouse_click==16)
    {
        readimagefile("images/cut_banana.jpg",845,565,912,630);
        point+=2;
    }
    else if(n==16&&m==2&&mouse_click==16)
    {
        readimagefile("images/cut_watermelon.jpg",845,565,912,630);
        point+=10;
    }
    else if(n==16&&m==3&&mouse_click==16)
    {
        readimagefile("images/cut_pineapple.jpg",845,565,912,630);
        point+=8;
    }
    else if(n==16&&m==4&&mouse_click==16)
    {
        readimagefile("images/cut_apple.jpg",845,565,912,630);
        point+=5;
    }
    else if(n==16&&m==5&&mouse_click==16)
    {
        PlaySoundA("audio/ex2.wav",0,SND_ASYNC);
        readimagefile("images/bomb_blust.jpg",845,565,912,630);
        bomb_click++;
        if(bomb_click==1)
        {
            readimagefile("images/h_life2.jpg",0,0,1375,700);

        }
        if(bomb_click==2)
        {
            readimagefile("images/h_life1.jpg",0,0,1375,700);
        }
    }
    if(mouse_click>0)
    {
        delay(100);
    }
    mouse_click=0;
    if(bomb_click<3)
    {
        char score[100];
        sprintf(score,"%d",point);
        setcolor(5);
        settextstyle(1,0,2);
        outtextxy(1165,210,score);
    }
}
void read_black_hard(int n)
{
    if(n==1)
    {
        readimagefile("images/black.jpg",465,190,535,255);
    }
    else if(n==2)
    {
        readimagefile("images/black.jpg",590,190,660,255);
    }
    else if(n==3)
    {
        readimagefile("images/black.jpg",720,190,790,255);
    }
    else if(n==4)
    {
        readimagefile("images/black.jpg",845,190,912,255);
    }
    else if(n==5)
    {
        readimagefile("images/black.jpg",465,315,535,380);
    }
    else if(n==6)
    {
        readimagefile("images/black.jpg",590,315,660,380);
    }

    else if(n==7)
    {
        readimagefile("images/black.jpg",720,315,790,380);
    }
    else if(n==8)
    {
        readimagefile("images/black.jpg",845,315,912,380);
    }
    else if(n==9)
    {
        readimagefile("images/black.jpg",465,440,535,505);
    }

    else if(n==10)
    {
        readimagefile("images/black.jpg",590,440,660,505);
    }

    else if(n==11)
    {
        readimagefile("images/black.jpg",720,440,790,505);
    }
    else if(n==12)
    {
        readimagefile("images/black.jpg",845,440,912,505);
    }
    else if(n==13)
    {
        readimagefile("images/black.jpg",465,565,535,630);
    }

    else if(n==14)
    {
        readimagefile("images/black.jpg",590,565,660,630);
    }

    else if(n==15)
    {
        readimagefile("images/black.jpg",720,565,790,630);
    }
    else if(n==16)
    {
        readimagefile("images/black.jpg",845,565,912,630);
    }

    delay(200);

}
void entername(int total)
{
     readimagefile("images/enter_name.jpg",0,0,1375,700);
    FILE *in=fopen("H_score.txt","r");
    int i=0,j;
    char namep[20],chep[100];
    sprintf(chep,"%d",total);
    settextstyle(1,0,4);
    outtextxy(300,45,chep);

    while (20-i)
    {
        char c= getch();
        if (c!='\r')
        {
            if(c==8)
            {
                i--;
            }
            else
            {
                namep[i]=c;
                i++;
            }
            namep[i]='\0';
            settextstyle(1,0,6);
            setcolor(BLUE);
            outtextxy(195,250,namep);
        }
        else break;

    }
    strcpy(top_player[5].name,namep);
    top_player[5].score=total;
    for(j=0;j<5;j++)
    {
        fscanf(in," %[^\n]",&top_player[j].name);
        fscanf(in,"%d",&top_player[j].score);
    }
    int k;
    for(j=0;j<6;j++)
    {
        for(k=0;k<5-j;k++)
        {
            if(top_player[k].score<top_player[k+1].score)
            {
                swap(top_player[k],top_player[k+1]);
            }
        }
    }
   FILE *out=fopen("H_score.txt","w");
   for(j=0;j<5;j++)
    {
        fprintf(out,"%s\n",top_player[j].name);
        fprintf(out,"%d\n",top_player[j].score);
   }
   fclose(in);
   fclose(out);

}



