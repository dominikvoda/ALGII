#pragma once

#include "Queue.h"

struct Costumer;
struct Market;

using namespace QueueInArray;
using namespace std;

struct Costumer{
	unsigned int id;
	unsigned int products;
};

struct Market
{
	int costumers = 0;
	Queue cashDesks[NUM_CASHDESKS];
};