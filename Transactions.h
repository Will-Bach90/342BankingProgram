// Transactions.h
// Created by Chris Jensen
// Created on December 6, 2022
// A part of Program5 JollyBanker

#pragma once
#include <iostream>
#include <string>
#include "BSTree.h"
#include "Funds.h"
#include "BankAccount.h"
using namespace std;

class Transactions
{
public:
	Transactions();
	~Transactions();

	//Gathers account information from banker and creates account instance which is inserted into BSTree
	bool openAccount(BSTree &tree, const string firstName, const string lastName, const int accountId);
	//Deposits funds into given fund type from an account
	bool deposit(BankAccount *&account, int fundType, int dollarAmount, string transaction);
	//Withdraws funds from given fund type from an account
	bool withdraw(BankAccount *&account, int fundType, int dollarAmount, string transaction);
	//Transfers funds between funds utilizing deposit and withdraw functions
	bool transfer(BankAccount *&accountIdOne, int accountOneFund, BankAccount *&accountIdtwo, int accountTwoFund, int dollarAmount, string transaction);
	//Adds the transaction string to indidivdual funds 
	bool addToHistory(BankAccount *&accountId, int fundType, string transaction);

};
