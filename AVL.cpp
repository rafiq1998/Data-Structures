#include <iostream>
#include "Tree.h"
using namespace std;
int main()
{
	Tree* t = new Tree();
	t->root = t->insert(t->root, 10);
	t->root = t->insert(t->root, 20);
	t->root = t->insert(t->root, 30);
	t->root = t->insert(t->root, 40);
	t->root = t->insert(t->root, 50);
	t->root = t->insert(t->root, 25);
	t->preOrder(t->root);
}
