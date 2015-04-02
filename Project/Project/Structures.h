#pragma once

#include "Constants.h"

using namespace std;

struct Costumer;
struct Market;
struct Queue;

/**
* Implementation Costumer structure
* @author Dominik Voda [VOD0034]
*/
struct Costumer{
	/**
	* @var unsigned int id 
	*/
	unsigned int id;
	/**
	* @var unsigned int number of products in basket
	*/
	unsigned int products;
};

/**
* Implementation Market structure
*/
struct Market
{
	/**
	* @var int number of costumers who have been or are in market
	*/
	int costumers;
	/**
	* @var int number of costumers who are in queues
	*/
	int costumersInQueue;
	/**
	* @var Queue* array of cashDesks in market
	*/
	Queue * cashDesks[NUM_CASHDESKS];
};

/**
* Implementation Queue structure as array
*/
struct Queue{
	/**
	* @var Costumer* array of costumers in queue
	*/
	Costumer * costumers[MAX_COSTUMERS];

	/**
	* @var int head index of queue
	*/
	int head;

	/**
	* @var int tail index of queue
	*/
	int tail;

	/**
	* @var int number of costumers in queue
	*/
	int numberOfItems;

	/**
	* Put new item to Queue
	* @param x pointer to Costumer
	*/
	void put(Costumer * x);

	/**
	* Get first item from Queue
	* @return pointer to Costumer
	*/
	Costumer * get();
};