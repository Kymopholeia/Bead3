#include "graphics.hpp"
using namespace genv;

const int XX=400;
const int YY=400;
int main()
{
    gout.open(XX,YY);
    gout <<text("hello world")<< refresh;
    event ev;
    while(gin >> ev) {
    }
    return 0;
}
