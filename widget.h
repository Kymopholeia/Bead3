#ifndef WIDGET_H_INCLUDED
#define WIDGET_H_INCLUDED

class widget
{
protected:
    int x,y,z;
public:
    widget(int x,int y,int z);
    virtual void rajz()=0;
    virtual void esemeny(genv::event ev)=0;

};



#endif // WIDGET_H_INCLUDED
