#pragma once
#include "Vector.h"
namespace math
{
    class Gerade
    {

    public:
        Gerade(math::Vektor stuetz, math::Vektor richtungs);



    public:
        math::Vektor mStuetzVektor;
        math::Vektor mRichtungsVektor;
		double ding;
		math::Vektor getPoint();
    };


}
