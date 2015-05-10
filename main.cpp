#include "Mathe.h"
#include "functions.h"
#include <iostream>

int main()
{
	std::cout << "Bitte waehlen Sie" << std::endl;
	
	math::Vektor test(6.0, 3.0, 2.0);
	math::Vektor test2(4.0, 2.0, 1.0);
	math::Vektor test3(-3.0, 3.0, 2.0);
	math::Vektor test4(5.0, 2.0, 3.0);
	//std::cout << skalarprodukt(test, test2) << std::endl;
	math::Gerade g1(test, test2);
	math::Gerade g2(test3, test4);
	/*
	g1: x = (6) + s*(4)
			(3) + s*(2)
			(2) + s*(-1)

	g2: x = (-3) + t*(5)
			(3) + t*(-2)
			(0) + t*(3)
		
	*/
	//MACHT NUR SINN WENN LA 1 RETURNT
	bool is = math::istWindschief(g1, g2);



	system("PAUSE");

}
