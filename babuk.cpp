#include "graphics.hpp"
#include "babuk.h"
#include "iostream"

using namespace genv;
Babu::Babu(int x, int y, int z, int fajta) : Widget(x, y, z)
{
    this->fajta = fajta;
}

void Babu::rajz()
{
    x = x * z;
    y = y * z - 1;
    x = x + 3;
    y = y + 7;

    if (fajta == 0 || fajta == 7) // pawn
    {
      if (fajta < 7){gout << color(200, 0, 0);}
        else{ gout << color(0, 200, 0);}
        gout << move_to(x + 19, y + 10) << box_to(x + 21, y + 16);
        gout << move_to(x + 17, y + 12) << box_to(x + 23, y + 14);
        gout << move_to(x + 18, y + 11) << dot << move_to(x + 22, y + 15) << dot;
        gout << move_to(x + 22, y + 11) << dot << move_to(x + 18, y + 15) << dot;
        gout << move_to(x + 16, y + 17) << box_to(x + 24, y + 18);
        gout << move_to(x + 13, y + 19) << line_to(x + 27, y + 19);
        gout << move_to(x + 16, y + 20) << box_to(x + 24, y + 25);
        gout << move_to(x + 15, y + 25) << box_to(x + 25, y + 29);
        gout << move_to(x + 14, y + 29) << box_to(x + 26, y + 31);
        gout << move_to(x + 13, y + 31) << line_to(x + 27, y + 31);
        gout << move_to(x + 11, y + 31) << box_to(x + 29, y + 34);
    }
    if (fajta == 1 || fajta == 8) // rook
    {
        if (fajta < 7){gout << color(200, 0, 0);}
        else{ gout << color(0, 200, 0);}
        gout << move_to(x + 13, y + 10) << box(3, 2);
        gout << move_to(x + 18, y + 10) << box(4, 2);
        gout << move_to(x + 24, y + 10) << box(4, 2);
        gout << move_to(x + 13, y + 12) << box_to(x + 27, y + 14);
        gout << move_to(x + 14, y + 14) << box_to(x + 26, y + 16);
        gout << move_to(x + 15, y + 16) << box_to(x + 25, y + 18);
        gout << move_to(x + 13, y + 19) << line_to(x + 27, y + 19);
        gout << move_to(x + 16, y + 20) << box_to(x + 24, y + 25);
        gout << move_to(x + 15, y + 25) << box_to(x + 25, y + 29);
        gout << move_to(x + 14, y + 29) << box_to(x + 26, y + 31);
        gout << move_to(x + 13, y + 31) << line_to(x + 27, y + 31);
        gout << move_to(x + 11, y + 31) << box_to(x + 29, y + 34);
    }
    if (fajta == 2 || fajta == 9) // knight
    {
        if (fajta < 7){gout << color(200, 0, 0);}
        else{ gout << color(0, 200, 0);}
        gout << move_to(x + 20, y + 6) << line_to(x + 25, y + 6);
        gout << move_to(x + 18, y + 7) << line_to(x + 27, y + 7);
        gout << move_to(x + 16, y + 8) << line_to(x + 26, y + 8);
        gout << move_to(x + 15, y + 9) << line_to(x + 28, y + 9);
        gout << move_to(x + 14, y + 10) << line_to(x + 30, y + 10);
        gout << move_to(x + 13, y + 11) << line_to(x + 30, y + 11) << move_to(x + 26, y + 11) << box(4, 3);
        gout << move_to(x + 13, y + 12) << line_to(x + 21, y + 12);
        gout << move_to(x + 14, y + 13) << line_to(x + 21, y + 13);
        gout << move_to(x + 13, y + 14) << line_to(x + 21, y + 14);
        gout << move_to(x + 14, y + 15) << line_to(x + 21, y + 15);
        gout << move_to(x + 13, y + 16) << line_to(x + 22, y + 16);
        gout << move_to(x + 27, y + 12) << dot << move_to(x + 22, y + 12) << dot;

        gout << move_to(x + 14, y + 17) << line_to(x + 22, y + 17);
        gout << move_to(x + 16, y + 18) << line_to(x + 24, y + 18);
        gout << move_to(x + 13, y + 19) << line_to(x + 27, y + 19);
        gout << move_to(x + 16, y + 20) << box_to(x + 24, y + 25);
        gout << move_to(x + 15, y + 25) << box_to(x + 25, y + 29);
        gout << move_to(x + 14, y + 29) << box_to(x + 26, y + 31);
        gout << move_to(x + 13, y + 31) << line_to(x + 27, y + 31);
        gout << move_to(x + 11, y + 31) << box_to(x + 29, y + 34);
    }
    if (fajta == 3 || fajta == 10) // bishop
    {
        if (fajta < 7){gout << color(200, 0, 0);}
        else{ gout << color(0, 200, 0);}
        gout << move_to(x + 20, y + 6) << dot;
        gout << move_to(x + 19, y + 7) << box_to(x + 21, y + 9);
        gout << move_to(x + 18, y + 9) << box_to(x + 22, y + 11);
        gout << move_to(x + 17, y + 11) << box_to(x + 23, y + 13);
        gout << move_to(x + 16, y + 13) << box_to(x + 24, y + 15);
        gout << move_to(x + 17, y + 15) << box_to(x + 23, y + 19);
        gout << move_to(x + 13, y + 20) << line_to(x + 27, y + 20);
        gout << move_to(x + 16, y + 19) << box_to(x + 24, y + 25);
        gout << move_to(x + 15, y + 25) << box_to(x + 25, y + 29);
        gout << move_to(x + 14, y + 29) << box_to(x + 26, y + 31);
        gout << move_to(x + 13, y + 31) << line_to(x + 27, y + 31);
        gout << move_to(x + 11, y + 31) << box_to(x + 29, y + 34);
    }
    if (fajta == 4 || fajta == 11) // queen
    {
       if (fajta < 7){gout << color(200, 0, 0);}
        else{ gout << color(0, 200, 0);}
        gout << move_to(x + 19, y + 7) << box_to(x + 21, y + 9);
        gout << move_to(x + 23, y + 9) << dot;
        gout << move_to(x + 19, y + 2) << box_to(x + 21, y + 4);
        gout << move_to(x + 16, y + 10) << line_to(x + 16, y + 6) << line_to(x + 18, y + 10);
        gout << line_to(x + 20, y + 6) << line_to(x + 22, y + 10) << line_to(x + 24, y + 6) << line_to(x + 24, y + 10);
        gout << move_to(x + 16, y + 10) << box_to(x + 24, y + 12);
        gout << move_to(x + 17, y + 12) << box_to(x + 23, y + 14);
        gout << move_to(x + 17, y + 13) << box_to(x + 23, y + 18);
        gout << move_to(x + 18, y + 14) << line_to(x + 22, y + 14);
        gout << move_to(x + 13, y + 14) << line_to(x + 27, y + 14);
        gout << move_to(x + 16, y + 18) << box_to(x + 24, y + 21);
        gout << move_to(x + 15, y + 21) << box_to(x + 25, y + 25);
        gout << move_to(x + 14, y + 25) << box_to(x + 26, y + 29);
        gout << move_to(x + 13, y + 29) << box_to(x + 27, y + 31);
        gout << move_to(x + 12, y + 31) << line_to(x + 28, y + 31);
        gout << move_to(x + 10, y + 31) << box_to(x + 30, y + 34);
    }
    if (fajta == 5 || fajta == 12) // king
    {
        if (fajta < 7){gout << color(200, 0, 0);}
        else{ gout << color(0, 200, 0);}
        gout << move_to(x + 19, y + 1) << box_to(x + 21, y + 7);
        gout << move_to(x + 17, y + 3) << box_to(x + 23, y + 5); // kereszt
        gout << move_to(x + 13, y + 10) << box_to(x + 27, y + 11);
        gout << move_to(x + 16, y + 11) << box_to(x + 24, y + 13);
        gout << move_to(x + 17, y + 13) << box_to(x + 23, y + 18);
        gout << move_to(x + 13, y + 14) << line_to(x + 27, y + 14);
        gout << move_to(x + 16, y + 18) << box_to(x + 24, y + 21);
        gout << move_to(x + 15, y + 21) << box_to(x + 25, y + 25);
        gout << move_to(x + 14, y + 25) << box_to(x + 26, y + 29);
        gout << move_to(x + 13, y + 29) << box_to(x + 27, y + 31);
        gout << move_to(x + 12, y + 31) << line_to(x + 28, y + 31);
        gout << move_to(x + 10, y + 31) << box_to(x + 30, y + 34);
    }
    }


