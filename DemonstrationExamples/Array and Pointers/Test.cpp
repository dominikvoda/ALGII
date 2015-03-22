#include "ArrayAndPointers.h"



using namespace ArrayAndPointers;

/**
 * Hlavní funkce programu
 */
void main()
{
	cout << "Jednorozmerne pole, alokace a dealokace, predavani pole jako parametr" << endl;
	TestArray();
	cout << endl << endl;

	cout << "Ukazka prace s dvourozmernym polem - alokace, naplneni, tisk a dealokace" << endl;
	double** M = AllocateMatrix(RowNumber, ColumnNumber);
	FillMatrix(M, RowNumber, ColumnNumber);
	PrintMatrix(M, RowNumber, ColumnNumber);
	DeallocateMatrix(M, RowNumber);
}

