#include "Structures.h"
#include "Functions.cpp"
#include <iostream>

using namespace std;

int main()
{
	Market * market;

	firstInit(market);

	while (market->costumers < MAX_COSTUMERS){
		createNewCostumer(market);
	}

	cout << market->costumers << endl;

	return 0;
}

