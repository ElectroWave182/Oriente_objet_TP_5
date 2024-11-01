# ifndef  ECRAN_HEADER
# define ECRAN_HEADER
# include <string>
# include <vector>

using namespace std;


class Ecran
{

	private:
	  
		string monSousTitre = "";
		string monSurTitre = "";


	public:

		enum static TypePixels {Balle, Fond};
		vector<TypePixels> monMatAffichage;
		string monSymboleBord = "\033[1;47m  \033[0m";
		string monSymboleFond = "\033[1;43m  \033[0m";
		string monSymboleBalle = "\033[1;46m  \033[0m";

		int monLargeur;
		int monHauteur;
		Ecran(int largeur, int hauteur);

		void reglePixel (int i, int j, TypePixels val);
		void rafraichir();
		void regleSousTitre(std::string s);
		void regleSurTitre(std::string s);
  
};


# endif
