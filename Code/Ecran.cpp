# include <iostream>
# include <bits/stdc++.h>

# include "Ecran.h"

using namespace std;


void afficherVecteur
(vector <auto> & affiche)
{
	for
	(auto element: affiche)
	{
		cout
			<< to_string (element)
			<< "\n"
		;
	}
}


Ecran:: Ecran
(
	int largeur,
	int hauteur
)
{
	// 1.2)

	Ecran:: monLargeur = largeur;
	Ecran:: monHauteur = hauteur;
	
	for
	(
		int _ = 0;
		_ < largeur * hauteur;
		_ ++
	)
	{
		Ecran:: monMatAffichage.push_back (Ecran:: TypePixels:: Fond);
	}

}



void
Ecran::regleSousTitre(string s){
  monSousTitre = s;
}

void
Ecran::regleSurTitre(string s){
  monSurTitre = s;
}

void
Ecran::reglePixel(int i, int j, Ecran::TypePixels val){
  // Doit mettre à jour la valeur du pixel
  
}


void
Ecran::rafraichir(){
  system("clear");
  cout << monSousTitre << endl;
  for (auto i = 0; i <monLargeur+2; i++){
    cout << monSymboleBord;
  }
  cout<< endl;
  for (auto i = 0; i <monHauteur; i++){
    cout << monSymboleBord;
    for (auto j = 0; j <monLargeur; j++){
      unsigned int index = (monHauteur-i-1)*monLargeur+j;
      Ecran::TypePixels estAllume = monMatAffichage[index];
      switch (estAllume) {
        case Ecran::TypePixels::Fond:
          cout<< monSymboleFond;
          break;
        case Ecran::TypePixels::Balle:
          cout<< monSymboleBalle;
          break;
        default:
          break;
      }
    }
    cout << monSymboleBord<<endl;
  }
  for (auto i = 0; i <monLargeur+2; i++){
    cout << monSymboleBord;
  }
  cout<< endl;
  cout << monSurTitre << endl;
  
}
