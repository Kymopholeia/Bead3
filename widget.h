#ifndef WIDGET_H_INCLUDED
#define WIDGET_H_INCLUDED

class Widget
{
protected:
    int x, y, z;

public:
    Widget(int x, int y, int z);
    virtual void rajz() = 0;
    bool actual(int ex, int ey);
};

#endif // WIDGET_H_INCLUDED
