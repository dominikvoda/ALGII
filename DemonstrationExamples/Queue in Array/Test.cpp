/**
 * Testovací program pro frontu implementovanou v poli.
 */
#include "Queue.h"

using namespace QueueInArray;

/**
 * Hlavní funkce programu
 */
void main()
{
	Queue Q;
	Init(Q);
	cout << "IsEmpty: " << IsEmpty(Q) << endl;
	cout << "IsFull: " << IsFull(Q) << endl;
	Report(Q);

	Put(Q, 5);
	Put(Q, 10);
	Put(Q, 15);
	Put(Q, 3);
	Put(Q, 8);
	cout << "IsEmpty: " << IsEmpty(Q) << endl;
	cout << "IsFull: " << IsFull(Q) << endl;
	Report(Q);

	cout << "Get: "<< Get(Q) << endl;
	cout << "Get: "<< Get(Q) << endl;
	cout << "IsEmpty: " << IsEmpty(Q) << endl;
	cout << "IsFull: " << IsFull(Q) << endl;
	Report(Q);

	Put(Q, 13);
	Put(Q, 14);
	cout << "IsEmpty: " << IsEmpty(Q) << endl;
	cout << "IsFull: " << IsFull(Q) << endl;
	Report(Q);

	while(!IsEmpty(Q))
	{
		cout << Get(Q) << ", ";
	}
	cout << endl;
	cout << "IsEmpty: " << IsEmpty(Q) << endl;
	cout << "IsFull: " << IsFull(Q) << endl;
	Report(Q);

}
