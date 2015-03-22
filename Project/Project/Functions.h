#include "Structures.h"
#include <iostream>

/**
* @author Dominik Voda [VOD0034]
*/


/**
* Inicializatim Market values and structures
* @param market pointer to Market structure
*/
void firstInit(Market * market);

/**
* Create new costumer and put into shortest Queue
* @param market pointer to Market
*/
void createNewCostumer(Market * market);

/**
* Find shortest Queue and return index
* @param market pointer to Market
*/
int findShortestQueue(Market * market);

/**
* Remove product from basket of costumers on head of Queues or remove costumers with zero product in basket from Queue
* @param market pointer to Market
*/
void onSales(Market * market);