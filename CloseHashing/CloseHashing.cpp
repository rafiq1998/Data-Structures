#include <iostream>
#include <stdio.h>
#include "Hashing.h"
using namespace std;
int main()
{
	int* l = new int[10];
	l[0] = 1;
	cout << l[0];
	Hashing* h = new Hashing();
	h->insert(10);
	h->insert(3);
	h->insert(4);
	h->insert(23);
	h->insert(24);
	h->insert(3);
	h->insert(123);
	h->search(10);
	h->search(312);
	h->search(24);
}