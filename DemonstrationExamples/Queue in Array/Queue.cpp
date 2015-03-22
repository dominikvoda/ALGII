#include "Queue.h"

namespace QueueInArray
{

	void Init(Queue& Q)
	{
		Q.Head = Q.Tail = 0;
	}

	void Clear(Queue& Q)
	{
		Q.Head = Q.Tail = 0;
	}

	void Put(Queue& Q, const int X)
	{
		if (!IsFull(Q))
		{
			Q.Data[Q.Tail] = X;
			Q.Tail += 1;
			Q.Tail %= QueueSize;
		}
		else
		{
			cerr << "Overflow!" << endl;
		}
	}

	int Get(Queue& Q)
	{
		if (!IsEmpty(Q))
		{
			int x = Q.Data[Q.Head];
			Q.Head += 1;
			Q.Head %= QueueSize;
			return x;
		}
		else
		{
			cerr << "Underflow!" << endl;
			return 0;
		}
	}

	bool IsEmpty(const Queue& Q)
	{
		return Q.Head == Q.Tail;
	}

	bool IsFull(const Queue& Q)
	{
		return Q.Head == (Q.Tail+1) % QueueSize;
	}

	void Report(const Queue& Q)
	{
		cout << "Queue report" << endl;
		cout << "--------------------------" << endl;
		cout << "Head: "<< Q.Head << endl;
		cout << "Tail: "<< Q.Tail << endl;
		for(int i = 0; i < QueueSize; i++)
		{
			cout << i << "   " << Q.Data[i] << endl;
		}
		cout << "--------------------------" << endl;
		cout << endl;
	}

}
