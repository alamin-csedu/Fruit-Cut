#include<bits/stdc++.h>
#include<graphics.h>
#include"alll.h"

void gamemode();
void highscore();
void credit();
int get_mouse_click=0;
int mainmenu()
{
    int click=0,mouse_x,mouse_y;
    POINT mouse;
    clearmouseclick(WM_LBUTTONDOWN);
    int get_mouse_click=0;
    while(get_mouse_click==0)
    {
        GetCursorPos(&mouse);
        getmouseclick(WM_LBUTTONDOWN,mouse_x,mouse_y);
        if(mouse.x>95&&mouse.x<270&&mouse.y>70&&mouse.y<110){
              readimagefile("images/Newgame.jpg",0,0,1375,700);
        }
        if(mouse.x>95&&mouse.x<280&&mouse.y>130&&mouse.y<165){
              readimagefile("images/High score.jpg",0,0,1375,700);
        }
        if(mouse.x>95&&mouse.x<185&&mouse.y>180&&mouse.y<215){
              readimagefile("images/Help.jpg",0,0,1375,700);
        }
        if(mouse.x>95&&mouse.x<230&&mouse.y>225&&mouse.y<250){
              readimagefile("images/Credits.jpg",0,0,1375,700);
        }
        if(mouse.x>95&&mouse.x<180&&mouse.y>260&&mouse.y<295){
              readimagefile("images/Exit.jpg",0,0,1375,700);
        }


        if(mouse_x>95&&mouse_x<270&&mouse_y>40&&mouse_y<85){
               PlaySoundA("audio/click.wav",0,SND_ASYNC);
              get_mouse_click=1;
        }
        if(mouse_x>95&&mouse_x<280&&mouse_y>100&&mouse_y<135){
             PlaySoundA("audio/click.wav",0,SND_ASYNC);
              get_mouse_click=2;
        }
        if(mouse_x>95&&mouse_x<185&&mouse_y>150&&mouse_y<185){
             PlaySoundA("audio/click.wav",0,SND_ASYNC);
              get_mouse_click=3;
        }
        if(mouse_x>95&&mouse_x<230&&mouse_y>195&&mouse_y<220){
             PlaySoundA("audio/click.wav",0,SND_ASYNC);
              get_mouse_click=4;
        }
        if(mouse_x>95&&mouse_x<180&&mouse_y>230&&mouse_y<265){
             PlaySoundA("audio/click.wav",0,SND_ASYNC);
              get_mouse_click=5;
        }
    }
    if(get_mouse_click==1){
        gamemode();
    }
    if(get_mouse_click==2){
        highscore();
    }
    if(get_mouse_click==3){
        help();
    }
    if(get_mouse_click==4){
        credit();
    }
    if(get_mouse_click==5){
        return 0;
    }

}


