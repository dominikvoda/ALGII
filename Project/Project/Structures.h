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
	int costumers = 0;
	Queue * cashDesks[NUM_CASHDESKS];
};

struct Queue{
	int size = MAX_COSTUMERS / NUM_CASHDESKS;
	Costumer * costumers[MAX_COSTUMERS / NUM_CASHDESKS];
	int head = 0;
	int tail = 0;
	int numberOfItems = 0;

	void put(Costumer * x);
	Costumer * get();
};