#ifndef CASSE_BRIQUE_HEADER
#define CASSE_BRIQUE_HEADER
#include <string>
#include <vector>
#include "EcranASCII.h"

class CasseBrique {

  int posXJoueur = 3;
  int posYJoueur = 3;
  
  EcranASCII monEcran;
  
public:
  CasseBrique(const EcranASCII &unEcran);
  void miseAjour();
  void deplaceJoueurDroite();
  void deplaceJoueurGauche();
  void initJoueur();
  
private:
  int score = 0;
  
};

#endif

