#include "Constants.h"

using namespace std;

/**
* Prostor jmen pro projekt Queue in Array.
*/
namespace QueueInArray
{

	/**
	* Implementace fronty v poli. Fronta je implementována jako kruhový buffer.
	* Implementace v poli znamená, že ukazatel je v tomto pøípadì realizován jako èíslo typu int a ukazatel je de-facto index v poli.
	*
	* @author      Jiøí Dvorský <jiri.dvorsky@vsb.cz>
	*/
	struct Queue
	{
		int QueueSize = MAX_COSTUMERS / NUM_CASHDESKS;
		/**
		* Pole obsahující data uložená do fronty.
		*/
		int * Data;
		/**
		* Hlava fronty tj. ukazatel na první prvek fronty v poli {@link #Data}.
		*/
		int Head;
		/**
		* Ocas fronty tj. ukazatel na první volný prvek za koncem fronty v poli {@link #Data}.
		*/
		int Tail;
	};


	/**
	* Inicializace fronty.
	*
	* @param Q Inicializovaná fronta
	*/
	void Init(Queue& Q);

	/**
	* Smazání celého obsahu fronty.
	*
	* @param Q Fronta
	*/
	void Clear(Queue& Q);

	/**
	* Vložení prvku do fronty.
	*
	* @param Q Fronta
	* @param X Vkládaný prvek
	*/
	void Put(Queue& Q, const int X);

	/**
	* Vyjmutí prvku z fronty.
	*
	* @param Q Fronta
	* @return Prvek z hlavy fronty
	*/
	int Get(Queue& Q);

	/**
	* Test je-li fronta prázdná.
	*
	* @param Q Fronta
	* @return Funkce vrací true pokud je fronta prázdná, jinak false.
	*/
	bool IsEmpty(const Queue& Q);

	/**
	* Test je-li fronta plná, tj. nelze vložit další prvek.
	*
	* @param Q Fronta
	* @return Funkce vrací true pokud je fronta plná, jinak false.
	*/
	bool IsFull(const Queue& Q);

	/**
	* Pomocná funkce, která zobrazuje vnitøní strukturu fronty.
	*
	* @param Q Fronta
	*/
	void Report(const Queue& Q);

}
