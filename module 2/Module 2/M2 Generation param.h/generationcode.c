#include "generationCode.h"

void generateHeader(int *modeAffichage, int *nbLedsAllummees, int *ledAllumee)
{

	printf("En cours de generation...\n");
	FILE *fout = fopen("C:\\Users\\User\\Desktop\\Biblio\\M2 Generation param.h\\test\\param.h", "w+");
	fprintf(fout, "#pragma once\n\n");
	fprintf(fout, "int modeAffichage = %d;\nint nbLedsAllumees = %d;\nint ledAllumee = %d;\n", *modeAffichage, *nbLedsAllummees, *ledAllumee);
	printf("Succes !");
}
