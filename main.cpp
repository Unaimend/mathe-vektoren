#include "Mathe.h"
#include <iostream>

int main()
{
	std::cout << "Bitte waehlen Sie" << std::endl;
	
	math::Vektor test(2.0, 2.0, 2.0);
	math::Vektor test2(3.0, 2.0, 2.0);
	//std::cout << skalarprodukt(test, test2) << std::endl;

	math::Vektor test3 = test * 2 ;
	math::Vektor test4 = test3 - test;


	bool linearanhaegig = math::linearAbhaengig2Vek(test, test3);

	system("PAUSE");

}
