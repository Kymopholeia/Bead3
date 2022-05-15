#include "graphics.hpp"
#include "widget.h"
#include "babuk.h"
#include "iostream"

using namespace genv;
babu::babu(int x, int y, int z):widget(x,y,z)
{
    fajt=0;
    kijel=false;
}

void babu::rajz(int fajta)
{
    x=x*z;
    y=y*z-1;
    x=x+3;
    y=y+7;
 if(fajta<7){gout<<color(200,0,0);}
 else{gout<<color(0,200,0);}
    if (fajta==0||fajta==7)//pawn
    {
         if(fajta<7){gout<<color(200,0,0);}
        else{gout<<color(0,200,0);}
    gout<<move_to(x+19,y+10)<<box_to(x+21,y+16);
    gout<<move_to(x+17,y+12)<<box_to(x+23,y+14);
    gout<<move_to(x+18,y+11)<<dot<<move_to(x+22,y+15)<<dot;
    gout<<move_to(x+22,y+11)<<dot<<move_to(x+18,y+15)<<dot;
    gout<<move_to(x+16,y+17)<<box_to(x+24,y+18);
    gout<<move_to(x+13,y+19)<<line_to(x+27,y+19);
    gout<<move_to(x+16,y+20)<<box_to(x+24,y+25);
    gout<<move_to(x+15,y+25)<<box_to(x+25,y+29);
    gout<<move_to(x+14,y+29)<<box_to(x+26,y+31);
    gout<<move_to(x+13,y+31)<<line_to(x+27,y+31);
    gout<<move_to(x+11,y+31)<<box_to(x+29,y+34);
    }
    if (fajta==1||fajta==8)//rook
    {
         if(fajta<7){gout<<color(200,0,0);}
        else{gout<<color(0,200,0);}
    gout<<move_to(x+13,y+10)<<box(3,2);
    gout<<move_to(x+18,y+10)<<box(4,2);
    gout<<move_to(x+24,y+10)<<box(4,2);
    gout<<move_to(x+13,y+12)<<box_to(x+27,y+14);
    gout<<move_to(x+14,y+14)<<box_to(x+26,y+16);
    gout<<move_to(x+15,y+16)<<box_to(x+25,y+18);
    gout<<move_to(x+13,y+19)<<line_to(x+27,y+19);
    gout<<move_to(x+16,y+20)<<box_to(x+24,y+25);
    gout<<move_to(x+15,y+25)<<box_to(x+25,y+29);
    gout<<move_to(x+14,y+29)<<box_to(x+26,y+31);
    gout<<move_to(x+13,y+31)<<line_to(x+27,y+31);
    gout<<move_to(x+11,y+31)<<box_to(x+29,y+34);
    }
    if (fajta==2||fajta==9)//knight
    {
 if(fajta<7){gout<<color(200,0,0);}
 else{gout<<color(0,200,0);}
    gout<<move_to(x+20,y+6)<<line_to(x+25,y+6);
    gout<<move_to(x+18,y+7)<<line_to(x+27,y+7);
    gout<<move_to(x+16,y+8)<<line_to(x+26,y+8);
    gout<<move_to(x+15,y+9)<<line_to(x+28,y+9);
    gout<<move_to(x+14,y+10)<<line_to(x+30,y+10);
    gout<<move_to(x+13,y+11)<<line_to(x+30,y+11)<<move_to(x+26,y+11)<<box(4,3);
    gout<<move_to(x+13,y+12)<<line_to(x+21,y+12);
    gout<<move_to(x+14,y+13)<<line_to(x+21,y+13);
    gout<<move_to(x+13,y+14)<<line_to(x+21,y+14);
    gout<<move_to(x+14,y+15)<<line_to(x+21,y+15);
    gout<<move_to(x+13,y+16)<<line_to(x+22,y+16);
    gout<<move_to(x+27,y+12)<<dot<<move_to(x+22,y+12)<<dot;

    gout<<move_to(x+14,y+17)<<line_to(x+22,y+17);
    gout<<move_to(x+16,y+18)<<line_to(x+24,y+18);
    gout<<move_to(x+13,y+19)<<line_to(x+27,y+19);
    gout<<move_to(x+16,y+20)<<box_to(x+24,y+25);
    gout<<move_to(x+15,y+25)<<box_to(x+25,y+29);
    gout<<move_to(x+14,y+29)<<box_to(x+26,y+31);
    gout<<move_to(x+13,y+31)<<line_to(x+27,y+31);
    gout<<move_to(x+11,y+31)<<box_to(x+29,y+34);
    }
    if (fajta==3||fajta==10)//bishop
    {
         if(fajta<7){gout<<color(200,0,0);}
        else{gout<<color(0,200,0);}
    gout<<move_to(x+20,y+6)<<dot;
    gout<<move_to(x+19,y+7)<<box_to(x+21,y+9);
    gout<<move_to(x+18,y+9)<<box_to(x+22,y+11);
    gout<<move_to(x+17,y+11)<<box_to(x+23,y+13);
    gout<<move_to(x+16,y+13)<<box_to(x+24,y+15);
    gout<<move_to(x+17,y+15)<<box_to(x+23,y+19);
    gout<<move_to(x+13,y+20)<<line_to(x+27,y+20);
    gout<<move_to(x+16,y+19)<<box_to(x+24,y+25);
    gout<<move_to(x+15,y+25)<<box_to(x+25,y+29);
    gout<<move_to(x+14,y+29)<<box_to(x+26,y+31);
    gout<<move_to(x+13,y+31)<<line_to(x+27,y+31);
    gout<<move_to(x+11,y+31)<<box_to(x+29,y+34);
    }
    if (fajta==4||fajta==11)//queen
    {
         if(fajta<7){gout<<color(200,0,0);}
        else{gout<<color(0,200,0);}
    gout<<move_to(x+19,y+7)<<box_to(x+21,y+9);
    gout<<move_to(x+23,y+9)<<dot;
    gout<<move_to(x+19,y+2)<<box_to(x+21,y+4);
    gout<<move_to(x+16,y+10)<<line_to(x+16,y+6)<<line_to(x+18,y+10);
    gout<<line_to(x+20,y+6)<<line_to(x+22,y+10)<<line_to(x+24,y+6)<<line_to(x+24,y+10);
    gout<<move_to(x+16,y+10)<<box_to(x+24,y+12);
    gout<<move_to(x+17,y+12)<<box_to(x+23,y+14);
    gout<<move_to(x+17,y+13)<<box_to(x+23,y+18);
    gout<<move_to(x+18,y+14)<<line_to(x+22,y+14);
    gout<<move_to(x+13,y+14)<<line_to(x+27,y+14);
    gout<<move_to(x+16,y+18)<<box_to(x+24,y+21);
    gout<<move_to(x+15,y+21)<<box_to(x+25,y+25);
    gout<<move_to(x+14,y+25)<<box_to(x+26,y+29);
    gout<<move_to(x+13,y+29)<<box_to(x+27,y+31);
    gout<<move_to(x+12,y+31)<<line_to(x+28,y+31);
    gout<<move_to(x+10,y+31)<<box_to(x+30,y+34);
    }
    if (fajta==5||fajta==12)//king
    {
         if(fajta<7){gout<<color(200,0,0);}
        else{gout<<color(0,200,0);}
    gout<<move_to(x+19,y+1)<<box_to(x+21,y+7);
    gout<<move_to(x+17,y+3)<<box_to(x+23,y+5); //kereszt
    gout<<move_to(x+13,y+10)<<box_to(x+27,y+11);
    gout<<move_to(x+16,y+11)<<box_to(x+24,y+13);
    gout<<move_to(x+17,y+13)<<box_to(x+23,y+18);
    gout<<move_to(x+13,y+14)<<line_to(x+27,y+14);
    gout<<move_to(x+16,y+18)<<box_to(x+24,y+21);
    gout<<move_to(x+15,y+21)<<box_to(x+25,y+25);
    gout<<move_to(x+14,y+25)<<box_to(x+26,y+29);
    gout<<move_to(x+13,y+29)<<box_to(x+27,y+31);
    gout<<move_to(x+12,y+31)<<line_to(x+28,y+31);
    gout<<move_to(x+10,y+31)<<box_to(x+30,y+34);
    }


}
void babu::lehetseges(int fajta,int v[8][8])
{

   int a=x/z;int b=y/z;
    int r,h;
   //std::cout<<a<<' '<<b<<std::endl;
                x=x*z;
                y=y*z;
                x=x+3;
                y=y+7;
    if (fajta==0||fajta==7)//pawn
    {
       // std::cout<<v[b-1][a]<<std::endl;
        if(fajta==0)
        {
           if(v[b+1][a]>7||v[b+1][a]==-1)
           {
             r=a*z;
             h=(b+1)*z;
           }
           else{r=0;}
        }
        else
        {
        if(v[b-1][a]>7||v[b-1][a]==-1)
           {
             r=a*z;
             h=(b-1)*z;
           }
           else{r=0;}
            }
        if(r!=0)
            {

                gout<<move_to(r+1,h-1)<<color(0,0,250)<<line(z,0)<<line(0,z)<<line(-z,0)<<line(0,-z);
                gout<<move_to(r,h)<<color(0,0,250)<<line(z,0)<<line(0,z)<<line(-z,0)<<line(0,-z);
            }
    }
    if (fajta==1||fajta==8)//rook
    {
        if(fajta==1)
        {
//            for (int i=0;i<8;i++)
//            {
//                if(v[i][a]<0||v[i][a]>7)
//            }
        }
        else{}


    }
    if (fajta==2||fajta==9)//knight
    {

    if(fajta==2)
        {

        }
        else{}
    }
    if (fajta==3||fajta==10)//bishop
    {

    if(fajta==3)
        {

        }
        else{}
    }
    if (fajta==4||fajta==11)//queen
    {
        if(fajta==4)
        {

        }
        else{}

    }
    if (fajta==5||fajta==12)//king
    {

    if(fajta==5)
        {

        }
        else{}
    }
}

