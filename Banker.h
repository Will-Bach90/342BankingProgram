// Testing this structure?
//
//
//

#pragma once
#include <iostream>
#include <queue>
#include <cmath>
#include <string>
#include "BSTree.h"
#include "Transaction.h"
using namespace std;

class Banker
{
	public:
		Banker();
		~Banker();

		queue<string> ReadTXNsFromFile();
		bool ProcessTXNs();
		bool PrintOutBalances();

		int getIDs(int &id);

	private:
		BSTree accounts;
		queue<Transaction> txns;

}
