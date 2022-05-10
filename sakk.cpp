#include "graphics.hpp"
#include "widget.h"
#include "babuk.h"
#include "sakk.h"
#include <vector>
#include <iostream>

using namespace genv;
sakk::sakk(int _x,int _y):x(_x),y(_y)
{
l=(x)/8;
if(x<400){x=400;y=400;l=50;}
kezd=false;

    int h=-1;
        for(int i=0;i<8;i++)
    {
        //std::cout<<"kecske"<<std::endl;
        for (int j=0;j<8;j++)
        {
           // std::cout<<i<<std::endl;
            v[i][j]=0;
            //std::cout<<j<<std::endl;
        }
    }

}

void sakk::background()
{

    int mag= (y-1)/8;
    int szel= (x-1)/8;
    for(int i=0;i<x;i+=2*mag)
    {
        for (int j=0;j<y;j+=2*szel)
        {
            gout<<color(255,255,255)<<move_to(i,j)<<box(50,50);
        }
    }
     for(int i=mag;i<x;i+=2*mag)
    {
        for (int j=szel;j<y;j+=2*szel)
        {
            gout<<color(255,255,255)<<move_to(i,j)<<box(50,50);
        }
    }
}
void sakk:: bab()
{
kezd=true;
    if(kezd)
    {
        int k=0;
        int p=1;
        while(k<8)
        {
        v[k][0]=p;
        v[k][1]=p+1;
        v[k][2]=p+2;
        v[k][3]=p+3;
        v[k][4]=p+4;
        v[k][5]=p+2;
        v[k][6]=p+1;
        v[k][7]=p;
        k+=7;
        p+=7;

        }

        for(int i=0;i<8;i++)
        {
            v[1][i]=0;;
            v[6][i]=7;
        }
    for(int i=2;i<6;i++)
    {
        for (int j=0;j<8;j++)
        {
           v[i][j]=-1;
        }
    }

    }
}
void sakk::kira()
{

    for(int i=0;i<8;i++)
    {
        for (int j=0;j<8;j++)
        {
           babu b(j,i,50);
           //std::cout<<b.actual(ev.pos_x,ev.pos_y)<<std::endl;
           //if(b.actual(ev.pos_x,ev.pos_y)&&v[i][j]>-1)std::cout<<v[i][j]<<std::endl;
           //std::cout<<v[i][j]<<std::endl;
           b.rajz(v[i][j]);
        }
    }

}
void sakk::esemeny(genv::event ev)
{
    if(ev.type==ev_mouse&&ev.button==btn_left)
    {
    int ex=ev.pos_x;
    int ey=ev.pos_y;
       int u=ex/50;
       int o=ey/50;
       if(v[o][u]>-1)
       {
            babu b(u,o,l);
            std::cout<<b.kijel<<std::endl;
            b.kijel=!b.kijel;
            std::cout<<b.kijel<<std::endl;
            b.kijelol(b.kijel, v[o][u]);
           // b.rajz(v[o][u]);

       }

    }

}