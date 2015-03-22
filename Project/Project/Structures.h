#pragma once

#include "Constants.h"

using namespace std;

struct Costumer;
struct Market;
struct Queue;

struct Costumer{
	unsigned int id;
	unsigned int products;
};

struct Market
{
	int costumers;
	int costumersInQueue;
	Queue * cashDesks[NUM_CASHDESKS];
};

struct Queue{
	Costumer * costumers[MAX_COSTUMERS];
	int head;
	int tail;
	int numberOfItems;

	void put(Costumer * x);
	Costumer * get();
};