// Graphs.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Graph.h"
#include <iostream>

using namespace std;

const unsigned int size = 8;


int _tmain(int argc, _TCHAR* argv[])
{
	Graph *list = new Graph(size);
	list->AddEdge(1, 2);
	list->AddEdge(1, 3);
	list->AddEdge(2, 4);
	list->AddEdge(2, 5);
	list->AddEdge(3, 6);
	list->AddEdge(3, 7);
	list->AddEdge(6, 8);

	list->TraverseBFS(1);
	return 0;
}

