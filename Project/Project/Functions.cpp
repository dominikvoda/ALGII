#include "Functions.h"

using namespace std;

namespace Functions{

	void firstInit(Market * market, CashDesk * desks){
		Costumer firstCostumer;
		firstCostumer.id = 0;
		for (size_t i = 0; i < NUM_CASHDESKS; i++){
			Init(desks[i].q);
		}
		Put(desks[0].q, firstCostumer.id);
	}

	void createNewCostumer(){

	}
}