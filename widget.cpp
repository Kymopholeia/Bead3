#include "graphics.hpp"
#include "widget.h"


widget::widget(int _x, int _y, int _z):x(_x),y(_y),z(_z)
{

}

bool widget::actual(int ex, int ey)
{
 return ex>=x*z && ex<=x*z+z && ey>y*z &&ey<y*z+z;
}
