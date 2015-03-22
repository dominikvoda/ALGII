#include "Structures.h"
#include "Functions.h"
#include <iostream>

using namespace std;

void Queue::put(Costumer * x){
	this->numberOfItems++;
	this->costumers[tail] = x;
	this->tail++;
}

Costumer * Queue::get(){
	int tmp = head;
	this->head++;
	this->numberOfItems--;
	return costumers[tmp];
}

void firstInit(Market * market){
	market->costumers = 0;
	market->costumersInQueue = 0;
	for (size_t i = 0; i < NUM_CASHDESKS; i++){
		market->cashDesks[i] = new Queue;
		market->cashDesks[i]->head = 0;
		market->cashDesks[i]->tail = 0;
		market->cashDesks[i]->numberOfItems = 0;
		for (size_t j = 0; j < MAX_COSTUMERS; j++){
			market->cashDesks[i]->costumers[j] = new Costumer;
		}
	}
	createNewCostumer(market);
}

void createNewCostumer(Market * market){
	if (market->costumers == MAX_COSTUMERS)
		return;
	Costumer * newCostumer = new Costumer();
	int queue = findShortestQueue(market);
	int queueCostumers = market->cashDesks[queue]->numberOfItems + 1;
	newCostumer->id = ++market->costumers;
	newCostumer->products = rand() % MAX_PRODUCTS;
	cout << "G" << newCostumer->id << "[" << newCostumer->products << "]" << endl;
	market->cashDesks[queue]->put(newCostumer);
	market->costumersInQueue++;
	cout << "V" << newCostumer->id << "[F" << queue << "]" << "[" << queueCostumers << "]" << endl;
}

int findShortestQueue(Market * market){
	int tmp = 0;
	for (size_t i = 1; i < NUM_CASHDESKS; i++){
		if (market->cashDesks[i]->numberOfItems < market->cashDesks[tmp]->numberOfItems)
			tmp = i;
	}
	return tmp;
}
void onSales(Market * market){
	for (size_t i = 0; i < NUM_CASHDESKS; i++){
		if (market->cashDesks[i]->numberOfItems > 0){
			int head = market->cashDesks[i]->head;
			Costumer * currentCostumer = market->cashDesks[i]->costumers[head];
			if (currentCostumer->products > 0){
				currentCostumer->products--;
				cout << "K" << currentCostumer->id << "[" << currentCostumer->products << "]" << endl;
			}
			else{
				market->cashDesks[i]->get();
				int queueCostumers = market->cashDesks[i]->numberOfItems;
				market->costumersInQueue--;
				cout << "O" << currentCostumer->id << "[F" << i << "]" << "[" << queueCostumers << "]" << endl;
			}
		}
	}
}