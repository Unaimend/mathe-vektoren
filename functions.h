#include "Mathe.h"
#include <iostream>
namespace math
{
	double skalarprodukt(const math::Vektor& lhs, const math::Vektor& rhs);
	double kreuzprodukt(const  math::Vektor& lhs, const  math::Vektor& rhs);


	bool linearAbhaengig2Vek(const  math::Vektor& rhs, const  math::Vektor& lhs);
	bool istIdentisch(const  math::Vektor& g1_stuetzvektor, const  math::Gerade& g2_richtungsvektor);
	bool istWindschief(const  math::Gerade& g1, const  math::Gerade& g2_richtungsvektor);
}