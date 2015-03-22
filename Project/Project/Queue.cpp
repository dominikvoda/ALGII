#include "Queue.h"
#include "Structures.h"
#include <iostream>
#include <iomanip>

namespace QueueInArray
{

	void Init(Queue& Q)
	{
		Q.Head = Q.Tail = 0;
		Q.Data = new Costumer[MAX_COSTUMERS / NUM_CASHDESKS];
	}

	void Clear(Queue& Q)
	{
		Q.Head = Q.Tail = 0;
	}

	void Put(Queue& Q, Costumer X)
	{
		if (!IsFull(Q))
		{
			Q.Data[Q.Tail] = X;
			Q.Tail += 1;
			Q.Tail %= Q.QueueSize;
		}
		else
		{
			cerr << "Overflow!" << endl;
		}
	}

	Costumer Get(Queue& Q)
	{
		if (!IsEmpty(Q))
		{
			Costumer x = Q.Data[Q.Head];
			Q.Head += 1;
			Q.Head %= Q.QueueSize;
			return x;
		}
		else
		{
			Costumer x;
			cerr << "Underflow!" << endl;
			return x;
		}
	}

	bool IsEmpty(const Queue& Q)
	{
		return Q.Head == Q.Tail;
	}

	bool IsFull(const Queue& Q)
	{
		return Q.Head == (Q.Tail + 1) % Q.QueueSize;
	}

};