bool babu::igen(int b,int a,int o, int u,int v[8][8])
{
int fajta=v[b][a];
    if (fajta==0||fajta==7)//pawn
    {
        if(fajta==0)
        {
            if(b+1==o)
                {
                    if(a==u)

                    {    if(v[b+1][a]>6||v[b+1][a]==-1)
                        {
                            return true;
                        }
                        else{return false;}

                    }
                    else{
                            if(a-1==u||a+1==u)
                            {
                                if(v[b][a-1]>6)
                                {
                                    return true;
                                }
                                else{
                                if(v[b][a+1]>6)
                                {
                                    return true;
                                }
                                else{return false;}}

                            }
                    }
                    }else{return false;}
        }
        if(fajta==7)
        {
            if(b-1==o)
                {
                    if(a==u)

                    {    if(v[b-1][a]<7)
                        {
                            return true;
                        }
                        else{return false;}

                    }
                    else{
                            if(a-1==u||a+1==u)
                            {
                                if(v[b][a-1]>6)
                                {
                                    return false;
                                }
                                else{if(v[b][a+1]>6)
                                {
                                    return false;
                                }
                                else{return true;}}

                            }
                    }
                    }else{return false;}
                }
        }

    if (fajta==1||fajta==8)//rook
    {
        if(fajta==1)
        {

        }
        if(fajta==8)
        {
            for(int i=1;i<8;i++)
            {
            if(b-i==o)
            {

            }
            }
        }


    }
    if (fajta==2||fajta==9)//knight
    {

    if(fajta==2)
        {

        }
        else{}
    }
    if (fajta==3||fajta==10)//bishop
    {

    if(fajta==3)
        {

        }
        else{}
    }
    if (fajta==4||fajta==11)//queen
    {
        if(fajta==4)
        {

        }
        else{}

    }
    if (fajta==5||fajta==12)//king
    {

    if(fajta==5)
        {

        }
        else{}
    }
}

void babu:: kijelol(bool kijel, int fajta)
{
    if(kijel&&fajta>=0)
    {
    x=x*z;
    y=y*z;
    x=x+3;
    y=y+7;
    //std::cout<<kijel<<std::endl;
        gout<<move_to(x-2,y-6)<<color(0,0,250)<<line(z,0)<<line(0,z)<<line(-z,0)<<line(0,-z);
        gout<<move_to(x-3,y-7)<<color(0,0,250)<<line(z,0)<<line(0,z)<<line(-z,0)<<line(0,-z);
        //std::cout<<fajta<<std::endl;
       // kijel=false;

    }

}
void babu::esemeny(genv::event ev)
{

}
