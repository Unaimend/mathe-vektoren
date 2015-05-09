#include "Gerade.h"

namespace math
{
    Gerade::Gerade(math::Vektor stuetz, math::Vektor richtungs)
    : mStuetzVektor(stuetz), mRichtungsVektor(richtungs)
    {


    }

	math::Vektor  Gerade::getPoint()
	{


		return math::Vektor(1, 2, 3);
	}
}
