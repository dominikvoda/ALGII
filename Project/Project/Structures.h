#pragma once

#include "Queue.h"

struct CashDesk;
struct Costumer;
struct Market;

using namespace QueueInArray;

struct CashDesk
{
	unsigned int currentCostumers;
	Queue q;
};

struct Costumer{
	unsigned int id;
	unsigned int products;
};

struct Market
{
	CashDesk * cashDesks;
	Costumer * costumers;
};