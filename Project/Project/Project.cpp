#include "Structures.h"
#include "Functions.h"
#include <iostream>

using namespace std;
using namespace Functions;

int main()
{
	Market * market = new Market;

	firstInit(market);

	while (market->costumers < MAX_COSTUMERS){
		createNewCostumer(market);
	}

	cout << market->costumers << endl;

	return 0;
}

