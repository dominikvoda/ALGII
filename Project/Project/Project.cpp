#include "Structures.h"
#include "Functions.h"
#include <iostream>

using namespace std;

/**
* Main function of Project
* @author Dominik Voda [VOD0034]
*/
int main()
{
	Market * market = new Market();
	firstInit(market);
	while (market->costumersInQueue > 0){
		onSales(market);
		createNewCostumer(market);
	}
	cleanMemory(market);
	return 0;
}

