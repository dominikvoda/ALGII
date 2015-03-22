/**
 * Testovac� program pro seznam implementovan� v poli.
 */
#include <iostream>
#include <iomanip>
#include "List.h"

using namespace std;
using namespace ListInArray;

/**
 * Uk�zka vyhled�v�n� prvku v seznamu
 *
 * @param L Prohled�van� seznam
 * @param X Hledan� prvek
 */
void SearchTest(const List& L, int X)
{
	if (Search(L, X))
		cout << X << " is found." << endl;
	else
		cout << X << " is is not found." << endl;
	cout << endl;
}

/**
 * Uk�zka testu pr�zdn�ho seznamu
 *
 * @param L Testovan� seznam
 */
void IsEmptyTest(const List& L)
{
	cout << endl;
	if (IsEmpty(L))
		cout << "List is empty." << endl;
	else
		cout << "List is not empty." << endl;
	cout << endl;
}

/**
 * Uk�zka pr�ce iter�toru
 *
 * @param L Seznam
 */
void IteratorTest(List& L)
{
	cout << "List iteration test: ";
	Reset(L);
	while(!IsEnd(L))
	{
		cout << Current(L) << ", ";
		MoveNext(L);
	}
	cout << "Iteration complete" << endl << endl;
}


/**
 * Hlavn� funkce programu
 */
void main()
{
	List L;
	Init(L);

	IsEmptyTest(L);
	cout << "Number of elements: " << Count(L) << endl;
	IteratorTest(L);
	Report(L);

	for(int i = 1; i < 10; i++)
	{
		Insert(L, (2*i+3) % 7);
	}
	IsEmptyTest(L);
	cout << "Number of elements: " << Count(L) << endl;
	IteratorTest(L);
	Report(L);

	SearchTest(L, 4);
	SearchTest(L, 7);

	cout << "Deleting 7" << endl;
	Delete(L, 7);
	cout << "Deleting 4" << endl;
	Delete(L, 4);

	IsEmptyTest(L);
	cout << "Number of elements: " << Count(L) << endl;
	IteratorTest(L);
	Report(L);

	Clear(L);
	IsEmptyTest(L);
	cout << "Number of elements: " << Count(L) << endl;
	IteratorTest(L);
	Report(L);
}
