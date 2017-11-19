#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "menu.c"
#include "generationCode.c"

int main()
{
	int modeAffichage = -1;
	int nbLedsAllumees = -1;
	int ledAllumee = -1;
	showMenu(&modeAffichage, &nbLedsAllumees, &ledAllumee);
	generateHeader(&modeAffichage, &nbLedsAllumees, &ledAllumee);
	_getch();
	return 0;
}
