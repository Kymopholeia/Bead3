#ifndef WIDGET_H_INCLUDED
#define WIDGET_H_INCLUDED

class widget
{
protected:
    int x,y,z;
public:
    widget(int x,int y,int z);
    virtual void rajz(int fajt)=0;
    virtual void esemeny(genv::event ev)=0;
    virtual bool actual(int ex, int ey);

};



#endif // WIDGET_H_INCLUDED
