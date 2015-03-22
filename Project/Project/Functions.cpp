#include "Structures.h"
#include "Functions.h"
#include <iostream>

using namespace std;

void Queue::put(Costumer * x){
	numberOfItems++;
	costumers[tail] = x;
	tail++;
}

Costumer * Queue::get(){
	int tmp = head;
	head++;
	return costumers[tmp];
}	

	void firstInit(Market * market){
		Costumer * newCostumer;
		newCostumer->id = 0;
		newCostumer->products = rand() % MAX_PRODUCTS;
		market->cashDesks[0]->put(newCostumer);
		market->costumers++;
	}

	void createNewCostumer(Market * market){
		if (market->costumers == MAX_COSTUMERS)
			return;
		Costumer * newCostumer;
		int queue = findShortestQueue(market);
		newCostumer->id = ++market->costumers;
		newCostumer->products = rand() % MAX_PRODUCTS;
		market->cashDesks[queue]->put(newCostumer);
		cout << "G" << newCostumer->id << "[" << newCostumer->products << "]" << endl;
	}

	int findShortestQueue(Market * market){
		int tmp = 0;
		for (size_t i = 1; i < NUM_CASHDESKS; i++){
			if (market->cashDesks[i]->numberOfItems < market->cashDesks[tmp]->numberOfItems)
				tmp = i;
		}
		return tmp;
	}