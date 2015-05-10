#include "functions.h"
namespace math
{
	double skalarprodukt(math::Vektor& lhs, math::Vektor& rhs)
	{
		return (lhs.v1 * rhs.v1 + lhs.v2 * rhs.v2 + lhs.v3 * rhs.v3);
	}

	double kreuzprodukt(math::Vektor& lhs, math::Vektor& rhs)
	{

		return 5.0;
	}

	bool linearAbhaengig2Vek(const  math::Vektor& rhs, const    math::Vektor& lhs)
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
			return 1; //LA
		}
		else
		{
			return 0; //LU
		}

	}

	bool istIdentisch(const  math::Vektor& g1_stuetzvektor, const  math::Gerade& g2)
	{
		//1 = IDENTISCH
		//0 - ECHT PARRALEL

		
		double s1;
		double s2;
		double s3;

		if (g2.mStuetzVektor.v1 < 0)
		{
			s1 = g1_stuetzvektor.v1 + g2.mStuetzVektor.v1;
		}
		else
		{
			 s1 = g1_stuetzvektor.v1 - g2.mStuetzVektor.v1;
		}

		if (g2.mStuetzVektor.v2 < 0)
		{
			s1 = g1_stuetzvektor.v2 + g2.mStuetzVektor.v2;
		}
		else
		{
			 s2 = g1_stuetzvektor.v2 - g2.mStuetzVektor.v2;
		}

		if (g2.mStuetzVektor.v3 < 0)
		{
			s1 = g1_stuetzvektor.v3 + g2.mStuetzVektor.v3;
		}
		else
		{
			 s3 = g1_stuetzvektor.v3 - g2.mStuetzVektor.v3;
		}
		
		
		

		s1 = s1 / g2.mRichtungsVektor.v1;
		s2 = s2 / g2.mRichtungsVektor.v2;
		s3 = s3 / g2.mRichtungsVektor.v3;


		if ((s1 == s2) && (s1 == s3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
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
		-1/5  =s }ECHT PARALLEL. waeren die s gleich waeren die geraden identisch
		-0.25  =s

		*/
	
	}

	bool istWindschief(const  math::Gerade& g1, const  math::Gerade& g2)
	{

		//BUG: WAS IST WENN g2 NEGATIV WERDE HAT o.O
		//DIVISOR 0
		double s1, s2, s3;
		if (g1.mStuetzVektor.v1 < 0)
		{
			s1 = g2.mStuetzVektor.v1 + g1.mStuetzVektor.v1;
		}
		else
		{
			s1 = g2.mStuetzVektor.v1 - g1.mStuetzVektor.v1;
		}

		if (g1.mStuetzVektor.v2 < 0)
		{
			s2 = g2.mStuetzVektor.v2 + g1.mStuetzVektor.v2;
		}
		else
		{
			s2 = g2.mStuetzVektor.v2 - g1.mStuetzVektor.v2;
		}

		if (g1.mStuetzVektor.v3 < 0)
		{
			s3 = g2.mStuetzVektor.v3 + g1.mStuetzVektor.v3;
		}
		else
		{
			s3 = g2.mStuetzVektor.v3 - g1.mStuetzVektor.v3;
		}

		double mul = g1.mRichtungsVektor.v2 / g1.mRichtungsVektor.v1;

		

		//s1 = g2.Rich *x + g1.richtungs*y
		//-9 = 4*x + 5*y



		/*
		g1: x = (6) + s*(4)
				(3) + s*(2)
				(2) + s*(-1)

		g2: x = (-3) + t*(5)
				(3) + t*(-2)
				(0) + t*(3)
		LGS:
			6 + s* 4 = -3 + t* 5 | -6
			3 + s* 2 =  3 + t*-2 | -3
			2 + s*-1 =  0 + t* 3 | -2

			s* 4 = -9  + t* 5
			s* 2 =  0  + t*-2
			s*-1 = -2  + t* 3

			4s = -9  +  5t | -5t
			2s =  0  + -2t | +2t
		   -1s = -2  +  3t | -3t

		    4s - 5t  = -9
			2s + 2t	 =  0
		   -1s - 3t	 = -2

		*/
		return 1;
	};
}