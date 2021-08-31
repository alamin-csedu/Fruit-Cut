#include<graphics.h>
#include"alll.h"

void credit()
{
    readimagefile("images/credit_credit.jpg",0,0,1375,700);
    int credit_mouse_x,credit_mouse_y,click=0;
    while(click==0){
        getmouseclick(WM_LBUTTONDOWN,credit_mouse_x,credit_mouse_y);
        if(credit_mouse_x>1165&&credit_mouse_x<1265&&credit_mouse_y>620&&credit_mouse_y<670){
        click=1;
    }
    }
    if(click==1){
         PlaySoundA("audio/click.wav",0,SND_ASYNC);
         main();
    }



}


