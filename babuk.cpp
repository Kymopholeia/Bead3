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
                            {//std::cout<<"wut"<<std::endl;
                                if(v[b+1][a-1]>6)
                                {
                                    return true;
                                }
                                else{
                                if(v[b+1][a+1]>6)
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
            if(b-1==o&&a-2<u&&a+2>u)
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
                                std::cout<<v[b-1][a-1]<<' '<<v[b-1][a+1]<<std::endl;
                                if(v[b-1][a-1]<7&&v[b-1][a-1]>-1)
                                {
                                    return true;
                                }
                                else{
                                if(v[b-1][a+1]<7&&v[b-1][a+1]>-1)
                                {
                                    return true;
                                }
                                else{return false;}
                                }


                            }
                    }
                    }else{return false;}
                }
        }

    if (fajta==1||fajta==8)//rook
    {
      //  bool k=0;
        if(fajta==1)
        {
            std::cout<<v[b][a]<<std::endl;
            for(int i=a+1;i<u;i++)if(v[b][i]<7&&v[b][i]!=-1)return false;
            for(int i=a-1;i>u;i++)if(v[b][i]<7&&v[b][i]!=-1)return false;
            for(int i=b+1;i<o;i++)if(v[i][a]<7&&v[i][a]!=-1)return false;
            for(int i=b-1;i>o;i++)if(v[i][a]<7&&v[i][a]!=-1)return false;
            if((a==u||b==o)&&(v[o][u]>7||v[o][u]==-1)){return true;}
            else{return false;}
        }
        if(fajta==8)
        {
            //std::cout<<v[b][a]<<std::endl;
            bool he1=false;
            bool he2=false;
            bool he3=false;
            bool he4=false;
            for(int i=a+1;i<=u;i++){if(v[b][i]>6&&v[b][i]!=-1){std::cout<<"1"<<' '<<v[b][i]<<' '<<i<<' '<<u<<' '<<b<<std::endl;i=u;he1=true;}}
            for(int i=a-1;i>=u;i--){if(v[b][i]>6&&v[b][i]!=-1){std::cout<<"2"<<' '<<v[b][i]<<' '<<i<<' '<<u<<' '<<b<<std::endl;i=u;he2=true;}}
            for(int i=b+1;i<=o;i++){if(v[i][a]>6&&v[i][a]!=-1){std::cout<<"3"<<' '<<v[i][a]<<' '<<i<<' '<<o<<' '<<b<<std::endl;i=o;he3=true;}}
            for(int i=b-1;i>=o;i--){if(v[i][a]>6&&v[i][a]!=-1){std::cout<<"4"<<' '<<v[i][a]<<' '<<i<<' '<<o<<' '<<b<<std::endl;i=o;he4=true;}}
            if(!he1&&!he2&&!he3&&!he4){
            if((a==u||b==o)&&(v[o][u]<7||v[o][u]==-1)){return true;}else{return false;}}else{return false;}

        }
//            if(a!=u&&b!=o)return false;
//            int p=0;
//            if(fajta==1)
//            {
//                if((a>u||a<u)&&b==o)
//                {
//                int zzx=(u-a)/std::abs(a-u);
//                if(v[b][a+zzx]>6&&v[b][a+zzx]!=-1){p++;}
//                if(v[b][a+zzx]<7&&v[b][a+zzx]!=-1){p++;}
//                }
//                if((b>o||b<o)&&a==u)
//                {
//                int zzy=(o-b)/std::abs(b-o);
//                if(v[b+zzy][a]>6&&v[b+zzy][a]!=-1){p++;}
//                if(v[b+zzy][a]<7&&v[b+zzy][a]!=-1){p++;}
//                }
//                if((v[o][u]>6||v[o][u]==-1)&&p<1)return true;
//                if((v[o][u]<7&&v[o][u]!=-1)||p!=0){return false;}
//            }
//            if(fajta==8)
//            {
//                    if((a>u||a<u)&&b==o)
//                    {
//                    int zzx=(u-a)/std::abs(a-u);
//                    if(v[b][a+zzx]<7&&v[b][a+zzx]!=-1){p++;}
//                    if(v[b][a+zzx]>6&&v[b][a+zzx]!=-1){p++;}
//                    }
//                    if((b>o||b<o)&&a==u)
//                    {
//                    int zzy=(o-b)/std::abs(b-o);
//                    if(v[b+zzy][a]<7&&v[b+zzy][a]!=-1){p++;}
//                    if(v[b+zzy][a]>6&&v[b+zzy][a]!=-1){p++;}
//                    }
//                    if((v[o][u]<7||v[o][u]==-1)&&p<1)return true;
//                    if((v[o][u]>6&&v[o][u]!=-1)||p!=0){return false;}
//
//            }
//    }
//        {bool he;
//            int p=0;
//            if(a!=u&&b!=o)return false;
//            if(fajta==1){
//            if(a==u)
//            {if((o>b&&(u<a||u>a))||(o<b&&(u<a||u>a)))return false;
//            if(v[o][a]<7&&v[o][a]>-1)return false;
//            if(v[o][a]>6||v[o][a]==-1)
//            {
//            if(o>=b)
//            {for(int i=b+1;i<=o;i++)
//            {
//                if(v[i][a]<7&&v[i][a]>-1){he=true;}
//                if(v[i][a]>6&&v[i][a]!=-1){p++;}
//                if(p>1){he=true;}
//                if(p==1&&o-b>1){he=true;}
//            }
//            }
//            if(b>=o)
//            {
//                for(int i=b-1;i>=o;i--)
//                {
//                if(v[i][a]<7&&v[i][a]>-1){he=true;}
//                if(v[i][a]>6&&v[i][a]!=-1){p++;}
//                if(p>1){he=true; std::cout<<he<<std::endl;}
//                if(p==1&&b-o>1){he=true;}
//                }
//            }
//            }
//
//            if((v[o][a]>6||v[o][a]==-1)&&!he)return true;
//            if(v[o][a]<7||he)return false;
//
//            }else{
//            if(v[b][u]>6||v[b][u]==-1)
//            {if(u>=a)
//            {
//
//                for(int i=a+1;i<=u;i++)
//                {
//
//                if(v[b][i]<7&&v[b][i]>-1){he=true;}///saját csapat
//                if(v[b][i]>6){p++;}///ne ugorjon át többet
//                if(p>1){he=true;}
//                if(p==1&&u-a>1){he=true;}
//                }
//            }
//            if(a>=u)
//            {for(int i=a-1;i>=u;i--)
//                {
//
//                if(v[b][i]<7&&v[b][i]>-1){he=true;}
//                if(v[b][i]>6){p++;}
//                if(p>1){he=true;}
//                if(p==1&&a-u>1){he=true;}
//                }
//            }
//
//            }
//
//            if((v[b][u]>6||v[b][u]==-1)&&!he)return true;
//            else {return false;}
//        }
//            }
//
//        if(fajta==8)
//
//        {
//             int p=0;
//             if(a!=u&&b!=o)return false;
//            if(a==u)
//            {if((o>b&&(u<a||u>a))||(o<b&&(u<a||u>a)))return false;
//            if(v[o][a]>6)return false;
//            if(v[o][a]<6||v[o][a]==-1)
//            {
//            if(o>=b)//std::cout<<"hehe"<<std::endl;
//            {for(int i=b+1;i<=o;i++)
//            {
//                if(v[i][a]>6){he=true;}
//                if(v[i][a]<6&&v[i][a]!=-1){p++;}///}
//                if(p>1){he=true;}
//                if(p==1&&o-b>1){he=true;}
//                std::cout<<he<<std::endl;
//            }
//            }
//            if(b>=o)
//            {
//                for(int i=b-1;i>=o;i--)
//                {
//                    if(v[i][a]>6){he=true;}
//                  if(v[i][a]<6&&v[i][a]!=-1){p++;}
//                if(p>1){he=true;}
//                if(p==1&&b-o>1){he=true;}
//                }
//            }
//            }
//
//            if(v[o][a]<7&&!he)return true;
//            if(v[o][a]>7||he)return false;
//
//            }else{
//            if(v[b][u]<6)
//            {if(u>=a)
//            {
//                for(int i=a+1;i<=u;i++)
//                {
//                    if(v[b][i]>6){he=true;}
//                if(v[b][i]<6&&v[b][i]!=-1){p++;}///}
//                if(p>1){he=true;}
//                if(p==1&&u-a>1){he=true;}
//                }
//            }
//            if(a>=u)
//            {for(int i=a-1;i>=u;i--)
//                {
//                    if(v[b][i]>6){he=true;}
//                if(v[b][i]<6&&v[b][i]!=-1){p++;}
//                if(p>1){he=true;}
//                if(p==1&&a-u>1){he=true;}
//                }
//            }
//
//            }
//            if(v[b][u]<7&&!he)return true;
//            else {return false;}
//        }
//        }

//{if((a==u||b==u)&&(std::abs(b-o)!=std::abs(a-u)))
//{int ii;int p=0;
//            if(fajta==1){if(std::abs(a-u)>0){ ii=std::abs(a-u);}else{ii=std::abs(b-o);};
//            int zzx=(u-a)/ii;
//            int zzy=(o-b)/ii;
//            int ee=zzx;
//            int ez=zzy;
//            std::cout<<"itt"<<std::endl;
//                if(std::abs(a-u)>1&&std::abs(b-o)==0){
//                if(std::abs(a-u)==1)ii=2;
//                for(int i=1;i<ii;i++)
//                {
//                if((a>u||a<u)&&b==o)
//                {
//                if(v[b][a+zzx]>6&&v[b][a+zzx]!=-1){p++;}
//                if(v[b][a+zzx]<7&&v[b][a+zzx]!=-1){p++;}
//                }
//                }
//                }
//                if(std::abs(b-o)>1&&std::abs(a-u)==0){
//                if(std::abs(b-o)==1)ii=2;
//                for(int i=1;i<ii;i++)
//                {
//                if((b>o||b<o)&&a==u)
//                {
//                if(v[b+zzy][a]>6&&v[b+zzy][a]!=-1){p++;}
//                if(v[b+zzy][a]<7&&v[b+zzy][a]!=-1){p++;}
//                }
//                std::cout<<p<<std::endl;
//                }
//                if((v[o][u]>6||v[o][u]==-1)&&p<1)return true;
//                if((v[o][u]<7&&v[o][u]!=-1)||p!=0){return false;}
//                zzx+=ee;
//                zzy+=ez;
//                }
//            }
//            if(fajta==8)
//            {
//                    if((a>u||a<u)&&b==o)
//                    {
//                    int zzx=(u-a)/std::abs(a-u);
//                    if(v[b][a+zzx]<7&&v[b][a+zzx]!=-1){p++;}
//                    if(v[b][a+zzx]>6&&v[b][a+zzx]!=-1){p++;}
//                    }
//                    if((b>o||b<o)&&a==u)
//                    {
//                    int zzy=(o-b)/std::abs(b-o);
//                    if(v[b+zzy][a]<7&&v[b+zzy][a]!=-1){p++;}
//                    if(v[b+zzy][a]>6&&v[b+zzy][a]!=-1){p++;}
//                    }
//                    if((v[o][u]<7||v[o][u]==-1)&&p<1)return true;
//                    if((v[o][u]>6&&v[o][u]!=-1)||p!=0){return false;}
//            }
//            }
//        }
//    if (fajta==2||fajta==9)//knight
//    {std::cout<<a<<' '<<b<<' '<<u<<' '<<o<<std::endl;
////            if(a+2==u||a-2==u||b+2==o||b-2==o)
//                if((a+2==u&&b+1==o)||(a+1==u&&b+2==o)||(a+2==u&&b-1==o)||(a+1==u&&b-2==o)||(a-2==u&&b+1==o)||(a-1==u&&b-2==o)||(a-2==u&&b-1==o)||(a-1==u&&b+2==o))
//            {
//                if(a==u||b==o){return false;}
//                if(fajta==2)
//                {
//                if(v[o][u]<7&&v[o][u]>-1){return false;}
//                if(v[o][u]>6||v[o][u]==-1){return true;}
//                }
//                if(fajta==9)
//                {
//                if(v[o][u]>6){return false;}
//                if(v[o][u]<7||v[o][u]==-1){return true;}
//                }
//
//            }else{return false;}
   }
    if (fajta==3||fajta==10)//bishop
    {
        bool tt;
        int p=0;
            if(std::abs(b-o)!=std::abs(a-u))return false;
            else{if(abs(a-u)>0){
                            int zzx=(u-a)/std::abs(a-u);
                            int  zzy=(o-b)/std::abs(a-u);
                            int uu=zzx;int yiy=zzy;
                            int ii=std::abs(a-u);
                            if(std::abs(a-u)==1)ii=ii+1;
                        for(int i=1;i<ii;i++)
                        {
                            if(fajta==3)
                            {
                            if(v[b+zzy][a+zzx]>6&&v[b+zzy][a+zzx]!=-1){p++;}
                            if(v[b+zzy][a+zzx]<7&&v[b+zzy][a+zzx]!=-1){p++;}
                            if(v[o][u]>6&&p<1)tt=true;
                            if((v[o][u]<7&&v[o][u]!=-1)||p!=0){tt=false;}
                            else{tt=true;}
                            }
                            if(fajta==10)
                            {
                            if(v[b+zzy][a+zzx]<7&&v[b+zzy][a+zzx]!=-1){p++;}
                            if(v[b+zzy][a+zzx]>6&&v[b+zzy][a+zzx]!=-1){p++;}
                            if(v[o][u]<7&&p<1)tt=true;
                            if((v[o][u]>6&&v[o][u]!=-1)||p!=0){tt=false;}
                            else{tt=true;}
                            }
                            zzx=zzx+uu;
                            zzy=zzy+yiy;
                        }
                        std::cout<<"     "<<v[b+zzy][a+zzx]<<std::endl<<std::endl;;
                        if(tt)return true;
                        else{return false;}

                        }
                }
    }
    if (fajta==4||fajta==11)//queen
    {
        bool tt;
        int p=0;
        if(!(std::abs(b-o)==std::abs(a-u)||a==u||b==u))return false;
        //std::cout<<(std::abs(b-o)==std::abs(a-u))<<' '<<a<<' '<<u<<' '<<b<<' '<<o<<std::endl;
        if(std::abs(b-o)==std::abs(a-u))
        { if(std::abs(a-u)>0)
        {
            int zzx=(u-a)/std::abs(a-u);
            int  zzy=(o-b)/std::abs(a-u);
            int uu=zzx;int yiy=zzy;
            int ii=std::abs(a-u);
                if(std::abs(a-u)==1)ii=ii+1;
                for(int i=1;i<ii;i++)
                {
                    if(fajta==4)
                    {
                        if(v[b+zzy][a+zzx]>6&&v[b+zzy][a+zzx]!=-1){p++;}
                        if(v[b+zzy][a+zzx]<7&&v[b+zzy][a+zzx]!=-1){p++;}
                        if(v[o][u]>6&&p<1)tt=true;
                        if((v[o][u]<7&&v[o][u]!=-1)||p!=0){tt=false;}
                    else{tt=true;}
                    }
                        if(fajta==11)
                        {
                        if(v[b+zzy][a+zzx]<7&&v[b+zzy][a+zzx]!=-1){p++;}
                        if(v[b+zzy][a+zzx]>6&&v[b+zzy][a+zzx]!=-1){p++;}
                        if(v[o][u]<7&&p<1)tt=true;
                        if((v[o][u]>6&&v[o][u]!=-1)||p!=0){tt=false;}
                        else{tt=true;}
                        }
                zzx=zzx+uu;
                zzy=zzy+yiy;
                }
                if(tt)return true;
                else{return false;}
        }
        }
        else
        {
            if(fajta==4)
        {
            std::cout<<v[b][a]<<std::endl;
            for(int i=a+1;i<u;i++)if(v[b][i]<7&&v[b][i]!=-1)return false;
            for(int i=a-1;i>u;i++)if(v[b][i]<7&&v[b][i]!=-1)return false;
            for(int i=b+1;i<o;i++)if(v[i][a]<7&&v[i][a]!=-1)return false;
            for(int i=b-1;i>o;i++)if(v[i][a]<7&&v[i][a]!=-1)return false;
            if((a==u||b==o)&&(v[o][u]>7||v[o][u]==-1)){return true;}
            else{return false;}
        }
        if(fajta==11)
        {
            std::cout<<v[b][a]<<std::endl;
            for(int i=a+1;i<u;i++){if(v[b][i]>6&&v[b][i]!=-1)return false;}
            for(int i=a-1;i>u;i--){if(v[b][i]>6&&v[b][i]!=-1)return false;}
            for(int i=b+1;i<o;i++)if(v[i][a]>6&&v[i][a]!=-1)return false;
            for(int i=b-1;i>o;i--)if(v[i][a]>6&&v[i][a]!=-1)return false;
            if((a==u||b==o)&&(v[o][u]>6||v[o][u]==-1)){return true;}
            else{return false;}
        }
//            if(a==u||b==u){int ii;
//            if(fajta==4){if(std::abs(a-u)>0){ ii=std::abs(a-u);}else{ii=std::abs(b-o);};
//            int zzx=(u-a)/ii;
//            int zzy=(o-b)/ii;
//            int ee=zzx;
//            int ez=zzy;
//            std::cout<<"itt"<<std::endl;
//                if(std::abs(a-u)>1&&std::abs(b-o)==0){
//                //if(std::abs(a-u)==1)ii=2;
//                for(int i=1;i<ii;i++)
//                {
//                if((a>u||a<u)&&b==o)
//                {
//                if(v[b][a+zzx]>6&&v[b][a+zzx]!=-1){p++;}
//                if(v[b][a+zzx]<7&&v[b][a+zzx]!=-1){p++;}
//                }
//                }
//                }
//                if(std::abs(b-o)>1&&std::abs(a-u)==0){
//                //if(std::abs(b-o)==1)ii=2;
//                for(int i=1;i<ii;i++)
//                {
//                if((b>o||b<o)&&a==u)
//                {
//                if(v[b+zzy][a]>6&&v[b+zzy][a]!=-1){p++;}
//                if(v[b+zzy][a]<7&&v[b+zzy][a]!=-1){p++;}
//                }
//                std::cout<<p<<std::endl;
//                }
//                if((v[o][u]>6||v[o][u]==-1)&&p<1)return true;
//                if((v[o][u]<7&&v[o][u]!=-1)||p!=0){return false;}
//                zzx+=ee;
//                zzy+=ez;
//                }
//            }
//            }
//            if(fajta==11)
//            {
//                    if((a>u||a<u)&&b==o)
//                    {
//                    int zzx=(u-a)/std::abs(a-u);
//                    if(v[b][a+zzx]<7&&v[b][a+zzx]!=-1){p++;}
//                    if(v[b][a+zzx]>6&&v[b][a+zzx]!=-1){p++;}
//                    }
//                    if((b>o||b<o)&&a==u)
//                    {
//                    int zzy=(o-b)/std::abs(b-o);
//                    if(v[b+zzy][a]<7&&v[b+zzy][a]!=-1){p++;}
//                    if(v[b+zzy][a]>6&&v[b+zzy][a]!=-1){p++;}
//                    }
//                    if((v[o][u]<7||v[o][u]==-1)&&p<1)return true;
//                    if((v[o][u]>6&&v[o][u]!=-1)||p!=0){return false;}
//
//            }
        }
        }
if (fajta==5||fajta==12)//king
    {
        if((a+1==u&&(b-1==o||b==o||b+1==o))||(a-1==u&&(b-1==o||b==o||b+1==o))||a==u&&(b-1==o||b+1==o))
        {std::cout<<a<<' '<<b<<' '<<u<<' '<<o<<std::endl;
            if(fajta==5)
            {
                if(v[o][u]<7&&v[o][u]!=-1)return false;
                else{return true;}
            }
            if(fajta==12)
            {
                if(v[o][u]>6)return false;
                else{return true;}
            }
        }
        else{return false;}
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
        gout<<move_to(x-2,y-6)<<color(0,0,250)<<line(z,0)<<line(0,z)<<line(-z,0)<<line(0,-z);
        gout<<move_to(x-3,y-7)<<color(0,0,250)<<line(z,0)<<line(0,z)<<line(-z,0)<<line(0,-z);
    }

}
void babu::esemeny(genv::event ev)
{

}
