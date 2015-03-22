#include "Constants.h"
#include "Structures.h"

using namespace std;

/**
* Prostor jmen pro projekt Queue in Array.
*/
namespace QueueInArray
{

	/**
	* Implementace fronty v poli. Fronta je implementov�na jako kruhov� buffer.
	* Implementace v poli znamen�, �e ukazatel je v tomto p��pad� realizov�n jako ��slo typu int a ukazatel je de-facto index v poli.
	*
	* @author      Ji�� Dvorsk� <jiri.dvorsky@vsb.cz>
	*/
	struct Queue
	{
		int QueueSize = MAX_COSTUMERS / NUM_CASHDESKS;
		/**
		* Pole obsahuj�c� data ulo�en� do fronty.
		*/
		Costumer Data[MAX_COSTUMERS / NUM_CASHDESKS];
		/**
		* Hlava fronty tj. ukazatel na prvn� prvek fronty v poli {@link #Data}.
		*/
		int Head;
		/**
		* Ocas fronty tj. ukazatel na prvn� voln� prvek za koncem fronty v poli {@link #Data}.
		*/
		int Tail;
	};


	/**
	* Inicializace fronty.
	*
	* @param Q Inicializovan� fronta
	*/
	void Init(Queue& Q);

	/**
	* Smaz�n� cel�ho obsahu fronty.
	*
	* @param Q Fronta
	*/
	void Clear(Queue& Q);

	/**
	* Vlo�en� prvku do fronty.
	*
	* @param Q Fronta
	* @param X Vkl�dan� prvek
	*/
	void Put(Queue& Q, const int X);

	/**
	* Vyjmut� prvku z fronty.
	*
	* @param Q Fronta
	* @return Prvek z hlavy fronty
	*/
	Costumer Get(Queue& Q);

	/**
	* Test je-li fronta pr�zdn�.
	*
	* @param Q Fronta
	* @return Funkce vrac� true pokud je fronta pr�zdn�, jinak false.
	*/
	bool IsEmpty(const Queue& Q);

	/**
	* Test je-li fronta pln�, tj. nelze vlo�it dal�� prvek.
	*
	* @param Q Fronta
	* @return Funkce vrac� true pokud je fronta pln�, jinak false.
	*/
	bool IsFull(const Queue& Q);

}
