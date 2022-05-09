#ifndef BABUK_H_INCLUDED
#define BABUK_H_INCLUDED

#include "graphics.hpp"
#include "widget.h"

class babu:public widget
{
protected:
    int fajta;
public:
    babu(int x, int y, int z)
    virtual void esemeny();
    virtual void rajz();

};

#endif // BABUK_H_INCLUDED
