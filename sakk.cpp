#include "graphics.hpp"
#include "widget.h"
#include "babuk.h"
#include "sakk.h"
#include <vector>
#include <iostream>

using namespace genv;
Sakk::Sakk(int meret) : meret(meret)
{
    doboz = (meret) / 8;
    kezd = true;
    for (int i = 0; i < 8; i++)
    {for (int j = 0; j < 8; j++)
        {v[i][j] = -1;}
    }
    int k = 0;
    int p = 1;
    while (k < 8)
    {
        v[0][k] = p;
        v[1][k] = p + 1;
        v[2][k] = p + 2;
        v[3][k] = p + 3;
        v[4][k] = p + 4;
        v[5][k] = p + 2;
        v[6][k] = p + 1;
        v[7][k] = p;
        k += 7;p += 7;
    }

    for (int i = 0; i < 8; i++)
    {
        v[i][1] = 0;
        v[i][6] = 7;
    }
}

void Sakk::artmaster()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            genv::color szin = genv::color(0, 0, 0);
            if ((i + j) % 2 == 0)
            {szin = genv::color(255, 255, 255);}
            gout << move_to(i * doboz, j * doboz) << szin << box(doboz, doboz);
        }
    }
    if (kx != -1 && ky != -1)
    {
        gout << move_to(kx * doboz, ky * doboz) << color(0, 0, 255) << line(doboz, 0) << line(0, doboz) << line(-doboz, 0) << line(0, -doboz);
        gout << move_to(kx * doboz + 1, ky * doboz + 1) << color(255, 0, 0) << line(doboz - 2, 0) << line(0, doboz - 2) << line(-doboz + 2, 0) << line(0, -doboz + 2);
        Babu babu = Babu(kx, ky, doboz, v[kx][ky]);
        for (int i = 0; i < 8; i++)
        {
                for (int j = 0; j < 8; j++)
            {
                if (v[kx][ky] && babu.mozoghat(i, j, v))
                {
                gout << move_to(i * doboz, j * doboz) << color(255, 0, 0) << line(doboz, 0) << line(0, doboz) << line(-doboz, 0) << line(0, -doboz);
                    gout << move_to(i * doboz+1, j * doboz+1) << color(0, 0, 255) << line(doboz-1, 0) << line(0, doboz-2) << line(-doboz-1, 0) << line(0, -doboz-2);
                }
            }
        }
    }
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            Babu babu(i, j, doboz, v[i][j]);
            babu.rajz();
        }
    }
}
void Sakk::esemeny(genv::event ev)
{
    if (ev.type == ev_mouse && (ev.button == btn_left || ev.button == btn_right))
    {
        int ex = ev.pos_x;
        int ey = ev.pos_y;
        int mezoX = ex / doboz;
        int mezoY = ey / doboz;

        if (ev.button == btn_left)
        {
            kx = -1;
            ky = -1;
            int figura = v[mezoX][mezoY];
            if (figura != -1)
            {
                if (fj && figura > 6 || !fj && figura < 7)
                {
                    kx = mezoX;
                    ky = mezoY;
                }
            }
        }

        if (ev.button == btn_right && kx != -1 && ky != -1)
        {
            Babu babu(kx, ky, doboz, v[mezoX][mezoY]);
            if (babu.mozoghat(mezoX, mezoY, v))
            {
                v[mezoX][mezoY] = v[kx][ky];
                v[kx][ky] = -1;
                kx = -1;
                ky = -1;
                fj = !fj;
            }
        }

        artmaster();
    }
}
int Sakk::sakkMatt()
{
    bool fehhal = true;
    bool fekhal = true;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (v[i][j] == 12)
            {
                fehhal = false;
            }
        }
    }
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (v[i][j] == 5)
            {
                fekhal = false;
            }
        }
    }

    if (fehhal)return -1;

    else if (fekhal)return 1;

    else return 0;

}
