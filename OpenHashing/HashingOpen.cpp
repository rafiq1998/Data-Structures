#include <iostream>
#include <stdio.h>
#include "HashTable.h"
using namespace std; 
int main()
{
	HashTable* h = new HashTable();
	h->insert(22);
	h->insert(11);
	h->insert(21);
	cout << h->deleteElement(21);
	cout << h->deleteElement(123);
}