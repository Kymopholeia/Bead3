#ifndef BABUK_H_INCLUDED
#define BABUK_H_INCLUDED

#include "graphics.hpp"
#include "widget.h"

class babu: public widget
{
protected:
    int fajt;

public:
    bool kijel;
    babu(int x, int y, int z);
    virtual void esemeny(genv::event ev);
    virtual void rajz(int fajta);
    void kijelol(bool kijel,int fajta);
    void lehetseges(int fajta,int v[8][8]);
    bool igen(int a,int b,int o, int u,int v[8][8]);

};

#endif // BABUK_H_INCLUDED