bool moz_ut(int babum, int masik)
{
    if (masik == -1)
        return true;
    if (babum < 7 && masik > 6 || babum > 6 && masik < 7)
        return true;
    return false;
}

bool Babu::mozoghat(int ux, int uy, int tabla[8][8])
{
    int tipusvolt = tabla[x][y];
    int tipuslesz = tabla[ux][uy];
    int mozx = ux - x;
    int mozy = uy - y;
    if (mozx == 0 && mozy == 0)return false;
    int lepx = mozx / abs(mozx);
    int lepy = mozy / abs(mozy);
    bool fehere = tipusvolt > 6;
    if (!moz_ut(tipusvolt, tipuslesz) || tipusvolt == -1)return false;
    if (tipusvolt == 0 || tipusvolt == 7) // pawn
    {
        if (abs(mozy) > 2)return false;
        if (fehere)
        {
            if (mozy > -1)return false;
            if (tipuslesz == -1)
            {
                if (mozx == 0 && mozy == -1)return true;
                if (y == 6 && mozx == 0 && mozy == -2) return true;
            }else{
                if (abs(mozx) == 1 && mozy == -1)return true;
                }
        }else{
            if (mozy < 1) return false;
            if (tipuslesz == -1)
            {
                if (mozx == 0 && mozy == 1) return true;
                if (y == 1 && mozx == 0 && mozy == 2)return true;
            }else {
                if (abs(mozx) == 1 && mozy == 1)return true;
            }
        }
        return false;}

    if (tipusvolt == 1 || tipusvolt == 8) // rook
    {
        if (mozx == 0)
        {
            for (int i = y + lepy; i != uy; i += lepy)
            {if (tabla[x][i] != -1)return false;
            }return true;
        }if (mozy == 0)
        {
            for (int i = x + lepx; i != ux; i += lepx)
            {if (tabla[i][y] != -1)return false;
            }return true;
        }
    }
    if (tipusvolt == 2 || tipusvolt == 9) // knight
    {
        if (abs(mozx) == 1 && abs(mozy) == 2)return true;
        if (abs(mozx) == 2 && abs(mozy) == 1)return true;
    }
    if (tipusvolt == 3 || tipusvolt == 10) // bishop
    {
        if (abs(mozx) != abs(mozy)) return false;
        for (int i = 1; i < abs(mozx); i++)
        {if (tabla[x + lepx * i][y + lepy * i] != -1) return false;
        }return true;
    }
    if (tipusvolt == 4 || tipusvolt == 11) // queen
    {
        if (abs(mozx) == abs(mozy))
        {
            for (int i = 1; i < abs(mozx); i++)
            {if (tabla[x + lepx * i][y + lepy * i] != -1)return false;
            }return true;
        }
        if (mozx == 0)
        {for (int i = y + lepy; i != uy; i += lepy)
            {if (tabla[x][i] != -1)return false;
            }return true;
        }
        if (mozy == 0)
        {
            for (int i = x + lepx; i != ux; i += lepx)
            {if (tabla[i][y] != -1)return false;
            }return true;
        }return false;
    }
    if (tipusvolt == 5 || tipusvolt == 12) // king
    {if (abs(x - ux) <= 1 && abs(y - uy) <= 1)
        {int jovo[8][8];
            for (int i = 0; i < 8; i++)
            {
                for (int j = 0; j < 8; j++)
                {jovo[i][j] = tabla[i][j];
                }
            }
            jovo[x][y] = -1;
            jovo[uy][ux] = tipusvolt;
            for (int i = 0; i < 8; i++)
            {
                for (int j = 0; j < 8; j++)
                {
                    int ellfig = jovo[i][j];
                    if (ellfig == -1)
                        continue;
                    if (tipusvolt == 5 && ellfig < 7)
                        continue;
                    if (tipusvolt == 12 && ellfig > 6)
                        continue;
                    if (fehere)
                    {if (ellfig == 5 && abs(i - ux) <= 1 && abs(j - uy) <= 1)return false;
                    }else{
                        if (ellfig == 12 && abs(i - ux) <= 1 && abs(j - uy) <= 1) return false;
                    }
                    Babu babu = Babu(i, j, z, ellfig);
                    if (babu.mozoghat(ux, uy, jovo))
                    {
                        if (ellfig == 0 || ellfig == 7)
                        {
                            if (abs(i - ux) != 1)continue;
                        }
                        return false;
                    }
                }
            }
            return true;
        }
    }
    return false;
}
