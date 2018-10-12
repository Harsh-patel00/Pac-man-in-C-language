#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{

    int gd=0,gm,i,j,l;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    initwindow(1000,690,"PacMan",0,0);
    register int sX = 500, s2X=sX, sY=400, s2Y=sY, speed=30;
    int cx=10,cy=10;
    outtextxy(400,300,"WELCOME TO PACMAN");
    outtextxy(400,350,"Press Any Arrow Key to continue...");
    setbkcolor(BLUE);

    while(1)
    {
//-------------------------RIGHTRIGHTRIGHTRIGHTRIGHTRIGHT--------------------------------------------------

        if(GetAsyncKeyState(VK_RIGHT))
        {
right :
st :
            for(; ;)
            {
                if(sX==1010 || s2X==1010 || sX==-10 || s2X==-10)
                {
                    printf("\a");
                }
                sX+=speed;
                s2X+=speed;
                if(sX==1010 || s2X==1010)
                {
                    sX=-10;
                    s2X=-10;
                }
                if(GetAsyncKeyState(VK_RIGHT))
                {
                    break;
                }
                if(GetAsyncKeyState(VK_DOWN))
                {
                    goto down;
                }
                if(GetAsyncKeyState(VK_LEFT))
                {
                    goto left;
                }
                if(GetAsyncKeyState(VK_UP))
                {
                    goto up;
                }

                setfillstyle(SOLID_FILL,YELLOW);
                sector(sX,sY,30,330,20,20);
                delay(170);
                cleardevice();
                goto start ;
            }
start :
            for(; ;)
            {
                setfillstyle(SOLID_FILL,YELLOW);
                sector(s2X,s2Y,0,360,20,20);
                delay(50);
                cleardevice();
                goto st;
            }
        }

//-------------------------DOWNDOWNDOWNDOWNDOWNDOWN--------------------------------------------------

        else if(GetAsyncKeyState(VK_DOWN))
        {
down :
st1 :
            for(; ;)
            {
                if(sY==700 || s2Y==700 || sY==-80 || s2Y==-80)
                {
                    printf("\a");
                }
                sY+=speed;
                s2Y+=speed;
                if(sY==700 || s2Y==700)
                {
                    sY=-80;
                    s2Y=-80;
                }

                if(GetAsyncKeyState(VK_DOWN))
                {
                    break;
                }
                if(GetAsyncKeyState(VK_RIGHT))
                {
                    goto right;
                }
                if(GetAsyncKeyState(VK_LEFT))
                {
                    goto left;
                }
                if(GetAsyncKeyState(VK_UP))
                {
                    goto up;
                }

                setfillstyle(SOLID_FILL,YELLOW);
                sector(sX,sY,300,240,20,20);
                delay(170);
                cleardevice();
                goto start1 ;
            }
start1 :
            for(; ;)
            {
                setfillstyle(SOLID_FILL,YELLOW);
                sector(s2X,s2Y,270,630,20,20);
                delay(50);
                cleardevice();
                goto st1;
            }
        }

//-------------------------LeftLeftLeftLeftLeftLeftLeft--------------------------------------------------

        else if(GetAsyncKeyState(VK_LEFT))
        {
left :
st2 :
            for(; ;)
            {
                if(sX==1010 || s2X==1010 || sX==-10 || s2X==-10)
                {
                    printf("\a");
                }
                sX-=speed;
                s2X-=speed;
                if(sX==-10 || s2X==-10)
                {
                    sX=1010;
                    s2X=1010;
                }
                if(GetAsyncKeyState(VK_LEFT))
                {
                    break;
                }
                if(GetAsyncKeyState(VK_RIGHT))
                {
                    goto right;
                }
                if(GetAsyncKeyState(VK_DOWN))
                {
                    goto down;
                }
                if(GetAsyncKeyState(VK_UP))
                {
                    goto up;
                }

                setfillstyle(SOLID_FILL,YELLOW);
                sector(sX,sY,-150,-210,20,20);
                delay(170);
                cleardevice();
                goto start2 ;
            }
start2 :
            for(; ;)
            {
                setfillstyle(SOLID_FILL,YELLOW);
                sector(s2X,s2Y,180,540,20,20);
                delay(50);
                cleardevice();
                goto st2;
            }
        }

//-------------------------UPUPUPUPUPUPUPUPUPUP--------------------------------------------------

        else if(GetAsyncKeyState(VK_UP))
        {
up :
st3 :
            for(; ;)
            {
                if(sY==700 || s2Y==700 || sY==-80 || s2Y==-80)
                {
                    printf("\a");
                }
                sY-=speed;
                s2Y-=speed;
                if(sY==-80 || s2Y==-80)
                {
                    sY=700;
                    s2Y=700;
                }
                if(GetAsyncKeyState(VK_UP))
                {
                    break;
                }
                if(GetAsyncKeyState(VK_RIGHT))
                {
                    goto right;
                }
                if(GetAsyncKeyState(VK_LEFT))
                {
                    goto left;
                }
                if(GetAsyncKeyState(VK_DOWN))
                {
                    goto down;
                }

                setfillstyle(SOLID_FILL,YELLOW);
                sector(sX,sY,120,60,20,20);
                delay(170);
                cleardevice();
                goto start3 ;
            }
start3 :
            for(; ;)
            {
                setfillstyle(SOLID_FILL,YELLOW);
                sector(s2X,s2Y,90,450,20,20);
                delay(50);
                cleardevice();
                goto st3;
            }
        }

//-----------------------Starting Screen--------------------------------------------------------

        setfillstyle(SOLID_FILL,rand());
        fillellipse(80,rand(),10,10);
        fillellipse(rand(),80,10,10);
        fillellipse(925,rand(),10,10);
        fillellipse(rand(),620,10,10);


    }

    getch();
    closegraph();
    return 0;
}
