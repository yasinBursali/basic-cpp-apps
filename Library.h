#ifndef LIBRARY_H
#define LIBRARY_H
#include <string>
#include <vector>
#include <algorithm>
#include "Borrower.h"
#include "Item.h"
using namespace std;

class Item;
class Borrower;

class Library{
private:
	vector<Item *> items;
	vector<Borrower *> borrowers;
public:
	Library(){}
	bool add(Item *item);
	bool add(Borrower *borrower);
	void listBorrowers() const;
	void listItems() const;
	Item* findItem(int itemID);
	Borrower* findBorrower(string name);
	bool acceptBorrow(string borrowerName, int itemID);
	~Library();
};

#endif