#include "Structures.h"
#include "Functions.h"
#include <iostream>

using namespace std;

int main()
{
	Market * market = new Market();

	firstInit(market);

	while (market->costumersInQueue > 0){
		onSales(market);
		createNewCostumer(market);
	}

	cout << "Market is closed" << endl;

	return 0;
}

