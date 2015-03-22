#include "Queue.h"
#include "Structures.h"
#include "Functions.h"

using namespace std;
using namespace QueueInArray;
using namespace Functions;

int main()
{
	CashDesk * desks = new CashDesk[NUM_CASHDESKS];
	Costumer * costumers = new Costumer[MAX_COSTUMERS];
	Market * market = new Market;

	firstInit(market, desks);

	return 0;
}

