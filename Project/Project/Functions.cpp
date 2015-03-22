#include "Functions.h"
#include <iostream>

using namespace std;

namespace Functions{

	void firstInit(Market * market){
		for (size_t i = 0; i < NUM_CASHDESKS; i++){
			Init(market->cashDesks[i]);
		}
		Put(market->cashDesks[0], 0);
		market->costumers++;
	}

	void createNewCostumer(Market * market){
		if (market->costumers == MAX_COSTUMERS)
			return;
		Costumer newCostumer;
		int queue = findShortestQueue(market);
		newCostumer.id = ++market->costumers;
		newCostumer.products = rand() % MAX_PRODUCTS;
		Put(market->cashDesks[queue], market->costumers);
		cout << "G" << newCostumer.id << "[" << newCostumer.products << "]" << endl;
	}

	int findShortestQueue(Market * market){
		int tmp = 0;
		for (size_t i = 1; i < NUM_CASHDESKS; i++){
			if (market->cashDesks[i].Tail < market->cashDesks[tmp].Tail)
				tmp = i;
		}
		return tmp;
	}
}