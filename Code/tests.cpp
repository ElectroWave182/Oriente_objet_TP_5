# include <iostream>

# include "Ecran.cpp"

using namespace std;


int main ()
{

	// 1.2)

	Ecran samsung (6, 3);
	afficherVecteur (samsung.monMatAffichage);
	
	
	// 1.3)
	
	samsung.rafraichir ();
	
	
	return 0;
	
}

