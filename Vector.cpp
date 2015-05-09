#include "Vector.h"

namespace math
{
	Vektor::Vektor(double s1, double s2, double s3)
		: v1(s1), v2(s2), v3(s3)
	{



	}
	double skalarprodukt(Vektor& lhs, Vektor& rhs)
	{
		return (lhs.v1 * rhs.v1 + lhs.v2 * rhs.v2 + lhs.v3 * rhs.v3);
	}

	double kreuzprodukt(Vektor& lhs, Vektor& rhs)
	{

		return 5.0;
	}

	bool linearAbhaengig2Vek(const Vektor& rhs, const Vektor& lhs)
	{
		/*
		2 =	t	6
		5 =	t	2
		1 =	t	3
		*/
		double t1;
		double t2;
		double t3;
		t1 = rhs.v1 / lhs.v1;
		t2 = rhs.v2 / lhs.v2;
		t3 = rhs.v3 / lhs.v3;
		if ((t1 == t2) && (t1 == t3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		
	}

	bool istIdentisch(const Vektor& rhs, const Vektor& lhs)
	{
		/*
			g1: x = (1) + s*(2)
					(4) + s*(5)
					(5) + s*(4)

			g2: x = (5) + s*(8)
					(3) + s*(6)
					(1) + s*(2)
			
			LGS:
			5  = 1 + s*2
			3  = 4 + s*5
			4  = 5 + s*4

			5  = 1 + 2s | -1
			3  = 4 + 5s | -4
			4  = 5 + 4s | -5
		
			4  = 2s |/2 
		   -1  = 5s |/5
		   -1  = 4s |/4

		    2  =s
		 -1/5  =s }ECHT PARALLEL w'ren die s gleich waeren die geraden identisch
		-0.25  =s	

					*/

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
