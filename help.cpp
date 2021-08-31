#include<graphics.h>
#include"alll.h"

void help()
{
    readimagefile("images/help_help.jpg",0,0,1375,700);
    int help_mouse_x,help_mouse_y,click_help=0;
    while(click_help==0){
        getmouseclick(WM_LBUTTONDOWN,help_mouse_x,help_mouse_y);
        if(help_mouse_x>1165&&help_mouse_x<1265&&help_mouse_y>620&&help_mouse_y<670){
        click_help=1;
    }
    }
    if(click_help==1){
         PlaySoundA("audio/click.wav",0,SND_ASYNC);
         main();
    }



}



