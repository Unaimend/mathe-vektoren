#pragma once

namespace math
{

	class Vektor
	{
		friend double skalarprodukt(Vektor& lhs, Vektor& rhs);
		friend double kreuzprodukt(Vektor& lhs, Vektor& rhs);
		
	public:
		Vektor(double s1, double s2, double s3);
		
		Vektor operator*(double lhs);



    public:
        double v1;
        double v2;
        double v3;
    };
	Vektor operator+(const Vektor& rhs, const Vektor& lhs);
	Vektor operator-(const Vektor& rhs, const Vektor& lhs);
	

}
