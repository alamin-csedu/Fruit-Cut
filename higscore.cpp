#include<graphics.h>
#include"alll.h"
#include<bits/stdc++.h>
struct player
{
    char name[100];
    int score;
};
struct player top[10];
void highscore()
{
    FILE *input=fopen("H_score.txt","r");
    int mouse_x_highscore,mouse_y_highscore,i,increment=0;
    char Highscore[100];
    readimagefile("images/highscore.jpg",0,0,1375,700);
    for(i=0; i<5; i++)
    {
        fscanf(input," %[^\n]",&top[i].name);
        fscanf(input,"%d",&top[i].score);
    }
    for(i=0; i<5; i++)
    {
        sprintf(Highscore,"%s",top[i].name);
        setcolor(i+1);
        settextstyle(1,0,4);
        outtextxy(335,280+increment,Highscore);
        sprintf(Highscore,"%d",top[i].score);
        setcolor(i+1);
        settextstyle(1,0,4);
        outtextxy(890,280+increment,Highscore);
        if(i==3)
            increment+=77;
           else
        increment+=85;
    }


    while(1)
    {
        getmouseclick(WM_LBUTTONDOWN,mouse_x_highscore,mouse_y_highscore);
        if(mouse_x_highscore>1140&&mouse_x_highscore<1320&&mouse_y_highscore>615&&mouse_y_highscore<670)
        {
            PlaySoundA("audio/click.wav",0,SND_ASYNC);
            main();
        }
    }
}


