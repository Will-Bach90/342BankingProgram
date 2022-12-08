// BSTree.h
// Created by Johanna Thanh Vo
// Created on December 1, 2022
// A part of Program5 JollyBanker
#pragma once
#include "BankAccount.h"
#include "BankAccount.cpp"
#include "Funds.h"
using namespace std;

class BSTree
{
	public:
		BSTree();
		~BSTree();

		//Insert a new account 
		bool Insert(BankAccount *acc);

<<<<<<< HEAD
		bool Retrieve(const int &id, BankAccount *&acc) const;
		// Display information on all accounts
		void Display() const;
		void Empty();
		bool isEmpty() const;

	private:
		struct Node
		{
			BankAccount *pAcct;
			Node *right;
			Node *left;
		};
		Node *root;
		// delete all information in BSTree
		void clear(Node *node);
		// Insert recursive helper - has to be AFTER Node has been declared
		bool InsertHelper(Node *cur, BankAccount *insert);
		/// Display helper - traverses inorder
		void PrintHelper(Node *printNode) const;
=======
	bool Retrieve(const int &id, BankAccount *&acc) const;
    // Display information on all accounts
	void Display() const;
	void Empty(); // delete root
	bool isEmpty() const;

private:
	struct Node
	{
		BankAccount *pAcct;
		Node *right;
		Node *left;
	};
	Node *root;
	// delete all information o in BSTree
	void clear(Node *node);
	// Insert recursive helper - has to be AFTER Node has been declared
	bool InsertHelper(Node *cur, BankAccount *insert);
	/// Display helper - traverses inorder
	void PrintHelper(Node *printNode) const;
>>>>>>> f2cd516 (added comments)
};
