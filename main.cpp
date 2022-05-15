#include "graphics.hpp"
#include "sakk.h"
#include "babuk.h"
#include "widget.h"
#include <iostream>

using namespace genv;

const int XX=401;
const int YY=401;
int xx=XX;
int yy=YY;
int main()
{
gout.open(XX,YY);
event ev;
sakk s(xx,yy);
s.background();
    while(gin >> ev&&ev.keycode!=key_escape) {
                s.bab();
                s.kira();
                s.esemeny(ev);

gout<<refresh;
    }
    return 0;
}
