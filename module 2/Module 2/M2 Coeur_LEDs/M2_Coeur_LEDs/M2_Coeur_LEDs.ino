#include "coeur.h"

int tab[10] = { 2,3,4,5,6,7,8,9,10,11 };
// La fonction setup marche quand on appuit sur reset.
void setup() {
  for (int i = 0; i < 10; i++)
  {
    pinMode(tab[i], OUTPUT);
  }
  pinMode(0, INPUT);
}

// La fonction loop marche encore et encore jusqu'à la coupure du courant.
void loop()
{
  switch (modeAffichage)
  {
  case 0: allLEDs(tab); break;
  case 1: uneLEDsurX(tab); break;
  case 2: LEDX(tab); break;
  case 3: chenille(tab); break;
  default: break;
  }
}
