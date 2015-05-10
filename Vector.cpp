#include "Vector.h"

namespace math
{
	Vektor::Vektor(double s1, double s2, double s3)
		: v1(s1), v2(s2), v3(s3)
	{



	}



	Vektor Vektor::operator*(double lhs)
	{

		return Vektor(v1*lhs, v2*lhs, v3*lhs);
	
	}

	Vektor operator+(const Vektor& rhs, const Vektor& lhs)
	{
	
		return math::Vektor(rhs.v1 + lhs.v1, rhs.v2 + lhs.v2, rhs.v3 + lhs.v3);
	}

	Vektor operator-(const Vektor& rhs, const Vektor& lhs)
	{

		return math::Vektor(lhs.v1 - rhs.v1, lhs.v2 - rhs.v2, lhs.v3 - rhs.v3);
	}
}
