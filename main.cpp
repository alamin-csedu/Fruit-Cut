
#include <bits/stdc++.h>
#include<graphics.h>
#include"alll.h"
int run=0;
using namespace std;
int main()
{
    int gd=DETECT,gm;
    initgraph(&gm,&gd,"d://tc//bgi");
    initwindow(1375,700);
    if(run==0)
    {
        readimagefile("images/ani.jpg",0,0,1375,700);
        delay(1500);
        readimagefile("images/ani2.jpg",0,0,1375,700);
        delay(1500);
        run++;
    }
    readimagefile("images/games.jpg",0,0,1375,700);
    mainmenu();
    if(mainmenu()==0)
    {
        return 0;
    }
    getch();
    closegraph();
    return 0;
}
