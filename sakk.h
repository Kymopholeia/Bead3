#ifndef SAKK_H_INCLUDED
#define SAKK_H_INCLUDED

#include <vector>

class Sakk
{
    int meret, doboz;
    int v[8][8] = {-1};
    int kx, ky = -1;
    bool fj = true;

public:
    bool kezd;
    Sakk(int meret);
    void artmaster();
    void esemeny(genv::event ev);
    int sakkMatt();
};
#endif // SAKK_H_INCLUDED
