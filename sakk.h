#ifndef SAKK_H_INCLUDED
#define SAKK_H_INCLUDED

#include <vector>
//#include <iostream>
class sakk
{
    int x,y,l;
    int melyik;
    std::vector<std::vector<int>> v{{{-1,-1,-1,-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1,-1,-1,-1}}};

public:
        bool kezd;
    sakk(int x, int y);
    void background();
    void bab();
    void kira();
    void esemeny(genv::event ev);

};
#endif // SAKK_H_INCLUDED
